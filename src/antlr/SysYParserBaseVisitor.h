
// Generated from /mnt/f/编译原理/thss-2025-compiler-final/SysYParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SysYParserVisitor.h"


/**
 * This class provides an empty implementation of SysYParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SysYParserBaseVisitor : public SysYParserVisitor {
public:

  virtual std::any visitCompUnit(SysYParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(SysYParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDecl(SysYParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBType(SysYParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDef(SysYParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarConstInitVal(SysYParser::ScalarConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListConstInitVal(SysYParser::ListConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(SysYParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUninitVarDef(SysYParser::UninitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVarDef(SysYParser::InitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarInitVal(SysYParser::ScalarInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListInitVal(SysYParser::ListInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(SysYParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(SysYParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParams(SysYParser::FuncFParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParam(SysYParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(SysYParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItem(SysYParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(SysYParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(SysYParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStmt(SysYParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(SysYParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(SysYParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStmt(SysYParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStmt(SysYParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(SysYParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchStmt(SysYParser::SwitchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseStmt(SysYParser::CaseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultStmt(SysYParser::DefaultStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpr(SysYParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(SysYParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberExpr(SysYParser::NumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLValExpr(SysYParser::LValExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivModExpr(SysYParser::MulDivModExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallExpr(SysYParser::CallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(SysYParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrCond(SysYParser::OrCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpCond(SysYParser::ExpCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelCond(SysYParser::RelCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndCond(SysYParser::AndCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqCond(SysYParser::EqCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLVal(SysYParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(SysYParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOp(SysYParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncRParams(SysYParser::FuncRParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstExp(SysYParser::ConstExpContext *ctx) override {
    return visitChildren(ctx);
  }


};

