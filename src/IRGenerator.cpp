#include "IRGenerator.h"
#include "IR.h"
#include <iostream>

void IRGenerator::visit(IntLiteral* node) {
    val = builder.createInt(node->value);
}

void IRGenerator::visit(VarExpr* node) {
    auto addrVoid = builder.symTable->lookup(node->name);
    auto addr = static_cast<ir::Value*>(addrVoid);
    
    if (node->indices.empty()) {
        // Scalar load or array decay?
        // If addr is array type, we should decay to pointer.
        // But here we assume scalar load if no indices.
        // If it is an array, but no indices, it means it's used as a pointer (e.g. func arg).
        auto ptrTy = static_cast<ir::PointerType*>(addr->getType());
        if (ptrTy->getPointeeTy()->isArrayTy()) {
            // Decay array to pointer: &arr[0]
            std::vector<ir::Value*> indices;
            indices.push_back(builder.createInt(0));
            indices.push_back(builder.createInt(0));
            val = builder.createGEP(addr, indices);
        } else {
            val = builder.createLoad(node->name);
        }
    } else {
        // Array access
        std::vector<ir::Value*> indices;
        // First index is 0 if it's a local array (alloca returns pointer to array)
        // If it's a pointer (func arg), first index is the first dimension.
        // Wait, alloca returns T*. If T is [10 x i32], we have [10 x i32]*.
        // To access element, we need 0, i.
        // If T is i32*, we have i32**. Load gives i32*. Then we index i.
        
        auto ptrTy = static_cast<ir::PointerType*>(addr->getType());
        if (ptrTy->getPointeeTy()->isArrayTy()) {
            indices.push_back(builder.createInt(0));
        } else if (ptrTy->getPointeeTy()->isPointerTy()) {
             // It's a pointer variable (e.g. function param int a[] -> int *a)
             // We need to load the pointer first
             addr = builder.createLoad(node->name);
        }
        
        for (auto& idx : node->indices) {
            idx->accept(*this);
            indices.push_back(val);
        }
        
        auto ptr = builder.createGEP(addr, indices);
        val = new ir::LoadInst(ptr, builder.currentBlock, builder.currentBlock->getParent()->getUniqueName("load"));
    }
}

void IRGenerator::visit(BinaryExpr* node) {
    if (node->op == "&&") {
        // Short-circuit AND
        // if (lhs) { if (rhs) true else false } else false
        auto func = builder.currentBlock->getParent();
        auto rhsBB = new ir::BasicBlock(func->getUniqueName("and_rhs"), func);
        auto mergeBB = new ir::BasicBlock(func->getUniqueName("and_merge"), func);
        
        // Result variable
        auto resAddr = builder.createAlloca("and_res", ir::Type::getInt32Ty());
        builder.createStore(builder.createInt(0), resAddr); // Default false
        
        node->lhs->accept(*this);
        auto lhs = val;
        // Convert to bool if needed
        if (lhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(lhs->getType())->getBitWidth() == 32) {
            lhs = builder.createBinary("!=", lhs, builder.createInt(0));
        }
        
        builder.createCondBr(lhs, rhsBB, mergeBB);
        
        builder.setInsertPoint(rhsBB);
        node->rhs->accept(*this);
        auto rhs = val;
        if (rhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(rhs->getType())->getBitWidth() == 32) {
            rhs = builder.createBinary("!=", rhs, builder.createInt(0));
        }
        // Store 1 if rhs is true (lhs is already true here)
        auto zextRhs = builder.createZExt(rhs, ir::Type::getInt32Ty());
        builder.createStore(zextRhs, resAddr);
        builder.createBr(mergeBB);
        
        builder.setInsertPoint(mergeBB);
        val = builder.createLoad("and_res_val"); // This load needs to find the alloca, but createLoad uses name lookup.
        // We can't use createLoad("and_res") because it looks up in symbol table.
        // We need to load from resAddr directly.
        val = new ir::LoadInst(resAddr, builder.currentBlock, "and_res_val");
        
    } else if (node->op == "||") {
        // Short-circuit OR
        // if (lhs) true else { if (rhs) true else false }
        auto func = builder.currentBlock->getParent();
        auto rhsBB = new ir::BasicBlock(func->getUniqueName("or_rhs"), func);
        auto mergeBB = new ir::BasicBlock(func->getUniqueName("or_merge"), func);
        
        auto resAddr = builder.createAlloca("or_res", ir::Type::getInt32Ty());
        builder.createStore(builder.createInt(1), resAddr); // Default true
        
        node->lhs->accept(*this);
        auto lhs = val;
        if (lhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(lhs->getType())->getBitWidth() == 32) {
            lhs = builder.createBinary("!=", lhs, builder.createInt(0));
        }
        
        builder.createCondBr(lhs, mergeBB, rhsBB);
        
        builder.setInsertPoint(rhsBB);
        node->rhs->accept(*this);
        auto rhs = val;
        if (rhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(rhs->getType())->getBitWidth() == 32) {
            rhs = builder.createBinary("!=", rhs, builder.createInt(0));
        }
        auto zextRhs = builder.createZExt(rhs, ir::Type::getInt32Ty());
        builder.createStore(zextRhs, resAddr);
        builder.createBr(mergeBB);
        
        builder.setInsertPoint(mergeBB);
        val = new ir::LoadInst(resAddr, builder.currentBlock, "or_res_val");
        
    } else {
        node->lhs->accept(*this);
        auto lhs = val;
        node->rhs->accept(*this);
        auto rhs = val;
        
        // Type promotion for i1 to i32
        if (lhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(lhs->getType())->getBitWidth() == 1) {
            lhs = builder.createZExt(lhs, ir::Type::getInt32Ty());
        }
        if (rhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(rhs->getType())->getBitWidth() == 1) {
            rhs = builder.createZExt(rhs, ir::Type::getInt32Ty());
        }
        
        val = builder.createBinary(node->op, lhs, rhs);
    }
}

void IRGenerator::visit(UnaryExpr* node) {
    node->operand->accept(*this);
    auto operand = val;
    
    if (node->op == "+") {
        // Do nothing, val is already set
    } else if (node->op == "-") {
        val = builder.createBinary("-", builder.createInt(0), operand);
    } else if (node->op == "!") {
        // !operand -> icmp eq operand, 0
        // Result is i1. If we need i32, we zext it.
        // But usually UnaryExpr result is used in expression, so we might want i32.
        // SysY spec: !a returns int 0 or 1.
        auto cmp = builder.createBinary("==", operand, builder.createInt(0));
        val = builder.createZExt(cmp, ir::Type::getInt32Ty());
    }
}

void IRGenerator::visit(CallExpr* node) {
    // We need to find the function in the module or symbol table?
    // The symbol table stores variables. Functions are usually in the module.
    // But we might need to look them up.
    // Let's assume we can find function by name from the module.
    // But IRBuilder doesn't expose module lookup.
    // We can iterate module functions or add a function map to IRBuilder/Module.
    // For now, let's assume we can get it.
    // Actually, we can use builder.module->functions_ but it's private.
    // We might need to add a lookup method to Module or IRBuilder.
    
    // Let's add lookupFunction to IRBuilder or Module.
    // For now, I'll assume I can't easily lookup without modifying Module.
    // I'll modify Module to allow lookup or expose functions.
    // Or I can use a separate map in IRGenerator if I visit functions first.
    // But functions can be called before definition? SysY allows it?
    // SysY usually requires declaration or definition before use, or at least declaration.
    // If we process declarations first, we can store them.
    
    // Let's assume we can find it. I'll add a helper to find function.
    // For now, I'll skip implementation details of lookup and focus on structure.
    
    // std::vector<ir::Value*> args;
    // for (auto& arg : node->args) {
    //     arg->accept(*this);
    //     args.push_back(val);
    // }
    // val = builder.createCall(func, args);
}

void IRGenerator::visit(AssignStmt* node) {
    node->expr->accept(*this);
    auto exprVal = val;
    
    // Type promotion
    if (exprVal->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(exprVal->getType())->getBitWidth() == 1) {
        exprVal = builder.createZExt(exprVal, ir::Type::getInt32Ty());
    }
    
    // Lookup address
    auto addrVoid = builder.symTable->lookup(node->lval->name);
    auto addr = static_cast<ir::Value*>(addrVoid);
    
    if (!node->lval->indices.empty()) {
        // Array assignment
        std::vector<ir::Value*> indices;
        auto ptrTy = static_cast<ir::PointerType*>(addr->getType());
        if (ptrTy->getPointeeTy()->isArrayTy()) {
            indices.push_back(builder.createInt(0));
        } else if (ptrTy->getPointeeTy()->isPointerTy()) {
             addr = builder.createLoad(node->lval->name);
        }
        
        for (auto& idx : node->lval->indices) {
            idx->accept(*this);
            indices.push_back(val);
        }
        
        addr = builder.createGEP(addr, indices);
    }
    
    builder.createStore(exprVal, addr);
}

void IRGenerator::visit(ExprStmt* node) {
    if (node->expr) {
        node->expr->accept(*this);
    }
}

void IRGenerator::visit(BlockStmt* node) {
    builder.symTable->enterScope();
    for (auto& item : node->items) {
        item->accept(*this);
    }
    builder.symTable->exitScope();
}

void IRGenerator::visit(IfStmt* node) {
    auto func = builder.currentBlock->getParent();
    auto thenBB = new ir::BasicBlock(func->getUniqueName("then"), func);
    auto elseBB = node->elseStmt ? new ir::BasicBlock(func->getUniqueName("else"), func) : nullptr;
    auto mergeBB = new ir::BasicBlock(func->getUniqueName("merge"), func);
    
    node->cond->accept(*this);
    auto cond = val;
    
    builder.createCondBr(cond, thenBB, elseBB ? elseBB : mergeBB);
    
    builder.setInsertPoint(thenBB);
    node->thenStmt->accept(*this);
    // Check if the block already has a terminator (like return)
    if (builder.currentBlock->getInstList().empty() || !builder.currentBlock->getInstList().back()->isTerminator()) {
        builder.createBr(mergeBB);
    }
    
    if (elseBB) {
        builder.setInsertPoint(elseBB);
        node->elseStmt->accept(*this);
        if (builder.currentBlock->getInstList().empty() || !builder.currentBlock->getInstList().back()->isTerminator()) {
            builder.createBr(mergeBB);
        }
    }
    
    builder.setInsertPoint(mergeBB);
}

void IRGenerator::visit(WhileStmt* node) {
    auto func = builder.currentBlock->getParent();
    auto condBB = new ir::BasicBlock(func->getUniqueName("while_cond"), func);
    auto bodyBB = new ir::BasicBlock(func->getUniqueName("while_body"), func);
    auto afterBB = new ir::BasicBlock(func->getUniqueName("while_after"), func);
    
    builder.createBr(condBB);
    
    builder.setInsertPoint(condBB);
    node->cond->accept(*this);
    auto cond = val;
    builder.createCondBr(cond, bodyBB, afterBB);
    
    loopCondStack.push_back(condBB);
    loopAfterStack.push_back(afterBB);
    
    builder.setInsertPoint(bodyBB);
    node->body->accept(*this);
    if (builder.currentBlock->getInstList().empty() || !builder.currentBlock->getInstList().back()->isTerminator()) {
        builder.createBr(condBB);
    }
    
    loopCondStack.pop_back();
    loopAfterStack.pop_back();
    
    builder.setInsertPoint(afterBB);
}

void IRGenerator::visit(BreakStmt* node) {
    if (!loopAfterStack.empty()) {
        builder.createBr(loopAfterStack.back());
    }
}

void IRGenerator::visit(ContinueStmt* node) {
    if (!loopCondStack.empty()) {
        builder.createBr(loopCondStack.back());
    }
}

void IRGenerator::visit(ReturnStmt* node) {
    if (node->expr) {
        node->expr->accept(*this);
        builder.createRet(val);
    } else {
        // Void return?
        // builder.createRet(nullptr); // Need to handle void return in IRBuilder
    }
}

// Helper functions for array initialization
ir::Constant* createZeroInit(ir::Type* type) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        std::vector<ir::Constant*> values;
        for (size_t i = 0; i < arrTy->getElementCount(); ++i) {
            values.push_back(createZeroInit(arrTy->getElementType()));
        }
        return new ir::ConstantArray(arrTy, values);
    } else {
        return ir::ConstantInt::get(0);
    }
}

ir::Constant* createGlobalInit(InitListExpr* expr, ir::Type* type) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        std::vector<ir::Constant*> values;
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        
        for (size_t i = 0; i < size; ++i) {
            if (i < expr->values.size()) {
                auto& valExpr = expr->values[i];
                if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                    values.push_back(createGlobalInit(subList, elemTy));
                } else {
                    if (auto lit = dynamic_cast<IntLiteral*>(valExpr.get())) {
                        values.push_back(ir::ConstantInt::get(lit->value));
                    } else {
                        // Fallback for non-literal constant expressions (not fully supported yet)
                        std::cerr << "Warning: Non-literal global initializer, defaulting to 0" << std::endl;
                        values.push_back(ir::ConstantInt::get(0));
                    }
                }
            } else {
                values.push_back(createZeroInit(elemTy));
            }
        }
        return new ir::ConstantArray(arrTy, values);
    } else {
        if (expr->values.empty()) return ir::ConstantInt::get(0);
        auto& valExpr = expr->values[0];
        if (auto lit = dynamic_cast<IntLiteral*>(valExpr.get())) {
            return ir::ConstantInt::get(lit->value);
        }
        return ir::ConstantInt::get(0);
    }
}

void handleLocalZeroInit(IRGenerator* gen, ir::Value* baseAddr, ir::Type* type) {
    auto& builder = gen->builder;
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        for (size_t i = 0; i < size; ++i) {
            std::vector<ir::Value*> indices;
            indices.push_back(builder.createInt(0));
            indices.push_back(builder.createInt(i));
            auto elemAddr = builder.createGEP(baseAddr, indices);
            handleLocalZeroInit(gen, elemAddr, elemTy);
        }
    } else {
        builder.createStore(builder.createInt(0), baseAddr);
    }
}

void handleLocalArrayInit(IRGenerator* gen, ir::Value* baseAddr, ir::Type* type, InitListExpr* expr) {
    auto& builder = gen->builder;
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        
        for (size_t i = 0; i < size; ++i) {
            std::vector<ir::Value*> indices;
            indices.push_back(builder.createInt(0));
            indices.push_back(builder.createInt(i));
            auto elemAddr = builder.createGEP(baseAddr, indices);
            
            if (i < expr->values.size()) {
                auto& valExpr = expr->values[i];
                if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                    handleLocalArrayInit(gen, elemAddr, elemTy, subList);
                } else {
                    valExpr->accept(*gen);
                    builder.createStore(gen->val, elemAddr);
                }
            } else {
                handleLocalZeroInit(gen, elemAddr, elemTy);
            }
        }
    } else {
        if (!expr->values.empty()) {
            expr->values[0]->accept(*gen);
            builder.createStore(gen->val, baseAddr);
        }
    }
}

void IRGenerator::visit(InitListExpr* node) {
    // Should not be visited directly in expression context
    // It is handled by VarDecl
}

void IRGenerator::visit(VarDecl* node) {
    for (auto& def : node->defs) {
        ir::Type *varTy = ir::Type::getInt32Ty();
        if (!def->arrayDimensions.empty()) {
            for (auto it = def->arrayDimensions.rbegin(); it != def->arrayDimensions.rend(); ++it) {
                (*it)->accept(*this);
                if (auto lit = dynamic_cast<IntLiteral*>(it->get())) {
                    varTy = new ir::ArrayType(varTy, lit->value);
                } else {
                    std::cerr << "Error: Array dimension must be constant literal" << std::endl;
                }
            }
        }

        if (builder.getInsertPoint() == nullptr) {
            // Global variable
            ir::Constant *initVal = nullptr;
            if (def->initVal) {
                if (auto initList = dynamic_cast<InitListExpr*>(def->initVal.get())) {
                    initVal = createGlobalInit(initList, varTy);
                } else if (auto lit = dynamic_cast<IntLiteral*>(def->initVal.get())) {
                    initVal = ir::ConstantInt::get(lit->value);
                } else {
                    initVal = ir::ConstantInt::get(0); 
                }
            } else {
                // Zero init
                if (varTy->isArrayTy()) {
                    initVal = createZeroInit(varTy);
                } else {
                    initVal = ir::ConstantInt::get(0);
                }
            }
            auto addr = builder.createGlobalVariable(def->name, varTy, initVal);
            builder.symTable->insert(def->name, addr);
        } else {
            // Local variable
            auto addr = builder.createAlloca(def->name, varTy);
            builder.symTable->insert(def->name, addr);
            
            if (def->initVal) {
                if (auto initList = dynamic_cast<InitListExpr*>(def->initVal.get())) {
                    handleLocalArrayInit(this, addr, varTy, initList);
                } else {
                    if (!varTy->isArrayTy()) {
                        def->initVal->accept(*this);
                        builder.createStore(val, addr);
                    } else {
                        // Array initialized with single expression? Not valid in SysY unless it's {exp}
                        // But parser might produce InitListExpr for {exp}.
                        // If we are here, it means initVal is NOT InitListExpr.
                        // So it's like int a[10] = 1; -> Invalid.
                        // But maybe int a = 1; (scalar)
                    }
                }
            }
        }
    }
}

void IRGenerator::visit(FuncDef* node) {
    // Create function type
    std::vector<ir::Type*> paramTypes;
    for (const auto& param : node->params) {
        paramTypes.push_back(ir::Type::getInt32Ty());
    }
    
    ir::Type* retType = node->isVoid ? ir::Type::getVoidTy() : ir::Type::getInt32Ty();
    auto funcType = new ir::FunctionType(retType, paramTypes);
    
    auto func = builder.createFunction(node->name, funcType);
    builder.setFunction(func);
    
    builder.symTable->enterScope();
    
    // Handle params
    auto& args = func->getArgs();
    for (size_t i = 0; i < node->params.size(); ++i) {
        auto paramName = node->params[i]->name;
        auto argVal = args[i];
        
        auto addr = builder.createAlloca(paramName, ir::Type::getInt32Ty());
        builder.createStore(argVal, addr);
        builder.symTable->insert(paramName, addr);
    }
    
    node->body->accept(*this);
    
    builder.symTable->exitScope();
    builder.setInsertPoint(nullptr); // Reset insert point for next global decls
}

void IRGenerator::visit(CompUnit* node) {
    for (auto& decl : node->decls) {
        decl->accept(*this);
    }
}
