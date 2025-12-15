#pragma once
#include "Type.h"
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <unordered_map>

namespace ir {


class Value {
public:
    explicit Value(Type *ty, std::string name = "") : type_(ty), name_(std::move(name)) {}
    virtual ~Value() = default;

    Type *getType() const { return type_; }
    const std::string &getName() const { return name_; }
    void setName(const std::string &name) { name_ = name; }

    virtual std::string print() const { return name_; }

protected:
    Type *type_;
    std::string name_;
};

class User : public Value {
public:
    User(Type *ty, std::string name = "") : Value(ty, name) {}
    const std::vector<Value*> &getOperands() const { return operands_; }
    void addOperand(Value *v) { operands_.push_back(v); }
    Value *getOperand(size_t i) const { return operands_[i]; }
protected:
    std::vector<Value*> operands_;
};

class Constant : public User {
public:
    Constant(Type *ty, std::string name = "") : User(ty, name) {}
};

class ConstantInt : public Constant {
public:
    ConstantInt(Type *ty, int val) : Constant(ty), value_(val) {}
    int getValue() const { return value_; }
    std::string print() const override { return std::to_string(value_); }
    static ConstantInt *get(int val);
    static ConstantInt *getBool(bool val);
private:
    int value_;
};

class ConstantArray : public Constant {
public:
    ConstantArray(ArrayType *ty, const std::vector<Constant*> &vals) : Constant(ty), values_(vals) {}
    std::string print() const override;
private:
    std::vector<Constant*> values_;
};

class BasicBlock;
class Function;
class Module;
class GlobalVariable;

class Instruction : public User {
public:
    enum OpID {
        Ret, Br, Add, Sub, Mul, SDiv, SRem, Alloca, Load, Store, ICmp, Call, GetElementPtr, ZExt
    };

    Instruction(Type *ty, OpID id, BasicBlock *parent, std::string name = "");
    OpID getOpID() const { return id_; }
    bool isTerminator() const { return id_ == Ret || id_ == Br; }
    
    // Print the full instruction definition (e.g., "%a = add i32 %b, %c")
    std::string printInst() const;
    
    // Override Value::print to return the operand representation (e.g., "%a")
    std::string print() const override;

private:
    OpID id_;
    BasicBlock *parent_;
};


class BinaryInst : public Instruction {
public:
    BinaryInst(OpID id, Value *lhs, Value *rhs, BasicBlock *parent);
};

class AllocaInst : public Instruction {
public:
    AllocaInst(Type *ty, BasicBlock *parent, std::string name);
};

class LoadInst : public Instruction {
public:
    LoadInst(Value *ptr, BasicBlock *parent, std::string name);
};

class StoreInst : public Instruction {
public:
    StoreInst(Value *val, Value *ptr, BasicBlock *parent);
};

class ReturnInst : public Instruction {
public:
    ReturnInst(Value *val, BasicBlock *parent);
};

class BranchInst : public Instruction {
public:
    BranchInst(BasicBlock *dest, BasicBlock *parent); // Unconditional
    BranchInst(Value *cond, BasicBlock *ifTrue, BasicBlock *ifFalse, BasicBlock *parent); // Conditional
    bool isConditional() const { return getOperands().size() == 3; }
};

class CallInst : public Instruction {
public:
    CallInst(Function *func, std::vector<Value*> args, BasicBlock *parent, std::string name = "");
};


class ICmpInst : public Instruction {
public:
    enum Predicate { EQ, NE, SGT, SGE, SLT, SLE };
    ICmpInst(Predicate pred, Value *lhs, Value *rhs, BasicBlock *parent, std::string name = "");
    Predicate getPredicate() const { return pred_; }
private:
    Predicate pred_;
};

class GetElementPtrInst : public Instruction {
public:
    GetElementPtrInst(Value *ptr, std::vector<Value*> indices, BasicBlock *parent, std::string name = "");
};

class ZExtInst : public Instruction {
public:
    ZExtInst(Value *val, Type *destTy, BasicBlock *parent, std::string name = "");
};


class BasicBlock : public Value {
public:
    explicit BasicBlock(const std::string &name, Function *parent = nullptr);
    std::list<Instruction*> &getInstList() { return insts_; }
    const std::list<Instruction*> &getInstList() const { return insts_; }
    void insert(Instruction *inst) { insts_.push_back(inst); }
    Function *getParent() const { return parent_; }
    
    // Print the full block definition
    std::string printBlock() const;
    
    // Override Value::print to return the operand representation (e.g., "%label")
    std::string print() const override;

private:
    std::list<Instruction*> insts_;
    Function *parent_;
};

class Argument : public Value {
public:
    Argument(Type *ty, std::string name, Function *parent = nullptr)
        : Value(ty, name), parent_(parent) {}
    std::string print() const override { return "%" + name_; }
private:
    Function *parent_;
};

class Function : public Value {
public:
    Function(FunctionType *ty, std::string name, Module *parent = nullptr);
    std::list<BasicBlock*> &getBlocks() { return blocks_; }
    void insert(BasicBlock *bb) { blocks_.push_back(bb); }
    
    const std::vector<Argument*> &getArgs() const { return args_; }
    
    // Print the full function definition
    std::string printFunc() const;
    
    // Override Value::print to return the operand representation (e.g., "@func")
    std::string print() const override;

    // Generate a unique name within this function scope
    std::string getUniqueName(const std::string &hint);

private:
    std::list<BasicBlock*> blocks_;
    std::vector<Argument*> args_;
    Module *parent_;
    std::unordered_map<std::string, int> nameCounts_;
};

class GlobalVariable : public User {
public:
    GlobalVariable(Type *ty, std::string name, Constant *initVal, Module *parent = nullptr);
    std::string print() const override;
    std::string printGlobal() const;
private:
    Constant *initVal_;
    Module *parent_;
};

class Module {
public:
    void addFunction(Function *f) { functions_.push_back(f); }
    void addGlobalVariable(GlobalVariable *g) { globals_.push_back(g); }
    Function* getFunction(const std::string &name) const {
        for (auto f : functions_) {
            if (f->getName() == name) return f;
        }
        return nullptr;
    }
    std::string printModule() const;
private:
    std::vector<Function*> functions_;
    std::vector<GlobalVariable*> globals_;
};


} // namespace ir
