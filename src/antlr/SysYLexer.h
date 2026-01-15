
// Generated from /mnt/f/编译原理/thss-2025-compiler-final/SysYLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SysYLexer : public antlr4::Lexer {
public:
  enum {
    CONST = 1, INT = 2, VOID = 3, IF = 4, ELSE = 5, WHILE = 6, BREAK = 7, 
    CONTINUE = 8, RETURN = 9, SWITCH = 10, CASE = 11, DEFAULT = 12, PLUS = 13, 
    MINUS = 14, MUL = 15, DIV = 16, MOD = 17, EQ = 18, NEQ = 19, LT = 20, 
    GT = 21, LE = 22, GE = 23, AND = 24, OR = 25, NOT = 26, ASSIGN = 27, 
    SEMICOLON = 28, COMMA = 29, L_PAREN = 30, R_PAREN = 31, L_BRACE = 32, 
    R_BRACE = 33, L_BRACKET = 34, R_BRACKET = 35, COLON = 36, INT_CONST = 37, 
    IDENT = 38, WS = 39, LINE_COMMENT = 40, BLOCK_COMMENT = 41
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

