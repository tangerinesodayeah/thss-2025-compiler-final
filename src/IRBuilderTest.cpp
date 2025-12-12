#include <iostream>
#include "IRBuilder.h"
#include "IR.h"
#include "SymbolTable.h"

int main() {
    // 1. Initialize Module and SymbolTable
    ir::Module module;
    SymbolTable symTable;
    IRBuilder builder(&module, &symTable);

    // 2. Create a function: int main()
    ir::Type *i32Ty = ir::Type::getInt32Ty();
    ir::FunctionType *funcTy = new ir::FunctionType(i32Ty, {});
    ir::Function *mainFunc = builder.createFunction("main", funcTy);
    
    // 3. Set insert point to entry block of main
    builder.setFunction(mainFunc);

    // 4. Test Alloca and Store: int a = 10;
    ir::Value *aPtr = builder.createAlloca("a", i32Ty);
    symTable.insert("a", aPtr); // Register 'a' in symbol table
    ir::Value *const10 = builder.createInt(10);
    builder.createStore(const10, aPtr);

    // 5. Test Load and Binary Operation: int b = a + 5;
    ir::Value *aVal = builder.createLoad("a");
    ir::Value *const5 = builder.createInt(5);
    ir::Value *addRes = builder.createBinary("+", aVal, const5);
    // addRes->setName("add_tmp"); // Auto-naming should handle this now
    
    ir::Value *bPtr = builder.createAlloca("b", i32Ty);
    symTable.insert("b", bPtr);
    builder.createStore(addRes, bPtr);

    // 6. Test Control Flow (If-Else structure)
    // if (b > 10) return b; else return 0;
    
    ir::BasicBlock *trueBB = new ir::BasicBlock("if_true", mainFunc);
    ir::BasicBlock *falseBB = new ir::BasicBlock("if_false", mainFunc);
    
    ir::Value *bVal = builder.createLoad("b");
    ir::Value *const10_2 = builder.createInt(10);
    ir::Value *cond = builder.createBinary(">", bVal, const10_2);
    // cond->setName("cond_tmp"); // Auto-naming should handle this now
    
    builder.createCondBr(cond, trueBB, falseBB);


    // True Block
    builder.setInsertPoint(trueBB);
    ir::Value *retValTrue = builder.createLoad("b");
    builder.createRet(retValTrue);


    // False Block
    builder.setInsertPoint(falseBB);
    ir::Value *const0 = builder.createInt(0);
    builder.createRet(const0);

    // 7. Print the generated IR
    std::cout << "========== Generated IR ==========" << std::endl;
    std::cout << module.printModule();
    std::cout << "==================================" << std::endl;

    return 0;
}

