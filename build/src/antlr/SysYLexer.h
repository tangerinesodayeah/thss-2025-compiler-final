
// Generated from /Users/zhaowenrui/Desktop/编译汇编/assignment 2/SysYLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SysYLexer : public antlr4::Lexer {
public:
  enum {
    CONST = 1, INT = 2, VOID = 3, IF = 4, ELSE = 5, WHILE = 6, FOR = 7, 
    BREAK = 8, CONTINUE = 9, RETURN = 10, PLUS = 11, MINUS = 12, MUL = 13, 
    DIV = 14, MOD = 15, EQ = 16, NEQ = 17, LT = 18, GT = 19, LE = 20, GE = 21, 
    AND = 22, OR = 23, NOT = 24, ASSIGN = 25, SEMICOLON = 26, COMMA = 27, 
    L_PAREN = 28, R_PAREN = 29, L_BRACE = 30, R_BRACE = 31, L_BRACKET = 32, 
    R_BRACKET = 33, INT_CONST = 34, IDENT = 35, WS = 36, LINE_COMMENT = 37, 
    BLOCK_COMMENT = 38
  };

  explicit SysYLexer(antlr4::CharStream *input);

  ~SysYLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

