lexer grammar SysYLexer;

// Keywords
CONST: 'const';
INT: 'int';
VOID: 'void';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
BREAK: 'break';
CONTINUE: 'continue';
RETURN: 'return';

// Operators
PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
MOD: '%';

EQ: '==';
NEQ: '!=';
LT: '<';
GT: '>';
LE: '<=';
GE: '>=';

AND: '&&';
OR: '||';
NOT: '!';

ASSIGN: '=';

// Delimiters
SEMICOLON: ';';
COMMA: ',';
L_PAREN: '(';
R_PAREN: ')';
L_BRACE: '{';
R_BRACE: '}';
L_BRACKET: '[';
R_BRACKET: ']';

// Integer Constants
INT_CONST
    : '0'[xX][0-9a-fA-F]+
    | '0'[0-7]*
    | [1-9][0-9]*
    | '0'
    ;

// Identifiers
IDENT: [a-zA-Z_][a-zA-Z_0-9]*;

// Whitespace
WS: [ \t\r\n]+ -> skip;

// Comments
LINE_COMMENT: '//' ~[\r\n]* -> skip;
BLOCK_COMMENT: '/*' .*? '*/' -> skip;