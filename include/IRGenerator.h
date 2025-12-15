#pragma once
#include "AST.h"
#include "IRBuilder.h"
#include <vector>

class IRGenerator : public ASTVisitor {
public:
    IRGenerator(IRBuilder& builder) : builder(builder) {}

    void visit(IntLiteral* node) override;
    void visit(VarExpr* node) override;
    void visit(BinaryExpr* node) override;
    void visit(UnaryExpr* node) override;
    void visit(CallExpr* node) override;
    void visit(InitListExpr* node) override;

    void visit(AssignStmt* node) override;
    void visit(ExprStmt* node) override;
    void visit(BlockStmt* node) override;
    void visit(IfStmt* node) override;
    void visit(WhileStmt* node) override;
    void visit(BreakStmt* node) override;
    void visit(ContinueStmt* node) override;
    void visit(ReturnStmt* node) override;

    void visit(VarDecl* node) override;
    void visit(FuncDef* node) override;
    void visit(CompUnit* node) override;

    ir::Value* getVal() { return val; }

private:
    IRBuilder& builder;
    ir::Value* val = nullptr; // Used to pass values between visit methods

    // Stacks for break/continue
    std::vector<ir::BasicBlock*> loopCondStack;
    std::vector<ir::BasicBlock*> loopAfterStack;
};
