#pragma once
#include "IR.h"
#include "SymbolTable.h"

class IRBuilder {
public:
    IRBuilder(ir::Module *m, SymbolTable *st) : module(m), symTable(st), currentBlock(nullptr) {}

    ir::Module *module;
    SymbolTable *symTable;
    ir::BasicBlock *currentBlock;

    void setInsertPoint(ir::BasicBlock *bb) {
        currentBlock = bb;
    }

    ir::BasicBlock *getInsertPoint() const {
        return currentBlock;
    }

    // 基本常量
    ir::Value* createInt(int v);

    // 变量
    ir::Value* createAlloca(const std::string &name, ir::Type *ty = nullptr); // Default to i32 if null
    ir::Value* createLoad(const std::string &name);
    ir::Value* createStore(ir::Value *value, ir::Value *addr);

    // 运算
    ir::Value* createBinary(const std::string &op, ir::Value *lhs, ir::Value *rhs);

    // 函数
    ir::Function* createFunction(const std::string &name, ir::FunctionType *ty);
    void setFunction(ir::Function *func); // Maybe sets insert point to entry?
    ir::Value* createCall(ir::Function *func, std::vector<ir::Value*> args);

    // return
    void createRet(ir::Value *value);
    
    // Control flow
    void createBr(ir::BasicBlock *dest);
    void createCondBr(ir::Value *cond, ir::BasicBlock *ifTrue, ir::BasicBlock *ifFalse);
};
