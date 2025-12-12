#pragma once
#include <string>
#include <vector>
#include <memory>

namespace ir {

class Type {
public:
    enum TypeID {
        VoidTyID,
        IntegerTyID,
        PointerTyID,
        FunctionTyID,
        LabelTyID
    };

    explicit Type(TypeID tid) : tid_(tid) {}
    virtual ~Type() = default;

    TypeID getTypeID() const { return tid_; }

    bool isVoidTy() const { return tid_ == VoidTyID; }
    bool isIntegerTy() const { return tid_ == IntegerTyID; }
    bool isPointerTy() const { return tid_ == PointerTyID; }
    bool isFunctionTy() const { return tid_ == FunctionTyID; }
    bool isLabelTy() const { return tid_ == LabelTyID; }

    static Type *getVoidTy();
    static Type *getInt32Ty();
    static Type *getInt1Ty(); // For boolean results
    static Type *getLabelTy();

    virtual std::string print() const = 0;

private:
    TypeID tid_;
};

class IntegerType : public Type {
public:
    explicit IntegerType(unsigned width) : Type(IntegerTyID), width_(width) {}
    unsigned getBitWidth() const { return width_; }
    std::string print() const override { return "i" + std::to_string(width_); }
private:
    unsigned width_;
};

class PointerType : public Type {
public:
    explicit PointerType(Type *pointee) : Type(PointerTyID), pointee_(pointee) {}
    Type *getPointeeTy() const { return pointee_; }
    std::string print() const override { return pointee_->print() + "*"; }
private:
    Type *pointee_;
};

class FunctionType : public Type {
public:
    FunctionType(Type *ret, std::vector<Type*> params) 
        : Type(FunctionTyID), ret_(ret), params_(std::move(params)) {}
    
    Type *getReturnType() const { return ret_; }
    const std::vector<Type*> &getParams() const { return params_; }
    
    std::string print() const override {
        std::string s = ret_->print() + " (";
        for (size_t i = 0; i < params_.size(); ++i) {
            if (i > 0) s += ", ";
            s += params_[i]->print();
        }
        s += ")";
        return s;
    }
private:
    Type *ret_;
    std::vector<Type*> params_;
};

class VoidType : public Type {
public:
    VoidType() : Type(VoidTyID) {}
    std::string print() const override { return "void"; }
};

class LabelType : public Type {
public:
    LabelType() : Type(LabelTyID) {}
    std::string print() const override { return "label"; }
};

} // namespace ir
