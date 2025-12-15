#include "IRBuilder.h"

ir::Value* IRBuilder::createInt(int v) {
    return ir::ConstantInt::get(v);
}

ir::Value* IRBuilder::createAlloca(const std::string &name, ir::Type *ty) {
    if (!ty) ty = ir::Type::getInt32Ty();
    // Alloca should be in the entry block usually, but for simplicity we put it in current block
    // or we can find the entry block of the current function.
    // For now, just insert at current point.
    std::string uniqueName = name;
    if (currentBlock && currentBlock->getParent()) {
        uniqueName = currentBlock->getParent()->getUniqueName(name);
    }
    auto inst = new ir::AllocaInst(ty, currentBlock, uniqueName);
    return inst;
}

ir::Value* IRBuilder::createGlobalVariable(const std::string &name, ir::Type *ty, ir::Constant *initVal) {
    auto ptrTy = new ir::PointerType(ty);
    return new ir::GlobalVariable(ptrTy, name, initVal, module);
}

ir::Value* IRBuilder::createLoad(const std::string &name) {
    // Lookup address in symbol table
    // SymbolTable stores void*, we cast to ir::Value*
    void *addrVoid = symTable->lookup(name);
    if (!addrVoid) {
        // Error handling? For now return nullptr or assert
        return nullptr;
    }
    ir::Value *addr = static_cast<ir::Value*>(addrVoid);
    // Create load instruction
    std::string valName = currentBlock->getParent()->getUniqueName(name + "_val");
    return new ir::LoadInst(addr, currentBlock, valName); 
}



ir::Value* IRBuilder::createStore(ir::Value *value, ir::Value *addr) {
    return new ir::StoreInst(value, addr, currentBlock);
}

ir::Value* IRBuilder::createBinary(const std::string &op, ir::Value *lhs, ir::Value *rhs) {
    ir::Instruction::OpID id;
    if (op == "+") id = ir::Instruction::Add;
    else if (op == "-") id = ir::Instruction::Sub;
    else if (op == "*") id = ir::Instruction::Mul;
    else if (op == "/") id = ir::Instruction::SDiv;
    else if (op == "%") id = ir::Instruction::SRem;
    else if (op == "<" || op == "<=" || op == ">" || op == ">=" || op == "==" || op == "!=") {
        ir::ICmpInst::Predicate pred;
        if (op == "==") pred = ir::ICmpInst::EQ;
        else if (op == "!=") pred = ir::ICmpInst::NE;
        else if (op == "<") pred = ir::ICmpInst::SLT;
        else if (op == "<=") pred = ir::ICmpInst::SLE;
        else if (op == ">") pred = ir::ICmpInst::SGT;
        else if (op == ">=") pred = ir::ICmpInst::SGE;
        auto inst = new ir::ICmpInst(pred, lhs, rhs, currentBlock);
        inst->setName(currentBlock->getParent()->getUniqueName("icmp"));
        return inst;
    }
    else return nullptr; // Unknown op

    auto inst = new ir::BinaryInst(id, lhs, rhs, currentBlock);
    std::string hint;
    switch (id) {
        case ir::Instruction::Add: hint = "add"; break;
        case ir::Instruction::Sub: hint = "sub"; break;
        case ir::Instruction::Mul: hint = "mul"; break;
        case ir::Instruction::SDiv: hint = "sdiv"; break;
        case ir::Instruction::SRem: hint = "srem"; break;
        default: hint = "tmp"; break;
    }
    inst->setName(currentBlock->getParent()->getUniqueName(hint));
    return inst;
}

ir::Value* IRBuilder::createGEP(ir::Value *ptr, std::vector<ir::Value*> indices) {
    auto inst = new ir::GetElementPtrInst(ptr, indices, currentBlock);
    inst->setName(currentBlock->getParent()->getUniqueName("gep"));
    return inst;
}

ir::Value* IRBuilder::createZExt(ir::Value *val, ir::Type *destTy) {
    auto inst = new ir::ZExtInst(val, destTy, currentBlock);
    inst->setName(currentBlock->getParent()->getUniqueName("zext"));
    return inst;
}


ir::Function* IRBuilder::createFunction(const std::string &name, ir::FunctionType *ty) {
    return new ir::Function(ty, name, module);
}

void IRBuilder::setFunction(ir::Function *func) {
    // If function has no blocks, create entry
    if (func->getBlocks().empty()) {
        auto entry = new ir::BasicBlock("entry", func);
        setInsertPoint(entry);
    } else {
        setInsertPoint(func->getBlocks().back());
    }
}

void IRBuilder::createRet(ir::Value *value) {
    new ir::ReturnInst(value, currentBlock);
}

void IRBuilder::createBr(ir::BasicBlock *dest) {
    new ir::BranchInst(dest, currentBlock);
}

void IRBuilder::createCondBr(ir::Value *cond, ir::BasicBlock *ifTrue, ir::BasicBlock *ifFalse) {
    new ir::BranchInst(cond, ifTrue, ifFalse, currentBlock);
}

ir::Value* IRBuilder::createCall(ir::Function *func, std::vector<ir::Value*> args) {
    auto inst = new ir::CallInst(func, args, currentBlock);
    auto funcTy = dynamic_cast<ir::FunctionType*>(func->getType());
    if (funcTy && !funcTy->getReturnType()->isVoidTy()) {
         inst->setName(currentBlock->getParent()->getUniqueName("call"));
    }
    return inst;
}
