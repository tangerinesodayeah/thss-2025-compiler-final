#pragma once
#include <memory>
#include <string>
#include <vector>

// 前向声明
class ASTVisitor;

// ========== 基类 ==========
class ASTNode {
public:
    virtual ~ASTNode() = default;
    virtual void accept(ASTVisitor& visitor) = 0;
};

// ========== 表达式 ==========
class Expr : public ASTNode {
public:
    virtual ~Expr() = default;
};

class IntLiteral : public Expr {
public:
    int value;
    
    IntLiteral(int v) : value(v) {}
    void accept(ASTVisitor& visitor) override;
};

class VarExpr : public Expr {
public:
    std::string name;
    std::vector<std::unique_ptr<Expr>> indices; // 数组索引
    
    VarExpr(const std::string& n) : name(n) {}
    void accept(ASTVisitor& visitor) override;
};

class BinaryExpr : public Expr {
public:
    std::string op;
    std::unique_ptr<Expr> lhs;
    std::unique_ptr<Expr> rhs;
    
    BinaryExpr(const std::string& o, std::unique_ptr<Expr> l, std::unique_ptr<Expr> r)
        : op(o), lhs(std::move(l)), rhs(std::move(r)) {}
    void accept(ASTVisitor& visitor) override;
};

class UnaryExpr : public Expr {
public:
    std::string op;
    std::unique_ptr<Expr> operand;
    
    UnaryExpr(const std::string& o, std::unique_ptr<Expr> opnd)
        : op(o), operand(std::move(opnd)) {}
    void accept(ASTVisitor& visitor) override;
};

class CallExpr : public Expr {
public:
    std::string funcName;
    std::vector<std::unique_ptr<Expr>> args;
    
    CallExpr(const std::string& name) : funcName(name) {}
    void accept(ASTVisitor& visitor) override;
};

class InitListExpr : public Expr {
public:
    std::vector<std::unique_ptr<Expr>> values;
    
    void accept(ASTVisitor& visitor) override;
};

// ========== 语句 ==========
class Stmt : public ASTNode {
public:
    virtual ~Stmt() = default;
};

class AssignStmt : public Stmt {
public:
    std::unique_ptr<VarExpr> lval;
    std::unique_ptr<Expr> expr;
    
    AssignStmt(std::unique_ptr<VarExpr> lv, std::unique_ptr<Expr> ex)
        : lval(std::move(lv)), expr(std::move(ex)) {}
    void accept(ASTVisitor& visitor) override;
};

class ExprStmt : public Stmt {
public:
    std::unique_ptr<Expr> expr; // 可能为空
    
    ExprStmt(std::unique_ptr<Expr> ex) : expr(std::move(ex)) {}
    void accept(ASTVisitor& visitor) override;
};

class BlockStmt : public Stmt {
public:
    std::vector<std::unique_ptr<ASTNode>> items; // 可以是 Decl 或 Stmt
    
    void accept(ASTVisitor& visitor) override;
};

class IfStmt : public Stmt {
public:
    std::unique_ptr<Expr> cond;
    std::unique_ptr<Stmt> thenStmt;
    std::unique_ptr<Stmt> elseStmt; // 可能为空
    
    IfStmt(std::unique_ptr<Expr> c, std::unique_ptr<Stmt> t, std::unique_ptr<Stmt> e)
        : cond(std::move(c)), thenStmt(std::move(t)), elseStmt(std::move(e)) {}
    void accept(ASTVisitor& visitor) override;
};

class WhileStmt : public Stmt {
public:
    std::unique_ptr<Expr> cond;
    std::unique_ptr<Stmt> body;
    
    WhileStmt(std::unique_ptr<Expr> c, std::unique_ptr<Stmt> b)
        : cond(std::move(c)), body(std::move(b)) {}
    void accept(ASTVisitor& visitor) override;
};

class BreakStmt : public Stmt {
public:
    void accept(ASTVisitor& visitor) override;
};

class ContinueStmt : public Stmt {
public:
    void accept(ASTVisitor& visitor) override;
};

class ReturnStmt : public Stmt {
public:
    std::unique_ptr<Expr> expr; // 可能为空（void 函数）
    
    ReturnStmt(std::unique_ptr<Expr> ex) : expr(std::move(ex)) {}
    void accept(ASTVisitor& visitor) override;
};

class SwitchCase : public ASTNode {
public:
    std::unique_ptr<Expr> value; // 对于case，value为常量；对于default，value为nullptr
    std::vector<std::unique_ptr<ASTNode>> body; // 语句列表
    
    SwitchCase(std::unique_ptr<Expr> v) : value(std::move(v)) {}
    void accept(ASTVisitor& visitor) override;
};

class SwitchStmt : public Stmt {
public:
    std::unique_ptr<Expr> cond;
    std::vector<std::unique_ptr<SwitchCase>> cases;
    
    SwitchStmt(std::unique_ptr<Expr> c) : cond(std::move(c)) {}
    void accept(ASTVisitor& visitor) override;
};

// ========== 声明 ==========
class Decl : public ASTNode {
public:
    virtual ~Decl() = default;
};

class VarDef {
public:
    std::string name;
    std::vector<std::unique_ptr<Expr>> arrayDimensions; // 数组维度
    std::unique_ptr<Expr> initVal; // 可能为空
    
    VarDef(const std::string& n) : name(n) {}
};

class VarDecl : public Decl {
public:
    bool isConst;
    std::vector<std::unique_ptr<VarDef>> defs;
    
    VarDecl(bool c) : isConst(c) {}
    void accept(ASTVisitor& visitor) override;
};

class FuncParam {
public:
    std::string name;
    std::vector<std::unique_ptr<Expr>> arrayDimensions; // 第一维可能为 nullptr
    
    FuncParam(const std::string& n) : name(n) {}
};

class FuncDef : public Decl {
public:
    bool isVoid;
    std::string name;
    std::vector<std::unique_ptr<FuncParam>> params;
    std::unique_ptr<BlockStmt> body;
    
    FuncDef(bool v, const std::string& n, std::unique_ptr<BlockStmt> b)
        : isVoid(v), name(n), body(std::move(b)) {}
    void accept(ASTVisitor& visitor) override;
};

// ========== 编译单元 ==========
class CompUnit : public ASTNode {
public:
    std::vector<std::unique_ptr<Decl>> decls; // VarDecl 或 FuncDef
    
    void accept(ASTVisitor& visitor) override;
};

// ========== Visitor 接口 ==========
class ASTVisitor {
public:
    virtual ~ASTVisitor() = default;
    
    virtual void visit(IntLiteral* node) = 0;
    virtual void visit(VarExpr* node) = 0;
    virtual void visit(BinaryExpr* node) = 0;
    virtual void visit(UnaryExpr* node) = 0;
    virtual void visit(CallExpr* node) = 0;
    virtual void visit(InitListExpr* node) = 0;
    
    virtual void visit(AssignStmt* node) = 0;
    virtual void visit(ExprStmt* node) = 0;
    virtual void visit(BlockStmt* node) = 0;
    virtual void visit(IfStmt* node) = 0;
    virtual void visit(WhileStmt* node) = 0;
    virtual void visit(BreakStmt* node) = 0;
    virtual void visit(ContinueStmt* node) = 0;
    virtual void visit(ReturnStmt* node) = 0;
    virtual void visit(SwitchCase* node) = 0;
    virtual void visit(SwitchStmt* node) = 0;
    
    virtual void visit(VarDecl* node) = 0;
    virtual void visit(FuncDef* node) = 0;
    virtual void visit(CompUnit* node) = 0;
};