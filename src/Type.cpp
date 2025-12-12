#include "Type.h"

namespace ir {

Type *Type::getVoidTy() {
    static VoidType voidTy;
    return &voidTy;
}

Type *Type::getInt32Ty() {
    static IntegerType i32(32);
    return &i32;
}

Type *Type::getInt1Ty() {
    static IntegerType i1(1);
    return &i1;
}

Type *Type::getLabelTy() {
    static LabelType label;
    return &label;
}

} // namespace ir
