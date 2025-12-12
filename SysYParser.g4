parser grammar SysYParser;

options {
    tokenVocab = SysYLexer;
}

// 编译单元
compUnit
    : (decl | funcDef)* EOF
    ;

// 声明
decl
    : constDecl
    | varDecl
    ;

// 常量声明
constDecl
    : CONST bType constDef (COMMA constDef)* SEMICOLON
    ;

bType
    : INT
    ;

constDef
    : IDENT (L_BRACKET constExp R_BRACKET)* ASSIGN constInitVal
    ;

constInitVal
    : constExp                                                    # scalarConstInitVal
    | L_BRACE (constInitVal (COMMA constInitVal)*)? R_BRACE      # listConstInitVal
    ;

// 变量声明
varDecl
    : bType varDef (COMMA varDef)* SEMICOLON
    ;

varDef
    : IDENT (L_BRACKET constExp R_BRACKET)*                      # uninitVarDef
    | IDENT (L_BRACKET constExp R_BRACKET)* ASSIGN initVal       # initVarDef
    ;

initVal
    : exp                                                         # scalarInitVal
    | L_BRACE (initVal (COMMA initVal)*)? R_BRACE                # listInitVal
    ;

// 函数定义
funcDef
    : funcType IDENT L_PAREN funcFParams? R_PAREN block
    ;

funcType
    : VOID
    | INT
    ;

funcFParams
    : funcFParam (COMMA funcFParam)*
    ;

funcFParam
    : bType IDENT (L_BRACKET R_BRACKET (L_BRACKET exp R_BRACKET)*)?
    ;

// 语句块
block
    : L_BRACE blockItem* R_BRACE
    ;

blockItem
    : decl
    | stmt
    ;

// 语句
stmt
    : lVal ASSIGN exp SEMICOLON                                   # assignStmt
    | exp? SEMICOLON                                              # exprStmt
    | block                                                       # blockStmt
    | IF L_PAREN cond R_PAREN stmt (ELSE stmt)?                  # ifStmt
    | WHILE L_PAREN cond R_PAREN stmt                            # whileStmt
    | BREAK SEMICOLON                                             # breakStmt
    | CONTINUE SEMICOLON                                          # continueStmt
    | RETURN exp? SEMICOLON                                       # returnStmt
    ;

// 表达式
exp
    : L_PAREN exp R_PAREN                                         # parenExpr
    | lVal                                                        # lValExpr
    | number                                                      # numberExpr
    | IDENT L_PAREN funcRParams? R_PAREN                         # callExpr
    | unaryOp exp                                                 # unaryExpr
    | exp (MUL | DIV | MOD) exp                                  # mulDivModExpr
    | exp (PLUS | MINUS) exp                                     # addSubExpr
    ;

cond
    : exp                                                         # expCond
    | cond (LT | GT | LE | GE) cond                              # relCond
    | cond (EQ | NEQ) cond                                       # eqCond
    | cond AND cond                                              # andCond
    | cond OR cond                                               # orCond
    ;

lVal
    : IDENT (L_BRACKET exp R_BRACKET)*
    ;

number
    : INT_CONST
    ;

unaryOp
    : PLUS
    | MINUS
    | NOT
    ;

funcRParams
    : exp (COMMA exp)*
    ;

constExp
    : addExp
    ;

addExp
    : mulExp
    | addExp (PLUS | MINUS) mulExp
    ;

mulExp
    : unaryExp
    | mulExp (MUL | DIV | MOD) unaryExp
    ;

unaryExp
    : primaryExp
    | IDENT L_PAREN funcRParams? R_PAREN
    | unaryOp unaryExp
    ;

primaryExp
    : L_PAREN exp R_PAREN
    | lVal
    | number
    ;