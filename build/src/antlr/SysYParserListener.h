
// Generated from /Users/zhaowenrui/Desktop/编译汇编/assignment 2/SysYParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SysYParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SysYParser.
 */
class  SysYParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompUnit(SysYParser::CompUnitContext *ctx) = 0;
  virtual void exitCompUnit(SysYParser::CompUnitContext *ctx) = 0;

  virtual void enterDecl(SysYParser::DeclContext *ctx) = 0;
  virtual void exitDecl(SysYParser::DeclContext *ctx) = 0;

  virtual void enterConstDecl(SysYParser::ConstDeclContext *ctx) = 0;
  virtual void exitConstDecl(SysYParser::ConstDeclContext *ctx) = 0;

  virtual void enterBType(SysYParser::BTypeContext *ctx) = 0;
  virtual void exitBType(SysYParser::BTypeContext *ctx) = 0;

  virtual void enterConstDef(SysYParser::ConstDefContext *ctx) = 0;
  virtual void exitConstDef(SysYParser::ConstDefContext *ctx) = 0;

  virtual void enterScalarConstInitVal(SysYParser::ScalarConstInitValContext *ctx) = 0;
  virtual void exitScalarConstInitVal(SysYParser::ScalarConstInitValContext *ctx) = 0;

  virtual void enterListConstInitVal(SysYParser::ListConstInitValContext *ctx) = 0;
  virtual void exitListConstInitVal(SysYParser::ListConstInitValContext *ctx) = 0;

  virtual void enterVarDecl(SysYParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(SysYParser::VarDeclContext *ctx) = 0;

  virtual void enterUninitVarDef(SysYParser::UninitVarDefContext *ctx) = 0;
  virtual void exitUninitVarDef(SysYParser::UninitVarDefContext *ctx) = 0;

  virtual void enterInitVarDef(SysYParser::InitVarDefContext *ctx) = 0;
  virtual void exitInitVarDef(SysYParser::InitVarDefContext *ctx) = 0;

  virtual void enterScalarInitVal(SysYParser::ScalarInitValContext *ctx) = 0;
  virtual void exitScalarInitVal(SysYParser::ScalarInitValContext *ctx) = 0;

  virtual void enterListInitVal(SysYParser::ListInitValContext *ctx) = 0;
  virtual void exitListInitVal(SysYParser::ListInitValContext *ctx) = 0;

  virtual void enterFuncDef(SysYParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(SysYParser::FuncDefContext *ctx) = 0;

  virtual void enterFuncType(SysYParser::FuncTypeContext *ctx) = 0;
  virtual void exitFuncType(SysYParser::FuncTypeContext *ctx) = 0;

  virtual void enterFuncFParams(SysYParser::FuncFParamsContext *ctx) = 0;
  virtual void exitFuncFParams(SysYParser::FuncFParamsContext *ctx) = 0;

  virtual void enterFuncFParam(SysYParser::FuncFParamContext *ctx) = 0;
  virtual void exitFuncFParam(SysYParser::FuncFParamContext *ctx) = 0;

  virtual void enterBlock(SysYParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SysYParser::BlockContext *ctx) = 0;

  virtual void enterBlockItem(SysYParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(SysYParser::BlockItemContext *ctx) = 0;

  virtual void enterAssignStmt(SysYParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(SysYParser::AssignStmtContext *ctx) = 0;

  virtual void enterExprStmt(SysYParser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(SysYParser::ExprStmtContext *ctx) = 0;

  virtual void enterBlockStmt(SysYParser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(SysYParser::BlockStmtContext *ctx) = 0;

  virtual void enterIfStmt(SysYParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(SysYParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(SysYParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(SysYParser::WhileStmtContext *ctx) = 0;

  virtual void enterForStmt(SysYParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(SysYParser::ForStmtContext *ctx) = 0;

  virtual void enterBreakStmt(SysYParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(SysYParser::BreakStmtContext *ctx) = 0;

  virtual void enterContinueStmt(SysYParser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(SysYParser::ContinueStmtContext *ctx) = 0;

  virtual void enterReturnStmt(SysYParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(SysYParser::ReturnStmtContext *ctx) = 0;

  virtual void enterUnaryExpr(SysYParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(SysYParser::UnaryExprContext *ctx) = 0;

  virtual void enterAddSubExpr(SysYParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(SysYParser::AddSubExprContext *ctx) = 0;

  virtual void enterNumberExpr(SysYParser::NumberExprContext *ctx) = 0;
  virtual void exitNumberExpr(SysYParser::NumberExprContext *ctx) = 0;

  virtual void enterLValExpr(SysYParser::LValExprContext *ctx) = 0;
  virtual void exitLValExpr(SysYParser::LValExprContext *ctx) = 0;

  virtual void enterMulDivModExpr(SysYParser::MulDivModExprContext *ctx) = 0;
  virtual void exitMulDivModExpr(SysYParser::MulDivModExprContext *ctx) = 0;

  virtual void enterCallExpr(SysYParser::CallExprContext *ctx) = 0;
  virtual void exitCallExpr(SysYParser::CallExprContext *ctx) = 0;

  virtual void enterParenExpr(SysYParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(SysYParser::ParenExprContext *ctx) = 0;

  virtual void enterOrCond(SysYParser::OrCondContext *ctx) = 0;
  virtual void exitOrCond(SysYParser::OrCondContext *ctx) = 0;

  virtual void enterExpCond(SysYParser::ExpCondContext *ctx) = 0;
  virtual void exitExpCond(SysYParser::ExpCondContext *ctx) = 0;

  virtual void enterRelCond(SysYParser::RelCondContext *ctx) = 0;
  virtual void exitRelCond(SysYParser::RelCondContext *ctx) = 0;

  virtual void enterAndCond(SysYParser::AndCondContext *ctx) = 0;
  virtual void exitAndCond(SysYParser::AndCondContext *ctx) = 0;

  virtual void enterEqCond(SysYParser::EqCondContext *ctx) = 0;
  virtual void exitEqCond(SysYParser::EqCondContext *ctx) = 0;

  virtual void enterLVal(SysYParser::LValContext *ctx) = 0;
  virtual void exitLVal(SysYParser::LValContext *ctx) = 0;

  virtual void enterNumber(SysYParser::NumberContext *ctx) = 0;
  virtual void exitNumber(SysYParser::NumberContext *ctx) = 0;

  virtual void enterUnaryOp(SysYParser::UnaryOpContext *ctx) = 0;
  virtual void exitUnaryOp(SysYParser::UnaryOpContext *ctx) = 0;

  virtual void enterFuncRParams(SysYParser::FuncRParamsContext *ctx) = 0;
  virtual void exitFuncRParams(SysYParser::FuncRParamsContext *ctx) = 0;

  virtual void enterConstExp(SysYParser::ConstExpContext *ctx) = 0;
  virtual void exitConstExp(SysYParser::ConstExpContext *ctx) = 0;


};

