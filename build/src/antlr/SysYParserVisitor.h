
// Generated from /Users/zhaowenrui/Desktop/编译汇编/assignment 2/SysYParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SysYParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SysYParser.
 */
class  SysYParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SysYParser.
   */
    virtual std::any visitCompUnit(SysYParser::CompUnitContext *context) = 0;

    virtual std::any visitDecl(SysYParser::DeclContext *context) = 0;

    virtual std::any visitConstDecl(SysYParser::ConstDeclContext *context) = 0;

    virtual std::any visitBType(SysYParser::BTypeContext *context) = 0;

    virtual std::any visitConstDef(SysYParser::ConstDefContext *context) = 0;

    virtual std::any visitScalarConstInitVal(SysYParser::ScalarConstInitValContext *context) = 0;

    virtual std::any visitListConstInitVal(SysYParser::ListConstInitValContext *context) = 0;

    virtual std::any visitVarDecl(SysYParser::VarDeclContext *context) = 0;

    virtual std::any visitUninitVarDef(SysYParser::UninitVarDefContext *context) = 0;

    virtual std::any visitInitVarDef(SysYParser::InitVarDefContext *context) = 0;

    virtual std::any visitScalarInitVal(SysYParser::ScalarInitValContext *context) = 0;

    virtual std::any visitListInitVal(SysYParser::ListInitValContext *context) = 0;

    virtual std::any visitFuncDef(SysYParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncType(SysYParser::FuncTypeContext *context) = 0;

    virtual std::any visitFuncFParams(SysYParser::FuncFParamsContext *context) = 0;

    virtual std::any visitFuncFParam(SysYParser::FuncFParamContext *context) = 0;

    virtual std::any visitBlock(SysYParser::BlockContext *context) = 0;

    virtual std::any visitBlockItem(SysYParser::BlockItemContext *context) = 0;

    virtual std::any visitAssignStmt(SysYParser::AssignStmtContext *context) = 0;

    virtual std::any visitExprStmt(SysYParser::ExprStmtContext *context) = 0;

    virtual std::any visitBlockStmt(SysYParser::BlockStmtContext *context) = 0;

    virtual std::any visitIfStmt(SysYParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(SysYParser::WhileStmtContext *context) = 0;

    virtual std::any visitForStmt(SysYParser::ForStmtContext *context) = 0;

    virtual std::any visitBreakStmt(SysYParser::BreakStmtContext *context) = 0;

    virtual std::any visitContinueStmt(SysYParser::ContinueStmtContext *context) = 0;

    virtual std::any visitReturnStmt(SysYParser::ReturnStmtContext *context) = 0;

    virtual std::any visitUnaryExpr(SysYParser::UnaryExprContext *context) = 0;

    virtual std::any visitAddSubExpr(SysYParser::AddSubExprContext *context) = 0;

    virtual std::any visitNumberExpr(SysYParser::NumberExprContext *context) = 0;

    virtual std::any visitLValExpr(SysYParser::LValExprContext *context) = 0;

    virtual std::any visitMulDivModExpr(SysYParser::MulDivModExprContext *context) = 0;

    virtual std::any visitCallExpr(SysYParser::CallExprContext *context) = 0;

    virtual std::any visitParenExpr(SysYParser::ParenExprContext *context) = 0;

    virtual std::any visitOrCond(SysYParser::OrCondContext *context) = 0;

    virtual std::any visitExpCond(SysYParser::ExpCondContext *context) = 0;

    virtual std::any visitRelCond(SysYParser::RelCondContext *context) = 0;

    virtual std::any visitAndCond(SysYParser::AndCondContext *context) = 0;

    virtual std::any visitEqCond(SysYParser::EqCondContext *context) = 0;

    virtual std::any visitLVal(SysYParser::LValContext *context) = 0;

    virtual std::any visitNumber(SysYParser::NumberContext *context) = 0;

    virtual std::any visitUnaryOp(SysYParser::UnaryOpContext *context) = 0;

    virtual std::any visitFuncRParams(SysYParser::FuncRParamsContext *context) = 0;

    virtual std::any visitConstExp(SysYParser::ConstExpContext *context) = 0;


};

