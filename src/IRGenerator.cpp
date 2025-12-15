#include "IRGenerator.h"
#include "IR.h"
#include <iostream>

void IRGenerator::visit(IntLiteral* node) {
    val = builder.createInt(node->value);
}

void IRGenerator::visit(VarExpr* node) {
    auto addrVoid = builder.symTable->lookup(node->name);
    if (!addrVoid) {
        std::cerr << "Error: Variable " << node->name << " not found" << std::endl;
        return;
    }
    auto addr = static_cast<ir::Value*>(addrVoid);
    
    if (auto constInt = dynamic_cast<ir::ConstantInt*>(addr)) {
        val = constInt;
        return;
    }

    if (node->indices.empty()) {
        // Scalar load or array decay?
        // If addr is array type, we should decay to pointer.
        // But here we assume scalar load if no indices.
        // If it is an array, but no indices, it means it's used as a pointer (e.g. func arg).
        if (auto ptrTy = dynamic_cast<ir::PointerType*>(addr->getType())) {
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
             // Should not happen for variables in memory
             std::cerr << "Error: Variable " << node->name << " is not a pointer" << std::endl;
        }
    } else {
        // Array access
        std::vector<ir::Value*> indices;
        
        if (auto ptrTy = dynamic_cast<ir::PointerType*>(addr->getType())) {
            if (ptrTy->getPointeeTy()->isArrayTy()) {
                indices.push_back(builder.createInt(0));
            } else if (ptrTy->getPointeeTy()->isPointerTy()) {
                 // It's a pointer variable (e.g. function param int a[] -> int *a)
                 // We need to load the pointer first
                 addr = builder.createLoad(node->name);
            }
        } else {
             std::cerr << "Error: Array access on non-pointer " << node->name << std::endl;
             return;
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
        auto falseBB = new ir::BasicBlock(func->getUniqueName("and_false"), func);
        auto mergeBB = new ir::BasicBlock(func->getUniqueName("and_merge"), func);
        
        // Result variable
        auto resAddr = builder.createAlloca("and_res", ir::Type::getInt32Ty());
        // builder.createStore(builder.createInt(0), resAddr); // Default false
        
        node->lhs->accept(*this);
        auto lhs = val;
        // Convert to bool if needed
        if (lhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(lhs->getType())->getBitWidth() == 32) {
            lhs = builder.createBinary("!=", lhs, builder.createInt(0));
        }
        
        builder.createCondBr(lhs, rhsBB, falseBB);
        
        builder.setInsertPoint(falseBB);
        builder.createStore(builder.createInt(0), resAddr);
        builder.createBr(mergeBB);

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
        // val = builder.createLoad("and_res_val"); // This load needs to find the alloca, but createLoad uses name lookup.
        // We can't use createLoad("and_res") because it looks up in symbol table.
        // We need to load from resAddr directly.
        val = new ir::LoadInst(resAddr, builder.currentBlock, func->getUniqueName("and_res_val"));
        
    } else if (node->op == "||") {
        // Short-circuit OR
        // if (lhs) true else { if (rhs) true else false }
        auto func = builder.currentBlock->getParent();
        auto trueBB = new ir::BasicBlock(func->getUniqueName("or_true"), func);
        auto rhsBB = new ir::BasicBlock(func->getUniqueName("or_rhs"), func);
        auto mergeBB = new ir::BasicBlock(func->getUniqueName("or_merge"), func);
        
        auto resAddr = builder.createAlloca("or_res", ir::Type::getInt32Ty());
        // builder.createStore(builder.createInt(1), resAddr); // Default true
        
        node->lhs->accept(*this);
        auto lhs = val;
        if (lhs->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(lhs->getType())->getBitWidth() == 32) {
            lhs = builder.createBinary("!=", lhs, builder.createInt(0));
        }
        
        builder.createCondBr(lhs, trueBB, rhsBB);
        
        builder.setInsertPoint(trueBB);
        builder.createStore(builder.createInt(1), resAddr);
        builder.createBr(mergeBB);

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
        val = new ir::LoadInst(resAddr, builder.currentBlock, func->getUniqueName("or_res_val"));
        
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
    auto func = builder.module->getFunction(node->funcName);
    if (!func) {
        // Handle library functions or implicit declarations
        if (node->funcName == "putint") {
            std::vector<ir::Type*> paramTypes = { ir::Type::getInt32Ty() };
            auto funcTy = new ir::FunctionType(ir::Type::getVoidTy(), paramTypes);
            func = builder.createFunction("putint", funcTy);
        } else if (node->funcName == "getint") {
            auto funcTy = new ir::FunctionType(ir::Type::getInt32Ty(), {});
            func = builder.createFunction("getint", funcTy);
        } else if (node->funcName == "putch") {
            std::vector<ir::Type*> paramTypes = { ir::Type::getInt32Ty() };
            auto funcTy = new ir::FunctionType(ir::Type::getVoidTy(), paramTypes);
            func = builder.createFunction("putch", funcTy);
        } else if (node->funcName == "getch") {
            auto funcTy = new ir::FunctionType(ir::Type::getInt32Ty(), {});
            func = builder.createFunction("getch", funcTy);
        } else if (node->funcName == "putarray") {
            std::vector<ir::Type*> paramTypes = { ir::Type::getInt32Ty(), new ir::PointerType(ir::Type::getInt32Ty()) };
            auto funcTy = new ir::FunctionType(ir::Type::getVoidTy(), paramTypes);
            func = builder.createFunction("putarray", funcTy);
        } else if (node->funcName == "getarray") {
            std::vector<ir::Type*> paramTypes = { new ir::PointerType(ir::Type::getInt32Ty()) };
            auto funcTy = new ir::FunctionType(ir::Type::getInt32Ty(), paramTypes);
            func = builder.createFunction("getarray", funcTy);
        } else if (node->funcName == "starttime") {
            auto funcTy = new ir::FunctionType(ir::Type::getVoidTy(), {});
            func = builder.createFunction("starttime", funcTy);
        } else if (node->funcName == "stoptime") {
            auto funcTy = new ir::FunctionType(ir::Type::getVoidTy(), {});
            func = builder.createFunction("stoptime", funcTy);
        } else {
            std::cerr << "Error: Function " << node->funcName << " not found" << std::endl;
            return;
        }
    }

    std::vector<ir::Value*> args;
    for (auto& arg : node->args) {
        arg->accept(*this);
        args.push_back(val);
    }
    val = builder.createCall(func, args);
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
    
    if (cond->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(cond->getType())->getBitWidth() == 32) {
        cond = builder.createBinary("!=", cond, builder.createInt(0));
    }
    
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
    
    if (cond->getType()->isIntegerTy() && static_cast<ir::IntegerType*>(cond->getType())->getBitWidth() == 32) {
        cond = builder.createBinary("!=", cond, builder.createInt(0));
    }
    
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
// ir::Constant* createZeroInit(ir::Type* type) moved to member function


ir::Constant* IRGenerator::createZeroInit(ir::Type* type) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        std::vector<ir::Constant*> values;
        size_t size = arrTy->getElementCount();
        for (size_t i = 0; i < size; ++i) {
            values.push_back(createZeroInit(arrTy->getElementType()));
        }
        return new ir::ConstantArray(arrTy, values);
    } else {
        return ir::ConstantInt::get(0);
    }
}

ir::Constant* IRGenerator::createGlobalInit(InitListExpr* expr, size_t& index, ir::Type* type) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        std::vector<ir::Constant*> values;
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        
        for (size_t i = 0; i < size; ++i) {
            if (index < expr->values.size()) {
                auto& valExpr = expr->values[index];
                if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                    size_t subIndex = 0;
                    values.push_back(createGlobalInit(subList, subIndex, elemTy));
                    index++;
                } else {
                    if (elemTy->isArrayTy()) {
                        values.push_back(createGlobalInit(expr, index, elemTy));
                    } else {
                        int val = evalConst(valExpr.get(), builder.symTable);
                        values.push_back(ir::ConstantInt::get(val));
                        index++;
                    }
                }
            } else {
                values.push_back(createZeroInit(elemTy));
            }
        }
        return new ir::ConstantArray(arrTy, values);
    } else {
        if (index < expr->values.size()) {
            auto& valExpr = expr->values[index];
            if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                size_t subIndex = 0;
                auto res = createGlobalInit(subList, subIndex, type);
                index++;
                return res;
            } else {
                int val = evalConst(valExpr.get(), builder.symTable);
                index++;
                return ir::ConstantInt::get(val);
            }
        }
        return ir::ConstantInt::get(0);
    }
}

void IRGenerator::handleLocalZeroInit(ir::Value* baseAddr, ir::Type* type) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        for (size_t i = 0; i < size; ++i) {
            std::vector<ir::Value*> indices;
            indices.push_back(builder.createInt(0));
            indices.push_back(builder.createInt(i));
            auto elemAddr = builder.createGEP(baseAddr, indices);
            handleLocalZeroInit(elemAddr, elemTy);
        }
    } else {
        builder.createStore(builder.createInt(0), baseAddr);
    }
}

void IRGenerator::handleLocalArrayInit(ir::Value* baseAddr, ir::Type* type, InitListExpr* expr, size_t& index) {
    if (auto arrTy = dynamic_cast<ir::ArrayType*>(type)) {
        size_t size = arrTy->getElementCount();
        auto elemTy = arrTy->getElementType();
        
        for (size_t i = 0; i < size; ++i) {
            std::vector<ir::Value*> indices;
            indices.push_back(builder.createInt(0));
            indices.push_back(builder.createInt(i));
            auto elemAddr = builder.createGEP(baseAddr, indices);
            
            if (index < expr->values.size()) {
                auto& valExpr = expr->values[index];
                if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                    size_t subIndex = 0;
                    handleLocalArrayInit(elemAddr, elemTy, subList, subIndex);
                    index++;
                } else {
                    if (elemTy->isArrayTy()) {
                        handleLocalArrayInit(elemAddr, elemTy, expr, index);
                    } else {
                        valExpr->accept(*this);
                        builder.createStore(val, elemAddr);
                        index++;
                    }
                }
            } else {
                handleLocalZeroInit(elemAddr, elemTy);
            }
        }
    } else {
        if (index < expr->values.size()) {
            auto& valExpr = expr->values[index];
            if (auto subList = dynamic_cast<InitListExpr*>(valExpr.get())) {
                size_t subIndex = 0;
                handleLocalArrayInit(baseAddr, type, subList, subIndex);
                index++;
            } else {
                valExpr->accept(*this);
                builder.createStore(val, baseAddr);
                index++;
            }
        }
    }
}

void IRGenerator::visit(InitListExpr* node) {
    // Should not be visited directly in expression context
    // It is handled by VarDecl
}

int IRGenerator::evalConst(Expr* expr, SymbolTable* symTable) {
    if (auto lit = dynamic_cast<IntLiteral*>(expr)) {
        return lit->value;
    }
    if (auto bin = dynamic_cast<BinaryExpr*>(expr)) {
        int lhs = evalConst(bin->lhs.get(), symTable);
        int rhs = evalConst(bin->rhs.get(), symTable);
        if (bin->op == "+") return lhs + rhs;
        if (bin->op == "-") return lhs - rhs;
        if (bin->op == "*") return lhs * rhs;
        if (bin->op == "/") return rhs ? lhs / rhs : 0;
        if (bin->op == "%") return rhs ? lhs % rhs : 0;
    }
    if (auto una = dynamic_cast<UnaryExpr*>(expr)) {
        int op = evalConst(una->operand.get(), symTable);
        if (una->op == "+") return op;
        if (una->op == "-") return -op;
        if (una->op == "!") return !op;
    }
    if (auto var = dynamic_cast<VarExpr*>(expr)) {
        auto val = static_cast<ir::Value*>(symTable->lookup(var->name));
        if (val) {
            if (auto constInt = dynamic_cast<ir::ConstantInt*>(val)) {
                return constInt->getValue();
            }
        }
    }
    if (auto initList = dynamic_cast<InitListExpr*>(expr)) {
        if (!initList->values.empty()) {
            return evalConst(initList->values[0].get(), symTable);
        }
    }
    return 0;
}

void IRGenerator::visit(VarDecl* node) {
    for (auto& def : node->defs) {
        ir::Type *varTy = ir::Type::getInt32Ty();
        if (!def->arrayDimensions.empty()) {
            for (auto it = def->arrayDimensions.rbegin(); it != def->arrayDimensions.rend(); ++it) {
                int dim = evalConst(it->get(), builder.symTable);
                varTy = new ir::ArrayType(varTy, dim);
            }
        }

        if (node->isConst && !varTy->isArrayTy()) {
            int initVal = 0;
            if (def->initVal) {
                initVal = evalConst(def->initVal.get(), builder.symTable);
            }
            builder.symTable->insert(def->name, ir::ConstantInt::get(initVal));
            continue;
        }

        if (builder.getInsertPoint() == nullptr) {
            // Global variable
            ir::Constant *initVal = nullptr;
            if (def->initVal) {
                if (auto initList = dynamic_cast<InitListExpr*>(def->initVal.get())) {
                    size_t index = 0;
                    initVal = createGlobalInit(initList, index, varTy);
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
                    size_t index = 0;
                    handleLocalArrayInit(addr, varTy, initList, index);
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
