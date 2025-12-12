#include "IR.h"
#include <sstream>

namespace ir {

ConstantInt *ConstantInt::get(int val) {
    return new ConstantInt(Type::getInt32Ty(), val);
}

ConstantInt *ConstantInt::getBool(bool val) {
    return new ConstantInt(Type::getInt1Ty(), val ? 1 : 0);
}

Instruction::Instruction(Type *ty, OpID id, BasicBlock *parent, std::string name)
    : User(ty, name), id_(id), parent_(parent) {
    if (parent) parent->insert(this);
}

std::string Instruction::print() const {
    return name_.empty() ? "%" : "%" + name_;
}

std::string Instruction::printInst() const {
    std::string s;
    if (!name_.empty()) s += "%" + name_ + " = ";
    switch (id_) {
        case Add: s += "add "; break;
        case Sub: s += "sub "; break;
        case Mul: s += "mul "; break;
        case SDiv: s += "sdiv "; break;
        case SRem: s += "srem "; break;
        case Alloca: s += "alloca "; break;
        case Load: s += "load "; break;
        case Store: s += "store "; break;
        case Ret: s += "ret "; break;
        case Br: s += "br "; break;
        case ICmp: s += "icmp "; break;
        case Call: s += "call "; break;
        default: s += "unknown "; break;
    }
    
    if (id_ == Alloca) {
        // alloca <type>
        // The type of the instruction is T*, but we allocate T.
        // So we print the pointee type.
        s += static_cast<PointerType*>(type_)->getPointeeTy()->print();
        return s;
    }

    if (id_ == Store) {
        // store <ty> <val>, <ty>* <ptr>
        s += operands_[0]->getType()->print() + " " + operands_[0]->print() + ", ";
        s += operands_[1]->getType()->print() + " " + operands_[1]->print();
        return s;
    }

    if (id_ == Load) {
        // load <ty>, <ty>* <ptr>
        s += type_->print() + ", " + operands_[0]->getType()->print() + " " + operands_[0]->print();
        return s;
    }

    if (id_ == Ret) {
        if (operands_.empty()) s += "void";
        else s += operands_[0]->getType()->print() + " " + operands_[0]->print();
        return s;
    }

    if (id_ == Br) {
        if (operands_.size() == 1) {
            s += "label " + operands_[0]->print();
        } else {
            s += "i1 " + operands_[0]->print() + ", label " + operands_[1]->print() + ", label " + operands_[2]->print();
        }
        return s;
    }

    if (id_ == Call) {
        // call <ty> <name>(args)
        s += type_->print() + " " + operands_[0]->print() + "(";
        for (size_t i = 1; i < operands_.size(); ++i) {
            if (i > 1) s += ", ";
            s += operands_[i]->getType()->print() + " " + operands_[i]->print();
        }
        s += ")";
        return s;
    }

    if (id_ == ICmp) {
        // icmp <pred> <ty> <op1>, <op2>
        const ICmpInst *icmp = static_cast<const ICmpInst*>(this);
        switch (icmp->getPredicate()) {
            case ICmpInst::EQ: s += "eq "; break;
            case ICmpInst::NE: s += "ne "; break;
            case ICmpInst::SGT: s += "sgt "; break;
            case ICmpInst::SGE: s += "sge "; break;
            case ICmpInst::SLT: s += "slt "; break;
            case ICmpInst::SLE: s += "sle "; break;
        }
        s += operands_[0]->getType()->print() + " " + operands_[0]->print() + ", " + operands_[1]->print();
        return s;
    }

    // Binary ops
    s += type_->print() + " " + operands_[0]->print() + ", " + operands_[1]->print();
    return s;
}


BinaryInst::BinaryInst(OpID id, Value *lhs, Value *rhs, BasicBlock *parent)
    : Instruction(lhs->getType(), id, parent, "") {
    addOperand(lhs);
    addOperand(rhs);
}

AllocaInst::AllocaInst(Type *ty, BasicBlock *parent, std::string name)
    : Instruction(new PointerType(ty), Alloca, parent, name) {}

LoadInst::LoadInst(Value *ptr, BasicBlock *parent, std::string name)
    : Instruction(static_cast<PointerType*>(ptr->getType())->getPointeeTy(), Load, parent, name) {
    addOperand(ptr);
}

StoreInst::StoreInst(Value *val, Value *ptr, BasicBlock *parent)
    : Instruction(Type::getVoidTy(), Store, parent) {
    addOperand(val);
    addOperand(ptr);
}

ReturnInst::ReturnInst(Value *val, BasicBlock *parent)
    : Instruction(Type::getVoidTy(), Ret, parent) {
    if (val) addOperand(val);
}

BranchInst::BranchInst(BasicBlock *dest, BasicBlock *parent)
    : Instruction(Type::getVoidTy(), Br, parent) {
    addOperand(dest);
}

BranchInst::BranchInst(Value *cond, BasicBlock *ifTrue, BasicBlock *ifFalse, BasicBlock *parent)
    : Instruction(Type::getVoidTy(), Br, parent) {
    addOperand(cond);
    addOperand(ifTrue);
    addOperand(ifFalse);
}

CallInst::CallInst(Function *func, std::vector<Value*> args, BasicBlock *parent, std::string name)
    : Instruction(static_cast<FunctionType*>(func->getType())->getReturnType(), Call, parent, name) {
    addOperand(func);
    for (auto arg : args) addOperand(arg);
}

ICmpInst::ICmpInst(Predicate pred, Value *lhs, Value *rhs, BasicBlock *parent, std::string name)
    : Instruction(Type::getInt1Ty(), ICmp, parent, name), pred_(pred) {
    addOperand(lhs);
    addOperand(rhs);
}

BasicBlock::BasicBlock(const std::string &name, Function *parent)
    : Value(Type::getLabelTy(), name), parent_(parent) {
    if (parent) parent->insert(this);
}

std::string BasicBlock::print() const {
    return "%" + name_;
}

std::string BasicBlock::printBlock() const {
    std::string s = name_ + ":\n";
    for (auto inst : insts_) {
        s += "  " + inst->printInst() + "\n";
    }
    return s;
}

Function::Function(FunctionType *ty, std::string name, Module *parent)
    : Value(ty, name), parent_(parent) {
    if (parent) parent->addFunction(this);
}

std::string Function::print() const {
    return "@" + name_;
}

std::string Function::getUniqueName(const std::string &hint) {
    std::string name = hint;
    if (nameCounts_.find(name) != nameCounts_.end()) {
        name += std::to_string(nameCounts_[hint]++);
    } else {
        nameCounts_[name] = 1;
    }
    return name;
}

std::string Function::printFunc() const {

    std::string s = "define " + static_cast<FunctionType*>(type_)->getReturnType()->print() + " @" + name_ + "(";
    // Params would go here if we tracked them as Values
    s += ") {\n";
    for (auto bb : blocks_) {
        s += bb->printBlock();
    }
    s += "}\n";
    return s;
}

std::string Module::printModule() const {
    std::string s;
    for (auto f : functions_) {
        s += f->printFunc() + "\n";
    }
    return s;
}


} // namespace ir
