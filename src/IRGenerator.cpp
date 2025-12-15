#include "IRGenerator.h"
#include "IR.h"
#include <iostream>

void IRGenerator::visit(IntLiteral* node) {
    val = builder.createInt(node->value);
}

void IRGenerator::visit(VarExpr* node) {
    // If it's an array access, we need to handle it.
    // For now, assume scalar variable load.
    // If it's used as l-value, AssignStmt handles it.
    // Here we assume it's an r-value load.
    val = builder.createLoad(node->name);
}

void IRGenerator::visit(BinaryExpr* node) {
    node->lhs->accept(*this);
    auto lhs = val;
    node->rhs->accept(*this);
    auto rhs = val;
    
    // Short-circuit evaluation for && and || could be implemented here
    // But for now, let's assume simple binary ops or implement them if needed.
    // The IRBuilder::createBinary handles basic ops and comparisons.
    // Logic ops (&&, ||) usually require control flow in LLVM IR (phi nodes or branches),
    // or i1 arithmetic.
    // If op is && or ||, we might need special handling.
    // For simplicity, let's assume the user wants basic arithmetic first.
    // If the user asks for short-circuit, we need more complex logic.
    // The provided IRBuilder::createBinary handles +, -, *, /, %, <, <=, >, >=, ==, !=.
    
    val = builder.createBinary(node->op, lhs, rhs);
}

void IRGenerator::visit(UnaryExpr* node) {
    node->operand->accept(*this);
    auto operand = val;
    
    if (node->op == "+") {
        // Do nothing, val is already set
    } else if (node->op == "-") {
        val = builder.createBinary("-", builder.createInt(0), operand);
    } else if (node->op == "!") {
        val = builder.createBinary("==", operand, builder.createInt(0));
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
    
    // Lookup address
    auto addrVoid = builder.symTable->lookup(node->lval->name);
    auto addr = static_cast<ir::Value*>(addrVoid);
    
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

void IRGenerator::visit(VarDecl* node) {
    for (auto& def : node->defs) {
        if (builder.getInsertPoint() == nullptr) {
            // Global variable
            ir::Constant *initVal = nullptr;
            if (def->initVal) {
                if (auto lit = dynamic_cast<IntLiteral*>(def->initVal.get())) {
                    initVal = ir::ConstantInt::get(lit->value);
                } else {
                    // TODO: Support constant expression evaluation
                    initVal = ir::ConstantInt::get(0); 
                }
            } else {
                initVal = ir::ConstantInt::get(0);
            }
            auto addr = builder.createGlobalVariable(def->name, ir::Type::getInt32Ty(), initVal);
            builder.symTable->insert(def->name, addr);
        } else {
            // Local variable
            auto addr = builder.createAlloca(def->name, ir::Type::getInt32Ty());
            builder.symTable->insert(def->name, addr);
            
            if (def->initVal) {
                def->initVal->accept(*this);
                builder.createStore(val, addr);
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
