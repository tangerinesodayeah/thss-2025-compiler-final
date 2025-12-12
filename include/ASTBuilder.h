#pragma once

#include "antlr/SysYParserBaseVisitor.h"
#include "AST.h"
#include <memory>
#include <any>

class ASTBuilder : public SysYParserBaseVisitor {
public:
    std::unique_ptr<CompUnit> buildAST(SysYParser::CompUnitContext *ctx);

    std::any visitCompUnit(SysYParser::CompUnitContext *ctx) override;
    std::any visitDecl(SysYParser::DeclContext *ctx) override;
    std::any visitConstDecl(SysYParser::ConstDeclContext *ctx) override;
    std::any visitVarDecl(SysYParser::VarDeclContext *ctx) override;
    std::any visitConstDef(SysYParser::ConstDefContext *ctx) override;
    std::any visitUninitVarDef(SysYParser::UninitVarDefContext *ctx) override;
    std::any visitInitVarDef(SysYParser::InitVarDefContext *ctx) override;
    std::any visitScalarConstInitVal(SysYParser::ScalarConstInitValContext *ctx) override;
    std::any visitScalarInitVal(SysYParser::ScalarInitValContext *ctx) override;
    std::any visitFuncDef(SysYParser::FuncDefContext *ctx) override;
    std::any visitFuncFParam(SysYParser::FuncFParamContext *ctx) override;
    std::any visitBlock(SysYParser::BlockContext *ctx) override;
    std::any visitAssignStmt(SysYParser::AssignStmtContext *ctx) override;
    std::any visitExprStmt(SysYParser::ExprStmtContext *ctx) override;
    std::any visitBlockStmt(SysYParser::BlockStmtContext *ctx) override;
    std::any visitIfStmt(SysYParser::IfStmtContext *ctx) override;
    std::any visitWhileStmt(SysYParser::WhileStmtContext *ctx) override;
    std::any visitBreakStmt(SysYParser::BreakStmtContext *ctx) override;
    std::any visitContinueStmt(SysYParser::ContinueStmtContext *ctx) override;
    std::any visitReturnStmt(SysYParser::ReturnStmtContext *ctx) override;
    std::any visitParenExpr(SysYParser::ParenExprContext *ctx) override;
    std::any visitLValExpr(SysYParser::LValExprContext *ctx) override;
    std::any visitNumberExpr(SysYParser::NumberExprContext *ctx) override;
    std::any visitCallExpr(SysYParser::CallExprContext *ctx) override;
    std::any visitUnaryExpr(SysYParser::UnaryExprContext *ctx) override;
    std::any visitMulDivModExpr(SysYParser::MulDivModExprContext *ctx) override;
    std::any visitAddSubExpr(SysYParser::AddSubExprContext *ctx) override;
    std::any visitExpCond(SysYParser::ExpCondContext *ctx) override;
    std::any visitRelCond(SysYParser::RelCondContext *ctx) override;
    std::any visitEqCond(SysYParser::EqCondContext *ctx) override;
    std::any visitAndCond(SysYParser::AndCondContext *ctx) override;
    std::any visitOrCond(SysYParser::OrCondContext *ctx) override;
    std::any visitLVal(SysYParser::LValContext *ctx) override;
    std::any visitNumber(SysYParser::NumberContext *ctx) override;
    std::any visitConstExp(SysYParser::ConstExpContext *ctx) override;

private:
    template<typename T>
    static std::any wrapPtr(std::unique_ptr<T> ptr) {
        return std::any(static_cast<void*>(ptr.release()));
    }
    
    template<typename T>
    static std::unique_ptr<T> unwrapPtr(std::any a) {
        return std::unique_ptr<T>(static_cast<T*>(std::any_cast<void*>(a)));
    }
    
    template<typename T>
    std::unique_ptr<T> anyToUnique(std::any a) {
        return unwrapPtr<T>(std::move(a));
    }
};