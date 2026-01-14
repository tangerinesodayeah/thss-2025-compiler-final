
// Generated from /Users/zhaowenrui/Desktop/编译汇编/assignment 2/SysYParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SysYParserListener.h"


/**
 * This class provides an empty implementation of SysYParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SysYParserBaseListener : public SysYParserListener {
public:

  virtual void enterCompUnit(SysYParser::CompUnitContext * /*ctx*/) override { }
  virtual void exitCompUnit(SysYParser::CompUnitContext * /*ctx*/) override { }

  virtual void enterDecl(SysYParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(SysYParser::DeclContext * /*ctx*/) override { }

  virtual void enterConstDecl(SysYParser::ConstDeclContext * /*ctx*/) override { }
  virtual void exitConstDecl(SysYParser::ConstDeclContext * /*ctx*/) override { }

  virtual void enterBType(SysYParser::BTypeContext * /*ctx*/) override { }
  virtual void exitBType(SysYParser::BTypeContext * /*ctx*/) override { }

  virtual void enterConstDef(SysYParser::ConstDefContext * /*ctx*/) override { }
  virtual void exitConstDef(SysYParser::ConstDefContext * /*ctx*/) override { }

  virtual void enterScalarConstInitVal(SysYParser::ScalarConstInitValContext * /*ctx*/) override { }
  virtual void exitScalarConstInitVal(SysYParser::ScalarConstInitValContext * /*ctx*/) override { }

  virtual void enterListConstInitVal(SysYParser::ListConstInitValContext * /*ctx*/) override { }
  virtual void exitListConstInitVal(SysYParser::ListConstInitValContext * /*ctx*/) override { }

  virtual void enterVarDecl(SysYParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(SysYParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterUninitVarDef(SysYParser::UninitVarDefContext * /*ctx*/) override { }
  virtual void exitUninitVarDef(SysYParser::UninitVarDefContext * /*ctx*/) override { }

  virtual void enterInitVarDef(SysYParser::InitVarDefContext * /*ctx*/) override { }
  virtual void exitInitVarDef(SysYParser::InitVarDefContext * /*ctx*/) override { }

  virtual void enterScalarInitVal(SysYParser::ScalarInitValContext * /*ctx*/) override { }
  virtual void exitScalarInitVal(SysYParser::ScalarInitValContext * /*ctx*/) override { }

  virtual void enterListInitVal(SysYParser::ListInitValContext * /*ctx*/) override { }
  virtual void exitListInitVal(SysYParser::ListInitValContext * /*ctx*/) override { }

  virtual void enterFuncDef(SysYParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(SysYParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterFuncType(SysYParser::FuncTypeContext * /*ctx*/) override { }
  virtual void exitFuncType(SysYParser::FuncTypeContext * /*ctx*/) override { }

  virtual void enterFuncFParams(SysYParser::FuncFParamsContext * /*ctx*/) override { }
  virtual void exitFuncFParams(SysYParser::FuncFParamsContext * /*ctx*/) override { }

  virtual void enterFuncFParam(SysYParser::FuncFParamContext * /*ctx*/) override { }
  virtual void exitFuncFParam(SysYParser::FuncFParamContext * /*ctx*/) override { }

  virtual void enterBlock(SysYParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SysYParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockItem(SysYParser::BlockItemContext * /*ctx*/) override { }
  virtual void exitBlockItem(SysYParser::BlockItemContext * /*ctx*/) override { }

  virtual void enterAssignStmt(SysYParser::AssignStmtContext * /*ctx*/) override { }
  virtual void exitAssignStmt(SysYParser::AssignStmtContext * /*ctx*/) override { }

  virtual void enterExprStmt(SysYParser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(SysYParser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterBlockStmt(SysYParser::BlockStmtContext * /*ctx*/) override { }
  virtual void exitBlockStmt(SysYParser::BlockStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(SysYParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(SysYParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(SysYParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(SysYParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(SysYParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(SysYParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(SysYParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(SysYParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(SysYParser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(SysYParser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(SysYParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(SysYParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(SysYParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(SysYParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(SysYParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(SysYParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterNumberExpr(SysYParser::NumberExprContext * /*ctx*/) override { }
  virtual void exitNumberExpr(SysYParser::NumberExprContext * /*ctx*/) override { }

  virtual void enterLValExpr(SysYParser::LValExprContext * /*ctx*/) override { }
  virtual void exitLValExpr(SysYParser::LValExprContext * /*ctx*/) override { }

  virtual void enterMulDivModExpr(SysYParser::MulDivModExprContext * /*ctx*/) override { }
  virtual void exitMulDivModExpr(SysYParser::MulDivModExprContext * /*ctx*/) override { }

  virtual void enterCallExpr(SysYParser::CallExprContext * /*ctx*/) override { }
  virtual void exitCallExpr(SysYParser::CallExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(SysYParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(SysYParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterOrCond(SysYParser::OrCondContext * /*ctx*/) override { }
  virtual void exitOrCond(SysYParser::OrCondContext * /*ctx*/) override { }

  virtual void enterExpCond(SysYParser::ExpCondContext * /*ctx*/) override { }
  virtual void exitExpCond(SysYParser::ExpCondContext * /*ctx*/) override { }

  virtual void enterRelCond(SysYParser::RelCondContext * /*ctx*/) override { }
  virtual void exitRelCond(SysYParser::RelCondContext * /*ctx*/) override { }

  virtual void enterAndCond(SysYParser::AndCondContext * /*ctx*/) override { }
  virtual void exitAndCond(SysYParser::AndCondContext * /*ctx*/) override { }

  virtual void enterEqCond(SysYParser::EqCondContext * /*ctx*/) override { }
  virtual void exitEqCond(SysYParser::EqCondContext * /*ctx*/) override { }

  virtual void enterLVal(SysYParser::LValContext * /*ctx*/) override { }
  virtual void exitLVal(SysYParser::LValContext * /*ctx*/) override { }

  virtual void enterNumber(SysYParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(SysYParser::NumberContext * /*ctx*/) override { }

  virtual void enterUnaryOp(SysYParser::UnaryOpContext * /*ctx*/) override { }
  virtual void exitUnaryOp(SysYParser::UnaryOpContext * /*ctx*/) override { }

  virtual void enterFuncRParams(SysYParser::FuncRParamsContext * /*ctx*/) override { }
  virtual void exitFuncRParams(SysYParser::FuncRParamsContext * /*ctx*/) override { }

  virtual void enterConstExp(SysYParser::ConstExpContext * /*ctx*/) override { }
  virtual void exitConstExp(SysYParser::ConstExpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

