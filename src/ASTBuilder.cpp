#include "ASTBuilder.h"
#include "SysYParser.h"
#include <stdexcept>

std::unique_ptr<CompUnit> ASTBuilder::buildAST(SysYParser::CompUnitContext *ctx) {
    auto result = visitCompUnit(ctx);
    return unwrapPtr<CompUnit>(std::move(result));
}

std::any ASTBuilder::visitCompUnit(SysYParser::CompUnitContext *ctx) {
    auto compUnit = std::make_unique<CompUnit>();
    
    for (auto declCtx : ctx->decl()) {
        auto decl = unwrapPtr<Decl>(visitDecl(declCtx));
        compUnit->decls.push_back(std::move(decl));
    }
    
    for (auto funcDefCtx : ctx->funcDef()) {
        auto funcDef = unwrapPtr<FuncDef>(visitFuncDef(funcDefCtx));
        compUnit->decls.push_back(std::move(funcDef));
    }
    
    return wrapPtr(std::move(compUnit));
}

std::any ASTBuilder::visitDecl(SysYParser::DeclContext *ctx) {
    if (ctx->constDecl()) {
        return visitConstDecl(ctx->constDecl());
    } else if (ctx->varDecl()) {
        return visitVarDecl(ctx->varDecl());
    }
    throw std::runtime_error("Unknown decl type");
}

std::any ASTBuilder::visitConstDecl(SysYParser::ConstDeclContext *ctx) {
    auto varDecl = std::make_unique<VarDecl>(true);
    
    for (auto constDefCtx : ctx->constDef()) {
        auto varDef = unwrapPtr<VarDef>(visitConstDef(constDefCtx));
        varDecl->defs.push_back(std::move(varDef));
    }
    
    return wrapPtr(std::move(varDecl));
}

std::any ASTBuilder::visitVarDecl(SysYParser::VarDeclContext *ctx) {
    auto varDecl = std::make_unique<VarDecl>(false);
    
    for (auto varDefCtx : ctx->varDef()) {
        auto varDef = unwrapPtr<VarDef>(visit(varDefCtx));
        varDecl->defs.push_back(std::move(varDef));
    }
    
    return wrapPtr(std::move(varDecl));
}

std::any ASTBuilder::visitConstDef(SysYParser::ConstDefContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    auto varDef = std::make_unique<VarDef>(name);
    
    for (auto constExpCtx : ctx->constExp()) {
        auto expr = unwrapPtr<Expr>(visitConstExp(constExpCtx));
        varDef->arrayDimensions.push_back(std::move(expr));
    }
    
    auto initVal = unwrapPtr<Expr>(visit(ctx->constInitVal()));
    varDef->initVal = std::move(initVal);
    
    return wrapPtr(std::move(varDef));
}

std::any ASTBuilder::visitUninitVarDef(SysYParser::UninitVarDefContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    auto varDef = std::make_unique<VarDef>(name);
    
    for (auto constExpCtx : ctx->constExp()) {
        auto expr = unwrapPtr<Expr>(visitConstExp(constExpCtx));
        varDef->arrayDimensions.push_back(std::move(expr));
    }
    
    varDef->initVal = nullptr;
    return wrapPtr(std::move(varDef));
}

std::any ASTBuilder::visitInitVarDef(SysYParser::InitVarDefContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    auto varDef = std::make_unique<VarDef>(name);
    
    for (auto constExpCtx : ctx->constExp()) {
        auto expr = unwrapPtr<Expr>(visitConstExp(constExpCtx));
        varDef->arrayDimensions.push_back(std::move(expr));
    }
    
    auto initVal = unwrapPtr<Expr>(visit(ctx->initVal()));
    varDef->initVal = std::move(initVal);
    
    return wrapPtr(std::move(varDef));
}

std::any ASTBuilder::visitScalarConstInitVal(SysYParser::ScalarConstInitValContext *ctx) {
    return visitConstExp(ctx->constExp());
}

std::any ASTBuilder::visitListConstInitVal(SysYParser::ListConstInitValContext *ctx) {
    auto initList = std::make_unique<InitListExpr>();
    for (auto initValCtx : ctx->constInitVal()) {
        auto expr = unwrapPtr<Expr>(visit(initValCtx));
        initList->values.push_back(std::move(expr));
    }
    return wrapPtr(std::move(initList));
}

std::any ASTBuilder::visitScalarInitVal(SysYParser::ScalarInitValContext *ctx) {
    return visit(ctx->exp());
}

std::any ASTBuilder::visitListInitVal(SysYParser::ListInitValContext *ctx) {
    auto initList = std::make_unique<InitListExpr>();
    for (auto initValCtx : ctx->initVal()) {
        auto expr = unwrapPtr<Expr>(visit(initValCtx));
        initList->values.push_back(std::move(expr));
    }
    return wrapPtr(std::move(initList));
}

std::any ASTBuilder::visitFuncDef(SysYParser::FuncDefContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    bool isVoid = ctx->funcType()->VOID() != nullptr;
    
    auto body = unwrapPtr<BlockStmt>(visitBlock(ctx->block()));
    auto funcDef = std::make_unique<FuncDef>(isVoid, name, std::move(body));
    
    if (ctx->funcFParams()) {
        for (auto paramCtx : ctx->funcFParams()->funcFParam()) {
            auto param = unwrapPtr<FuncParam>(visitFuncFParam(paramCtx));
            funcDef->params.push_back(std::move(param));
        }
    }
    
    return wrapPtr(std::move(funcDef));
}

std::any ASTBuilder::visitFuncFParam(SysYParser::FuncFParamContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    auto param = std::make_unique<FuncParam>(name);
    
    if (!ctx->L_BRACKET().empty()) {
        param->arrayDimensions.push_back(nullptr);
        
        for (auto expCtx : ctx->exp()) {
            auto expr = unwrapPtr<Expr>(visit(expCtx));
            param->arrayDimensions.push_back(std::move(expr));
        }
    }
    
    return wrapPtr(std::move(param));
}

std::any ASTBuilder::visitBlock(SysYParser::BlockContext *ctx) {
    auto block = std::make_unique<BlockStmt>();
    
    for (auto itemCtx : ctx->blockItem()) {
        if (itemCtx->decl()) {
            auto decl = unwrapPtr<Decl>(visitDecl(itemCtx->decl()));
            block->items.push_back(std::move(decl));
        } else if (itemCtx->stmt()) {
            auto stmt = unwrapPtr<Stmt>(visit(itemCtx->stmt()));
            block->items.push_back(std::move(stmt));
        }
    }
    
    return wrapPtr(std::move(block));
}

std::any ASTBuilder::visitAssignStmt(SysYParser::AssignStmtContext *ctx) {
    auto lval = unwrapPtr<VarExpr>(visitLVal(ctx->lVal()));
    auto rval = unwrapPtr<Expr>(visit(ctx->exp()));
    
    return wrapPtr(std::make_unique<AssignStmt>(std::move(lval), std::move(rval)));
}

std::any ASTBuilder::visitExprStmt(SysYParser::ExprStmtContext *ctx) {
    if (ctx->exp()) {
        auto expr = unwrapPtr<Expr>(visit(ctx->exp()));
        return wrapPtr(std::make_unique<ExprStmt>(std::move(expr)));
    } else {
        return wrapPtr(std::make_unique<ExprStmt>(nullptr));
    }
}

std::any ASTBuilder::visitBlockStmt(SysYParser::BlockStmtContext *ctx) {
    return visitBlock(ctx->block());
}

std::any ASTBuilder::visitIfStmt(SysYParser::IfStmtContext *ctx) {
    auto cond = unwrapPtr<Expr>(visit(ctx->cond()));
    auto thenStmt = unwrapPtr<Stmt>(visit(ctx->stmt(0)));
    
    std::unique_ptr<Stmt> elseStmt = nullptr;
    if (ctx->stmt().size() > 1) {
        elseStmt = unwrapPtr<Stmt>(visit(ctx->stmt(1)));
    }
    
    return wrapPtr(std::make_unique<IfStmt>(
        std::move(cond),
        std::move(thenStmt),
        std::move(elseStmt)
    ));
}

std::any ASTBuilder::visitWhileStmt(SysYParser::WhileStmtContext *ctx) {
    auto cond = unwrapPtr<Expr>(visit(ctx->cond()));
    auto body = unwrapPtr<Stmt>(visit(ctx->stmt()));
    
    return wrapPtr(std::make_unique<WhileStmt>(std::move(cond), std::move(body)));
}

std::any ASTBuilder::visitBreakStmt(SysYParser::BreakStmtContext *ctx) {
    return wrapPtr(std::make_unique<BreakStmt>());
}

std::any ASTBuilder::visitContinueStmt(SysYParser::ContinueStmtContext *ctx) {
    return wrapPtr(std::make_unique<ContinueStmt>());
}

std::any ASTBuilder::visitReturnStmt(SysYParser::ReturnStmtContext *ctx) {
    if (ctx->exp()) {
        auto expr = unwrapPtr<Expr>(visit(ctx->exp()));
        return wrapPtr(std::make_unique<ReturnStmt>(std::move(expr)));
    } else {
        return wrapPtr(std::make_unique<ReturnStmt>(nullptr));
    }
}

std::any ASTBuilder::visitParenExpr(SysYParser::ParenExprContext *ctx) {
    return visit(ctx->exp());
}

std::any ASTBuilder::visitLValExpr(SysYParser::LValExprContext *ctx) {
    return visitLVal(ctx->lVal());
}

std::any ASTBuilder::visitNumberExpr(SysYParser::NumberExprContext *ctx) {
    return visitNumber(ctx->number());
}

std::any ASTBuilder::visitCallExpr(SysYParser::CallExprContext *ctx) {
    std::string funcName = ctx->IDENT()->getText();
    auto call = std::make_unique<CallExpr>(funcName);
    
    if (ctx->funcRParams()) {
        for (auto expCtx : ctx->funcRParams()->exp()) {
            auto arg = unwrapPtr<Expr>(visit(expCtx));
            call->args.push_back(std::move(arg));
        }
    }
    
    return wrapPtr(std::move(call));
}

std::any ASTBuilder::visitUnaryExpr(SysYParser::UnaryExprContext *ctx) {
    std::string op = ctx->unaryOp()->getText();
    auto operand = unwrapPtr<Expr>(visit(ctx->exp()));
    
    return wrapPtr(std::make_unique<UnaryExpr>(op, std::move(operand)));
}

std::any ASTBuilder::visitMulDivModExpr(SysYParser::MulDivModExprContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->exp(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->exp(1)));
    std::string op;
    
    if (ctx->MUL()) op = "*";
    else if (ctx->DIV()) op = "/";
    else if (ctx->MOD()) op = "%";
    
    return wrapPtr(std::make_unique<BinaryExpr>(op, std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitAddSubExpr(SysYParser::AddSubExprContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->exp(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->exp(1)));
    std::string op;
    
    if (ctx->PLUS()) op = "+";
    else if (ctx->MINUS()) op = "-";
    
    return wrapPtr(std::make_unique<BinaryExpr>(op, std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitExpCond(SysYParser::ExpCondContext *ctx) {
    return visit(ctx->exp());
}

std::any ASTBuilder::visitRelCond(SysYParser::RelCondContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->cond(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->cond(1)));
    std::string op;
    
    if (ctx->LT()) op = "<";
    else if (ctx->GT()) op = ">";
    else if (ctx->LE()) op = "<=";
    else if (ctx->GE()) op = ">=";
    
    return wrapPtr(std::make_unique<BinaryExpr>(op, std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitEqCond(SysYParser::EqCondContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->cond(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->cond(1)));
    std::string op;
    
    if (ctx->EQ()) op = "==";
    else if (ctx->NEQ()) op = "!=";
    
    return wrapPtr(std::make_unique<BinaryExpr>(op, std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitAndCond(SysYParser::AndCondContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->cond(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->cond(1)));
    
    return wrapPtr(std::make_unique<BinaryExpr>("&&", std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitOrCond(SysYParser::OrCondContext *ctx) {
    auto lhs = unwrapPtr<Expr>(visit(ctx->cond(0)));
    auto rhs = unwrapPtr<Expr>(visit(ctx->cond(1)));
    
    return wrapPtr(std::make_unique<BinaryExpr>("||", std::move(lhs), std::move(rhs)));
}

std::any ASTBuilder::visitLVal(SysYParser::LValContext *ctx) {
    std::string name = ctx->IDENT()->getText();
    auto lval = std::make_unique<VarExpr>(name);
    
    for (auto expCtx : ctx->exp()) {
        auto index = unwrapPtr<Expr>(visit(expCtx));
        lval->indices.push_back(std::move(index));
    }
    
    return wrapPtr(std::move(lval));
}

std::any ASTBuilder::visitNumber(SysYParser::NumberContext *ctx) {
    int value = std::stoi(ctx->getText());
    return wrapPtr(std::make_unique<IntLiteral>(value));
}

std::any ASTBuilder::visitConstExp(SysYParser::ConstExpContext *ctx) {
    return visit(ctx->addExp());
}