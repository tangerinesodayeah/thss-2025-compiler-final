
// Generated from /mnt/d/编译原理/thss-2025-compiler-final/SysYParser.g4 by ANTLR 4.13.1


#include "SysYParserVisitor.h"

#include "SysYParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SysYParserStaticData final {
  SysYParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SysYParserStaticData(const SysYParserStaticData&) = delete;
  SysYParserStaticData(SysYParserStaticData&&) = delete;
  SysYParserStaticData& operator=(const SysYParserStaticData&) = delete;
  SysYParserStaticData& operator=(SysYParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sysyparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SysYParserStaticData *sysyparserParserStaticData = nullptr;

void sysyparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sysyparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(sysyparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SysYParserStaticData>(
    std::vector<std::string>{
      "compUnit", "decl", "constDecl", "bType", "constDef", "constInitVal", 
      "varDecl", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
      "funcFParam", "block", "blockItem", "stmt", "exp", "cond", "lVal", 
      "number", "unaryOp", "funcRParams", "constExp"
    },
    std::vector<std::string>{
      "", "'const'", "'int'", "'void'", "'if'", "'else'", "'while'", "'break'", 
      "'continue'", "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", 
      "'!='", "'<'", "'>'", "'<='", "'>='", "'&&'", "'||'", "'!'", "'='", 
      "';'", "','", "'('", "')'", "'{'", "'}'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "CONST", "INT", "VOID", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", 
      "RETURN", "PLUS", "MINUS", "MUL", "DIV", "MOD", "EQ", "NEQ", "LT", 
      "GT", "LE", "GE", "AND", "OR", "NOT", "ASSIGN", "SEMICOLON", "COMMA", 
      "L_PAREN", "R_PAREN", "L_BRACE", "R_BRACE", "L_BRACKET", "R_BRACKET", 
      "INT_CONST", "IDENT", "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,308,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,5,0,49,8,0,10,0,12,0,52,9,0,1,0,1,0,1,1,1,1,3,1,
  	58,8,1,1,2,1,2,1,2,1,2,1,2,5,2,65,8,2,10,2,12,2,68,9,2,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,5,4,79,8,4,10,4,12,4,82,9,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,5,5,92,8,5,10,5,12,5,95,9,5,3,5,97,8,5,1,5,3,5,100,8,5,1,
  	6,1,6,1,6,1,6,5,6,106,8,6,10,6,12,6,109,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,
  	7,5,7,118,8,7,10,7,12,7,121,9,7,1,7,1,7,1,7,1,7,1,7,5,7,128,8,7,10,7,
  	12,7,131,9,7,1,7,1,7,3,7,135,8,7,1,8,1,8,1,8,1,8,1,8,5,8,142,8,8,10,8,
  	12,8,145,9,8,3,8,147,8,8,1,8,3,8,150,8,8,1,9,1,9,1,9,1,9,3,9,156,8,9,
  	1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,166,8,11,10,11,12,11,169,9,
  	11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,179,8,12,10,12,12,12,
  	182,9,12,3,12,184,8,12,1,13,1,13,5,13,188,8,13,10,13,12,13,191,9,13,1,
  	13,1,13,1,14,1,14,3,14,197,8,14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,205,
  	8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,216,8,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,230,8,15,
  	1,15,3,15,233,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	3,16,245,8,16,1,16,1,16,1,16,1,16,3,16,251,8,16,1,16,1,16,1,16,1,16,1,
  	16,1,16,5,16,259,8,16,10,16,12,16,262,9,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,279,8,17,10,17,12,
  	17,282,9,17,1,18,1,18,1,18,1,18,1,18,5,18,289,8,18,10,18,12,18,292,9,
  	18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,5,21,301,8,21,10,21,12,21,304,9,
  	21,1,22,1,22,1,22,0,2,32,34,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,0,6,1,0,2,3,1,0,12,14,1,0,10,11,1,0,17,20,1,0,
  	15,16,2,0,10,11,23,23,328,0,50,1,0,0,0,2,57,1,0,0,0,4,59,1,0,0,0,6,71,
  	1,0,0,0,8,73,1,0,0,0,10,99,1,0,0,0,12,101,1,0,0,0,14,134,1,0,0,0,16,149,
  	1,0,0,0,18,151,1,0,0,0,20,160,1,0,0,0,22,162,1,0,0,0,24,170,1,0,0,0,26,
  	185,1,0,0,0,28,196,1,0,0,0,30,232,1,0,0,0,32,250,1,0,0,0,34,263,1,0,0,
  	0,36,283,1,0,0,0,38,293,1,0,0,0,40,295,1,0,0,0,42,297,1,0,0,0,44,305,
  	1,0,0,0,46,49,3,2,1,0,47,49,3,18,9,0,48,46,1,0,0,0,48,47,1,0,0,0,49,52,
  	1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,53,1,0,0,0,52,50,1,0,0,0,53,54,
  	5,0,0,1,54,1,1,0,0,0,55,58,3,4,2,0,56,58,3,12,6,0,57,55,1,0,0,0,57,56,
  	1,0,0,0,58,3,1,0,0,0,59,60,5,1,0,0,60,61,3,6,3,0,61,66,3,8,4,0,62,63,
  	5,26,0,0,63,65,3,8,4,0,64,62,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,
  	1,0,0,0,67,69,1,0,0,0,68,66,1,0,0,0,69,70,5,25,0,0,70,5,1,0,0,0,71,72,
  	5,2,0,0,72,7,1,0,0,0,73,80,5,34,0,0,74,75,5,31,0,0,75,76,3,44,22,0,76,
  	77,5,32,0,0,77,79,1,0,0,0,78,74,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,
  	81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,84,5,24,0,0,84,85,3,10,5,0,
  	85,9,1,0,0,0,86,100,3,44,22,0,87,96,5,29,0,0,88,93,3,10,5,0,89,90,5,26,
  	0,0,90,92,3,10,5,0,91,89,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,
  	0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,96,88,1,0,0,0,96,97,1,0,0,0,97,98,1,
  	0,0,0,98,100,5,30,0,0,99,86,1,0,0,0,99,87,1,0,0,0,100,11,1,0,0,0,101,
  	102,3,6,3,0,102,107,3,14,7,0,103,104,5,26,0,0,104,106,3,14,7,0,105,103,
  	1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,
  	0,109,107,1,0,0,0,110,111,5,25,0,0,111,13,1,0,0,0,112,119,5,34,0,0,113,
  	114,5,31,0,0,114,115,3,44,22,0,115,116,5,32,0,0,116,118,1,0,0,0,117,113,
  	1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,135,1,0,0,
  	0,121,119,1,0,0,0,122,129,5,34,0,0,123,124,5,31,0,0,124,125,3,44,22,0,
  	125,126,5,32,0,0,126,128,1,0,0,0,127,123,1,0,0,0,128,131,1,0,0,0,129,
  	127,1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,
  	24,0,0,133,135,3,16,8,0,134,112,1,0,0,0,134,122,1,0,0,0,135,15,1,0,0,
  	0,136,150,3,32,16,0,137,146,5,29,0,0,138,143,3,16,8,0,139,140,5,26,0,
  	0,140,142,3,16,8,0,141,139,1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,143,
  	144,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,146,138,1,0,0,0,146,147,1,
  	0,0,0,147,148,1,0,0,0,148,150,5,30,0,0,149,136,1,0,0,0,149,137,1,0,0,
  	0,150,17,1,0,0,0,151,152,3,20,10,0,152,153,5,34,0,0,153,155,5,27,0,0,
  	154,156,3,22,11,0,155,154,1,0,0,0,155,156,1,0,0,0,156,157,1,0,0,0,157,
  	158,5,28,0,0,158,159,3,26,13,0,159,19,1,0,0,0,160,161,7,0,0,0,161,21,
  	1,0,0,0,162,167,3,24,12,0,163,164,5,26,0,0,164,166,3,24,12,0,165,163,
  	1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,23,1,0,0,
  	0,169,167,1,0,0,0,170,171,3,6,3,0,171,183,5,34,0,0,172,173,5,31,0,0,173,
  	180,5,32,0,0,174,175,5,31,0,0,175,176,3,32,16,0,176,177,5,32,0,0,177,
  	179,1,0,0,0,178,174,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,
  	0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,183,172,1,0,0,0,183,184,1,0,0,0,
  	184,25,1,0,0,0,185,189,5,29,0,0,186,188,3,28,14,0,187,186,1,0,0,0,188,
  	191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,189,1,
  	0,0,0,192,193,5,30,0,0,193,27,1,0,0,0,194,197,3,2,1,0,195,197,3,30,15,
  	0,196,194,1,0,0,0,196,195,1,0,0,0,197,29,1,0,0,0,198,199,3,36,18,0,199,
  	200,5,24,0,0,200,201,3,32,16,0,201,202,5,25,0,0,202,233,1,0,0,0,203,205,
  	3,32,16,0,204,203,1,0,0,0,204,205,1,0,0,0,205,206,1,0,0,0,206,233,5,25,
  	0,0,207,233,3,26,13,0,208,209,5,4,0,0,209,210,5,27,0,0,210,211,3,34,17,
  	0,211,212,5,28,0,0,212,215,3,30,15,0,213,214,5,5,0,0,214,216,3,30,15,
  	0,215,213,1,0,0,0,215,216,1,0,0,0,216,233,1,0,0,0,217,218,5,6,0,0,218,
  	219,5,27,0,0,219,220,3,34,17,0,220,221,5,28,0,0,221,222,3,30,15,0,222,
  	233,1,0,0,0,223,224,5,7,0,0,224,233,5,25,0,0,225,226,5,8,0,0,226,233,
  	5,25,0,0,227,229,5,9,0,0,228,230,3,32,16,0,229,228,1,0,0,0,229,230,1,
  	0,0,0,230,231,1,0,0,0,231,233,5,25,0,0,232,198,1,0,0,0,232,204,1,0,0,
  	0,232,207,1,0,0,0,232,208,1,0,0,0,232,217,1,0,0,0,232,223,1,0,0,0,232,
  	225,1,0,0,0,232,227,1,0,0,0,233,31,1,0,0,0,234,235,6,16,-1,0,235,236,
  	5,27,0,0,236,237,3,32,16,0,237,238,5,28,0,0,238,251,1,0,0,0,239,251,3,
  	36,18,0,240,251,3,38,19,0,241,242,5,34,0,0,242,244,5,27,0,0,243,245,3,
  	42,21,0,244,243,1,0,0,0,244,245,1,0,0,0,245,246,1,0,0,0,246,251,5,28,
  	0,0,247,248,3,40,20,0,248,249,3,32,16,3,249,251,1,0,0,0,250,234,1,0,0,
  	0,250,239,1,0,0,0,250,240,1,0,0,0,250,241,1,0,0,0,250,247,1,0,0,0,251,
  	260,1,0,0,0,252,253,10,2,0,0,253,254,7,1,0,0,254,259,3,32,16,3,255,256,
  	10,1,0,0,256,257,7,2,0,0,257,259,3,32,16,2,258,252,1,0,0,0,258,255,1,
  	0,0,0,259,262,1,0,0,0,260,258,1,0,0,0,260,261,1,0,0,0,261,33,1,0,0,0,
  	262,260,1,0,0,0,263,264,6,17,-1,0,264,265,3,32,16,0,265,280,1,0,0,0,266,
  	267,10,4,0,0,267,268,7,3,0,0,268,279,3,34,17,5,269,270,10,3,0,0,270,271,
  	7,4,0,0,271,279,3,34,17,4,272,273,10,2,0,0,273,274,5,21,0,0,274,279,3,
  	34,17,3,275,276,10,1,0,0,276,277,5,22,0,0,277,279,3,34,17,2,278,266,1,
  	0,0,0,278,269,1,0,0,0,278,272,1,0,0,0,278,275,1,0,0,0,279,282,1,0,0,0,
  	280,278,1,0,0,0,280,281,1,0,0,0,281,35,1,0,0,0,282,280,1,0,0,0,283,290,
  	5,34,0,0,284,285,5,31,0,0,285,286,3,32,16,0,286,287,5,32,0,0,287,289,
  	1,0,0,0,288,284,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,290,291,1,0,0,
  	0,291,37,1,0,0,0,292,290,1,0,0,0,293,294,5,33,0,0,294,39,1,0,0,0,295,
  	296,7,5,0,0,296,41,1,0,0,0,297,302,3,32,16,0,298,299,5,26,0,0,299,301,
  	3,32,16,0,300,298,1,0,0,0,301,304,1,0,0,0,302,300,1,0,0,0,302,303,1,0,
  	0,0,303,43,1,0,0,0,304,302,1,0,0,0,305,306,3,32,16,0,306,45,1,0,0,0,33,
  	48,50,57,66,80,93,96,99,107,119,129,134,143,146,149,155,167,180,183,189,
  	196,204,215,229,232,244,250,258,260,278,280,290,302
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sysyparserParserStaticData = staticData.release();
}

}

SysYParser::SysYParser(TokenStream *input) : SysYParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SysYParser::SysYParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SysYParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sysyparserParserStaticData->atn, sysyparserParserStaticData->decisionToDFA, sysyparserParserStaticData->sharedContextCache, options);
}

SysYParser::~SysYParser() {
  delete _interpreter;
}

const atn::ATN& SysYParser::getATN() const {
  return *sysyparserParserStaticData->atn;
}

std::string SysYParser::getGrammarFileName() const {
  return "SysYParser.g4";
}

const std::vector<std::string>& SysYParser::getRuleNames() const {
  return sysyparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SysYParser::getVocabulary() const {
  return sysyparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SysYParser::getSerializedATN() const {
  return sysyparserParserStaticData->serializedATN;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysYParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::CompUnitContext::EOF() {
  return getToken(SysYParser::EOF, 0);
}

std::vector<SysYParser::DeclContext *> SysYParser::CompUnitContext::decl() {
  return getRuleContexts<SysYParser::DeclContext>();
}

SysYParser::DeclContext* SysYParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<SysYParser::DeclContext>(i);
}

std::vector<SysYParser::FuncDefContext *> SysYParser::CompUnitContext::funcDef() {
  return getRuleContexts<SysYParser::FuncDefContext>();
}

SysYParser::FuncDefContext* SysYParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<SysYParser::FuncDefContext>(i);
}


size_t SysYParser::CompUnitContext::getRuleIndex() const {
  return SysYParser::RuleCompUnit;
}


std::any SysYParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CompUnitContext* SysYParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysYParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14) != 0)) {
      setState(48);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(46);
        decl();
        break;
      }

      case 2: {
        setState(47);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(53);
    match(SysYParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SysYParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ConstDeclContext* SysYParser::DeclContext::constDecl() {
  return getRuleContext<SysYParser::ConstDeclContext>(0);
}

SysYParser::VarDeclContext* SysYParser::DeclContext::varDecl() {
  return getRuleContext<SysYParser::VarDeclContext>(0);
}


size_t SysYParser::DeclContext::getRuleIndex() const {
  return SysYParser::RuleDecl;
}


std::any SysYParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::DeclContext* SysYParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, SysYParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(55);
        constDecl();
        break;
      }

      case SysYParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(56);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

SysYParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ConstDeclContext::CONST() {
  return getToken(SysYParser::CONST, 0);
}

SysYParser::BTypeContext* SysYParser::ConstDeclContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::ConstDefContext *> SysYParser::ConstDeclContext::constDef() {
  return getRuleContexts<SysYParser::ConstDefContext>();
}

SysYParser::ConstDefContext* SysYParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<SysYParser::ConstDefContext>(i);
}

tree::TerminalNode* SysYParser::ConstDeclContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDeclContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::ConstDeclContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::ConstDeclContext::getRuleIndex() const {
  return SysYParser::RuleConstDecl;
}


std::any SysYParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstDeclContext* SysYParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, SysYParser::RuleConstDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(SysYParser::CONST);
    setState(60);
    bType();
    setState(61);
    constDef();
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(62);
      match(SysYParser::COMMA);
      setState(63);
      constDef();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(SysYParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysYParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BTypeContext::INT() {
  return getToken(SysYParser::INT, 0);
}


size_t SysYParser::BTypeContext::getRuleIndex() const {
  return SysYParser::RuleBType;
}


std::any SysYParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BTypeContext* SysYParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, SysYParser::RuleBType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(SysYParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

SysYParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ConstDefContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

tree::TerminalNode* SysYParser::ConstDefContext::ASSIGN() {
  return getToken(SysYParser::ASSIGN, 0);
}

SysYParser::ConstInitValContext* SysYParser::ConstDefContext::constInitVal() {
  return getRuleContext<SysYParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDefContext::L_BRACKET() {
  return getTokens(SysYParser::L_BRACKET);
}

tree::TerminalNode* SysYParser::ConstDefContext::L_BRACKET(size_t i) {
  return getToken(SysYParser::L_BRACKET, i);
}

std::vector<SysYParser::ConstExpContext *> SysYParser::ConstDefContext::constExp() {
  return getRuleContexts<SysYParser::ConstExpContext>();
}

SysYParser::ConstExpContext* SysYParser::ConstDefContext::constExp(size_t i) {
  return getRuleContext<SysYParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDefContext::R_BRACKET() {
  return getTokens(SysYParser::R_BRACKET);
}

tree::TerminalNode* SysYParser::ConstDefContext::R_BRACKET(size_t i) {
  return getToken(SysYParser::R_BRACKET, i);
}


size_t SysYParser::ConstDefContext::getRuleIndex() const {
  return SysYParser::RuleConstDef;
}


std::any SysYParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstDefContext* SysYParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 8, SysYParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(SysYParser::IDENT);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::L_BRACKET) {
      setState(74);
      match(SysYParser::L_BRACKET);
      setState(75);
      constExp();
      setState(76);
      match(SysYParser::R_BRACKET);
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
    match(SysYParser::ASSIGN);
    setState(84);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

SysYParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::ConstInitValContext::getRuleIndex() const {
  return SysYParser::RuleConstInitVal;
}

void SysYParser::ConstInitValContext::copyFrom(ConstInitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListConstInitValContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ListConstInitValContext::L_BRACE() {
  return getToken(SysYParser::L_BRACE, 0);
}

tree::TerminalNode* SysYParser::ListConstInitValContext::R_BRACE() {
  return getToken(SysYParser::R_BRACE, 0);
}

std::vector<SysYParser::ConstInitValContext *> SysYParser::ListConstInitValContext::constInitVal() {
  return getRuleContexts<SysYParser::ConstInitValContext>();
}

SysYParser::ConstInitValContext* SysYParser::ListConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<SysYParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::ListConstInitValContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::ListConstInitValContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}

SysYParser::ListConstInitValContext::ListConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ListConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitListConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ScalarConstInitValContext ------------------------------------------------------------------

SysYParser::ConstExpContext* SysYParser::ScalarConstInitValContext::constExp() {
  return getRuleContext<SysYParser::ConstExpContext>(0);
}

SysYParser::ScalarConstInitValContext::ScalarConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ScalarConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitScalarConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
SysYParser::ConstInitValContext* SysYParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 10, SysYParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::PLUS:
      case SysYParser::MINUS:
      case SysYParser::NOT:
      case SysYParser::L_PAREN:
      case SysYParser::INT_CONST:
      case SysYParser::IDENT: {
        _localctx = _tracker.createInstance<SysYParser::ScalarConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(86);
        constExp();
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(87);
        match(SysYParser::L_BRACE);
        setState(96);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 26449284096) != 0)) {
          setState(88);
          constInitVal();
          setState(93);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(89);
            match(SysYParser::COMMA);
            setState(90);
            constInitVal();
            setState(95);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(98);
        match(SysYParser::R_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

SysYParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::VarDeclContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::VarDefContext *> SysYParser::VarDeclContext::varDef() {
  return getRuleContexts<SysYParser::VarDefContext>();
}

SysYParser::VarDefContext* SysYParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<SysYParser::VarDefContext>(i);
}

tree::TerminalNode* SysYParser::VarDeclContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> SysYParser::VarDeclContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::VarDeclContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::VarDeclContext::getRuleIndex() const {
  return SysYParser::RuleVarDecl;
}


std::any SysYParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::VarDeclContext* SysYParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SysYParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    bType();
    setState(102);
    varDef();
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(103);
      match(SysYParser::COMMA);
      setState(104);
      varDef();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(SysYParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

SysYParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::VarDefContext::getRuleIndex() const {
  return SysYParser::RuleVarDef;
}

void SysYParser::VarDefContext::copyFrom(VarDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UninitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::UninitVarDefContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

std::vector<tree::TerminalNode *> SysYParser::UninitVarDefContext::L_BRACKET() {
  return getTokens(SysYParser::L_BRACKET);
}

tree::TerminalNode* SysYParser::UninitVarDefContext::L_BRACKET(size_t i) {
  return getToken(SysYParser::L_BRACKET, i);
}

std::vector<SysYParser::ConstExpContext *> SysYParser::UninitVarDefContext::constExp() {
  return getRuleContexts<SysYParser::ConstExpContext>();
}

SysYParser::ConstExpContext* SysYParser::UninitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysYParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::UninitVarDefContext::R_BRACKET() {
  return getTokens(SysYParser::R_BRACKET);
}

tree::TerminalNode* SysYParser::UninitVarDefContext::R_BRACKET(size_t i) {
  return getToken(SysYParser::R_BRACKET, i);
}

SysYParser::UninitVarDefContext::UninitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }


std::any SysYParser::UninitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUninitVarDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::InitVarDefContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

tree::TerminalNode* SysYParser::InitVarDefContext::ASSIGN() {
  return getToken(SysYParser::ASSIGN, 0);
}

SysYParser::InitValContext* SysYParser::InitVarDefContext::initVal() {
  return getRuleContext<SysYParser::InitValContext>(0);
}

std::vector<tree::TerminalNode *> SysYParser::InitVarDefContext::L_BRACKET() {
  return getTokens(SysYParser::L_BRACKET);
}

tree::TerminalNode* SysYParser::InitVarDefContext::L_BRACKET(size_t i) {
  return getToken(SysYParser::L_BRACKET, i);
}

std::vector<SysYParser::ConstExpContext *> SysYParser::InitVarDefContext::constExp() {
  return getRuleContexts<SysYParser::ConstExpContext>();
}

SysYParser::ConstExpContext* SysYParser::InitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysYParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::InitVarDefContext::R_BRACKET() {
  return getTokens(SysYParser::R_BRACKET);
}

tree::TerminalNode* SysYParser::InitVarDefContext::R_BRACKET(size_t i) {
  return getToken(SysYParser::R_BRACKET, i);
}

SysYParser::InitVarDefContext::InitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }


std::any SysYParser::InitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitInitVarDef(this);
  else
    return visitor->visitChildren(this);
}
SysYParser::VarDefContext* SysYParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 14, SysYParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::UninitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(112);
      match(SysYParser::IDENT);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(113);
        match(SysYParser::L_BRACKET);
        setState(114);
        constExp();
        setState(115);
        match(SysYParser::R_BRACKET);
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::InitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(122);
      match(SysYParser::IDENT);
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(123);
        match(SysYParser::L_BRACKET);
        setState(124);
        constExp();
        setState(125);
        match(SysYParser::R_BRACKET);
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(132);
      match(SysYParser::ASSIGN);
      setState(133);
      initVal();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitValContext ------------------------------------------------------------------

SysYParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::InitValContext::getRuleIndex() const {
  return SysYParser::RuleInitVal;
}

void SysYParser::InitValContext::copyFrom(InitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ScalarInitValContext ------------------------------------------------------------------

SysYParser::ExpContext* SysYParser::ScalarInitValContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

SysYParser::ScalarInitValContext::ScalarInitValContext(InitValContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ScalarInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitScalarInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListInitValContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ListInitValContext::L_BRACE() {
  return getToken(SysYParser::L_BRACE, 0);
}

tree::TerminalNode* SysYParser::ListInitValContext::R_BRACE() {
  return getToken(SysYParser::R_BRACE, 0);
}

std::vector<SysYParser::InitValContext *> SysYParser::ListInitValContext::initVal() {
  return getRuleContexts<SysYParser::InitValContext>();
}

SysYParser::InitValContext* SysYParser::ListInitValContext::initVal(size_t i) {
  return getRuleContext<SysYParser::InitValContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::ListInitValContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::ListInitValContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}

SysYParser::ListInitValContext::ListInitValContext(InitValContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ListInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitListInitVal(this);
  else
    return visitor->visitChildren(this);
}
SysYParser::InitValContext* SysYParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 16, SysYParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::PLUS:
      case SysYParser::MINUS:
      case SysYParser::NOT:
      case SysYParser::L_PAREN:
      case SysYParser::INT_CONST:
      case SysYParser::IDENT: {
        _localctx = _tracker.createInstance<SysYParser::ScalarInitValContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(136);
        exp(0);
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(137);
        match(SysYParser::L_BRACE);
        setState(146);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 26449284096) != 0)) {
          setState(138);
          initVal();
          setState(143);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(139);
            match(SysYParser::COMMA);
            setState(140);
            initVal();
            setState(145);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(148);
        match(SysYParser::R_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

SysYParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::FuncTypeContext* SysYParser::FuncDefContext::funcType() {
  return getRuleContext<SysYParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncDefContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::BlockContext* SysYParser::FuncDefContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

SysYParser::FuncFParamsContext* SysYParser::FuncDefContext::funcFParams() {
  return getRuleContext<SysYParser::FuncFParamsContext>(0);
}


size_t SysYParser::FuncDefContext::getRuleIndex() const {
  return SysYParser::RuleFuncDef;
}


std::any SysYParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncDefContext* SysYParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, SysYParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    funcType();
    setState(152);
    match(SysYParser::IDENT);
    setState(153);
    match(SysYParser::L_PAREN);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::INT) {
      setState(154);
      funcFParams();
    }
    setState(157);
    match(SysYParser::R_PAREN);
    setState(158);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysYParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::FuncTypeContext::VOID() {
  return getToken(SysYParser::VOID, 0);
}

tree::TerminalNode* SysYParser::FuncTypeContext::INT() {
  return getToken(SysYParser::INT, 0);
}


size_t SysYParser::FuncTypeContext::getRuleIndex() const {
  return SysYParser::RuleFuncType;
}


std::any SysYParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncTypeContext* SysYParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, SysYParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _la = _input->LA(1);
    if (!(_la == SysYParser::INT

    || _la == SysYParser::VOID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

SysYParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::FuncFParamContext *> SysYParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<SysYParser::FuncFParamContext>();
}

SysYParser::FuncFParamContext* SysYParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<SysYParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamsContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::FuncFParamsContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::FuncFParamsContext::getRuleIndex() const {
  return SysYParser::RuleFuncFParams;
}


std::any SysYParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncFParamsContext* SysYParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, SysYParser::RuleFuncFParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    funcFParam();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(163);
      match(SysYParser::COMMA);
      setState(164);
      funcFParam();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

SysYParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::FuncFParamContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncFParamContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::L_BRACKET() {
  return getTokens(SysYParser::L_BRACKET);
}

tree::TerminalNode* SysYParser::FuncFParamContext::L_BRACKET(size_t i) {
  return getToken(SysYParser::L_BRACKET, i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::R_BRACKET() {
  return getTokens(SysYParser::R_BRACKET);
}

tree::TerminalNode* SysYParser::FuncFParamContext::R_BRACKET(size_t i) {
  return getToken(SysYParser::R_BRACKET, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::FuncFParamContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::FuncFParamContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}


size_t SysYParser::FuncFParamContext::getRuleIndex() const {
  return SysYParser::RuleFuncFParam;
}


std::any SysYParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncFParamContext* SysYParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SysYParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    bType();
    setState(171);
    match(SysYParser::IDENT);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::L_BRACKET) {
      setState(172);
      match(SysYParser::L_BRACKET);
      setState(173);
      match(SysYParser::R_BRACKET);
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(174);
        match(SysYParser::L_BRACKET);
        setState(175);
        exp(0);
        setState(176);
        match(SysYParser::R_BRACKET);
        setState(182);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SysYParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BlockContext::L_BRACE() {
  return getToken(SysYParser::L_BRACE, 0);
}

tree::TerminalNode* SysYParser::BlockContext::R_BRACE() {
  return getToken(SysYParser::R_BRACE, 0);
}

std::vector<SysYParser::BlockItemContext *> SysYParser::BlockContext::blockItem() {
  return getRuleContexts<SysYParser::BlockItemContext>();
}

SysYParser::BlockItemContext* SysYParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysYParser::BlockItemContext>(i);
}


size_t SysYParser::BlockContext::getRuleIndex() const {
  return SysYParser::RuleBlock;
}


std::any SysYParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockContext* SysYParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, SysYParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(SysYParser::L_BRACE);
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 26482839510) != 0)) {
      setState(186);
      blockItem();
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    match(SysYParser::R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysYParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::BlockItemContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::StmtContext* SysYParser::BlockItemContext::stmt() {
  return getRuleContext<SysYParser::StmtContext>(0);
}


size_t SysYParser::BlockItemContext::getRuleIndex() const {
  return SysYParser::RuleBlockItem;
}


std::any SysYParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockItemContext* SysYParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 28, SysYParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST:
      case SysYParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(194);
        decl();
        break;
      }

      case SysYParser::IF:
      case SysYParser::WHILE:
      case SysYParser::BREAK:
      case SysYParser::CONTINUE:
      case SysYParser::RETURN:
      case SysYParser::PLUS:
      case SysYParser::MINUS:
      case SysYParser::NOT:
      case SysYParser::SEMICOLON:
      case SysYParser::L_PAREN:
      case SysYParser::L_BRACE:
      case SysYParser::INT_CONST:
      case SysYParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(195);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SysYParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::StmtContext::getRuleIndex() const {
  return SysYParser::RuleStmt;
}

void SysYParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ExprStmtContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

SysYParser::ExpContext* SysYParser::ExprStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

SysYParser::ExprStmtContext::ExprStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::WhileStmtContext::WHILE() {
  return getToken(SysYParser::WHILE, 0);
}

tree::TerminalNode* SysYParser::WhileStmtContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

SysYParser::CondContext* SysYParser::WhileStmtContext::cond() {
  return getRuleContext<SysYParser::CondContext>(0);
}

tree::TerminalNode* SysYParser::WhileStmtContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::StmtContext* SysYParser::WhileStmtContext::stmt() {
  return getRuleContext<SysYParser::StmtContext>(0);
}

SysYParser::WhileStmtContext::WhileStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::IfStmtContext::IF() {
  return getToken(SysYParser::IF, 0);
}

tree::TerminalNode* SysYParser::IfStmtContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

SysYParser::CondContext* SysYParser::IfStmtContext::cond() {
  return getRuleContext<SysYParser::CondContext>(0);
}

tree::TerminalNode* SysYParser::IfStmtContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

std::vector<SysYParser::StmtContext *> SysYParser::IfStmtContext::stmt() {
  return getRuleContexts<SysYParser::StmtContext>();
}

SysYParser::StmtContext* SysYParser::IfStmtContext::stmt(size_t i) {
  return getRuleContext<SysYParser::StmtContext>(i);
}

tree::TerminalNode* SysYParser::IfStmtContext::ELSE() {
  return getToken(SysYParser::ELSE, 0);
}

SysYParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

SysYParser::BlockContext* SysYParser::BlockStmtContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

SysYParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

SysYParser::LValContext* SysYParser::AssignStmtContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

tree::TerminalNode* SysYParser::AssignStmtContext::ASSIGN() {
  return getToken(SysYParser::ASSIGN, 0);
}

SysYParser::ExpContext* SysYParser::AssignStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::AssignStmtContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

SysYParser::AssignStmtContext::AssignStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::BreakStmtContext::BREAK() {
  return getToken(SysYParser::BREAK, 0);
}

tree::TerminalNode* SysYParser::BreakStmtContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

SysYParser::BreakStmtContext::BreakStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ReturnStmtContext::RETURN() {
  return getToken(SysYParser::RETURN, 0);
}

tree::TerminalNode* SysYParser::ReturnStmtContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

SysYParser::ExpContext* SysYParser::ReturnStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

SysYParser::ReturnStmtContext::ReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ContinueStmtContext::CONTINUE() {
  return getToken(SysYParser::CONTINUE, 0);
}

tree::TerminalNode* SysYParser::ContinueStmtContext::SEMICOLON() {
  return getToken(SysYParser::SEMICOLON, 0);
}

SysYParser::ContinueStmtContext::ContinueStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
SysYParser::StmtContext* SysYParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SysYParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(198);
      lVal();
      setState(199);
      match(SysYParser::ASSIGN);
      setState(200);
      exp(0);
      setState(201);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(204);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(203);
        exp(0);
      }
      setState(206);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SysYParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(207);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SysYParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(208);
      match(SysYParser::IF);
      setState(209);
      match(SysYParser::L_PAREN);
      setState(210);
      cond(0);
      setState(211);
      match(SysYParser::R_PAREN);
      setState(212);
      stmt();
      setState(215);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(213);
        match(SysYParser::ELSE);
        setState(214);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<SysYParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(217);
      match(SysYParser::WHILE);
      setState(218);
      match(SysYParser::L_PAREN);
      setState(219);
      cond(0);
      setState(220);
      match(SysYParser::R_PAREN);
      setState(221);
      stmt();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SysYParser::BreakStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(223);
      match(SysYParser::BREAK);
      setState(224);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SysYParser::ContinueStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(225);
      match(SysYParser::CONTINUE);
      setState(226);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<SysYParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(227);
      match(SysYParser::RETURN);
      setState(229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(228);
        exp(0);
      }
      setState(231);
      match(SysYParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

SysYParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::ExpContext::getRuleIndex() const {
  return SysYParser::RuleExp;
}

void SysYParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryExprContext ------------------------------------------------------------------

SysYParser::UnaryOpContext* SysYParser::UnaryExprContext::unaryOp() {
  return getRuleContext<SysYParser::UnaryOpContext>(0);
}

SysYParser::ExpContext* SysYParser::UnaryExprContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

SysYParser::UnaryExprContext::UnaryExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<SysYParser::ExpContext *> SysYParser::AddSubExprContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::AddSubExprContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

tree::TerminalNode* SysYParser::AddSubExprContext::PLUS() {
  return getToken(SysYParser::PLUS, 0);
}

tree::TerminalNode* SysYParser::AddSubExprContext::MINUS() {
  return getToken(SysYParser::MINUS, 0);
}

SysYParser::AddSubExprContext::AddSubExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExprContext ------------------------------------------------------------------

SysYParser::NumberContext* SysYParser::NumberExprContext::number() {
  return getRuleContext<SysYParser::NumberContext>(0);
}

SysYParser::NumberExprContext::NumberExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::NumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LValExprContext ------------------------------------------------------------------

SysYParser::LValContext* SysYParser::LValExprContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

SysYParser::LValExprContext::LValExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::LValExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitLValExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivModExprContext ------------------------------------------------------------------

std::vector<SysYParser::ExpContext *> SysYParser::MulDivModExprContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::MulDivModExprContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

tree::TerminalNode* SysYParser::MulDivModExprContext::MUL() {
  return getToken(SysYParser::MUL, 0);
}

tree::TerminalNode* SysYParser::MulDivModExprContext::DIV() {
  return getToken(SysYParser::DIV, 0);
}

tree::TerminalNode* SysYParser::MulDivModExprContext::MOD() {
  return getToken(SysYParser::MOD, 0);
}

SysYParser::MulDivModExprContext::MulDivModExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::MulDivModExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitMulDivModExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExprContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::CallExprContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

tree::TerminalNode* SysYParser::CallExprContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

tree::TerminalNode* SysYParser::CallExprContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::FuncRParamsContext* SysYParser::CallExprContext::funcRParams() {
  return getRuleContext<SysYParser::FuncRParamsContext>(0);
}

SysYParser::CallExprContext::CallExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::CallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::ParenExprContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

SysYParser::ExpContext* SysYParser::ParenExprContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::ParenExprContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::ParenExprContext::ParenExprContext(ExpContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ExpContext* SysYParser::exp() {
   return exp(0);
}

SysYParser::ExpContext* SysYParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  SysYParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, SysYParser::RuleExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(235);
      match(SysYParser::L_PAREN);
      setState(236);
      exp(0);
      setState(237);
      match(SysYParser::R_PAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LValExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(239);
      lVal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(240);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(241);
      match(SysYParser::IDENT);
      setState(242);
      match(SysYParser::L_PAREN);
      setState(244);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(243);
        funcRParams();
      }
      setState(246);
      match(SysYParser::R_PAREN);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(247);
      unaryOp();
      setState(248);
      exp(3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(258);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivModExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(252);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(253);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 28672) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(254);
          exp(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(255);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(256);
          _la = _input->LA(1);
          if (!(_la == SysYParser::PLUS

          || _la == SysYParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(257);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

SysYParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::CondContext::getRuleIndex() const {
  return SysYParser::RuleCond;
}

void SysYParser::CondContext::copyFrom(CondContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrCondContext ------------------------------------------------------------------

std::vector<SysYParser::CondContext *> SysYParser::OrCondContext::cond() {
  return getRuleContexts<SysYParser::CondContext>();
}

SysYParser::CondContext* SysYParser::OrCondContext::cond(size_t i) {
  return getRuleContext<SysYParser::CondContext>(i);
}

tree::TerminalNode* SysYParser::OrCondContext::OR() {
  return getToken(SysYParser::OR, 0);
}

SysYParser::OrCondContext::OrCondContext(CondContext *ctx) { copyFrom(ctx); }


std::any SysYParser::OrCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitOrCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpCondContext ------------------------------------------------------------------

SysYParser::ExpContext* SysYParser::ExpCondContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

SysYParser::ExpCondContext::ExpCondContext(CondContext *ctx) { copyFrom(ctx); }


std::any SysYParser::ExpCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitExpCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelCondContext ------------------------------------------------------------------

std::vector<SysYParser::CondContext *> SysYParser::RelCondContext::cond() {
  return getRuleContexts<SysYParser::CondContext>();
}

SysYParser::CondContext* SysYParser::RelCondContext::cond(size_t i) {
  return getRuleContext<SysYParser::CondContext>(i);
}

tree::TerminalNode* SysYParser::RelCondContext::LT() {
  return getToken(SysYParser::LT, 0);
}

tree::TerminalNode* SysYParser::RelCondContext::GT() {
  return getToken(SysYParser::GT, 0);
}

tree::TerminalNode* SysYParser::RelCondContext::LE() {
  return getToken(SysYParser::LE, 0);
}

tree::TerminalNode* SysYParser::RelCondContext::GE() {
  return getToken(SysYParser::GE, 0);
}

SysYParser::RelCondContext::RelCondContext(CondContext *ctx) { copyFrom(ctx); }


std::any SysYParser::RelCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitRelCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndCondContext ------------------------------------------------------------------

std::vector<SysYParser::CondContext *> SysYParser::AndCondContext::cond() {
  return getRuleContexts<SysYParser::CondContext>();
}

SysYParser::CondContext* SysYParser::AndCondContext::cond(size_t i) {
  return getRuleContext<SysYParser::CondContext>(i);
}

tree::TerminalNode* SysYParser::AndCondContext::AND() {
  return getToken(SysYParser::AND, 0);
}

SysYParser::AndCondContext::AndCondContext(CondContext *ctx) { copyFrom(ctx); }


std::any SysYParser::AndCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitAndCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqCondContext ------------------------------------------------------------------

std::vector<SysYParser::CondContext *> SysYParser::EqCondContext::cond() {
  return getRuleContexts<SysYParser::CondContext>();
}

SysYParser::CondContext* SysYParser::EqCondContext::cond(size_t i) {
  return getRuleContext<SysYParser::CondContext>(i);
}

tree::TerminalNode* SysYParser::EqCondContext::EQ() {
  return getToken(SysYParser::EQ, 0);
}

tree::TerminalNode* SysYParser::EqCondContext::NEQ() {
  return getToken(SysYParser::NEQ, 0);
}

SysYParser::EqCondContext::EqCondContext(CondContext *ctx) { copyFrom(ctx); }


std::any SysYParser::EqCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitEqCond(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CondContext* SysYParser::cond() {
   return cond(0);
}

SysYParser::CondContext* SysYParser::cond(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, parentState);
  SysYParser::CondContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, SysYParser::RuleCond, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpCondContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(264);
    exp(0);
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(278);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<RelCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(266);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(267);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1966080) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(268);
          cond(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(269);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(270);
          _la = _input->LA(1);
          if (!(_la == SysYParser::EQ

          || _la == SysYParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(271);
          cond(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AndCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(272);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(273);
          match(SysYParser::AND);
          setState(274);
          cond(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OrCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(275);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(276);
          match(SysYParser::OR);
          setState(277);
          cond(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysYParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::LValContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::L_BRACKET() {
  return getTokens(SysYParser::L_BRACKET);
}

tree::TerminalNode* SysYParser::LValContext::L_BRACKET(size_t i) {
  return getToken(SysYParser::L_BRACKET, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::LValContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::LValContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::R_BRACKET() {
  return getTokens(SysYParser::R_BRACKET);
}

tree::TerminalNode* SysYParser::LValContext::R_BRACKET(size_t i) {
  return getToken(SysYParser::R_BRACKET, i);
}


size_t SysYParser::LValContext::getRuleIndex() const {
  return SysYParser::RuleLVal;
}


std::any SysYParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::LValContext* SysYParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 36, SysYParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(SysYParser::IDENT);
    setState(290);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        match(SysYParser::L_BRACKET);
        setState(285);
        exp(0);
        setState(286);
        match(SysYParser::R_BRACKET); 
      }
      setState(292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SysYParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::NumberContext::INT_CONST() {
  return getToken(SysYParser::INT_CONST, 0);
}


size_t SysYParser::NumberContext::getRuleIndex() const {
  return SysYParser::RuleNumber;
}


std::any SysYParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::NumberContext* SysYParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 38, SysYParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(SysYParser::INT_CONST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOpContext ------------------------------------------------------------------

SysYParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::UnaryOpContext::PLUS() {
  return getToken(SysYParser::PLUS, 0);
}

tree::TerminalNode* SysYParser::UnaryOpContext::MINUS() {
  return getToken(SysYParser::MINUS, 0);
}

tree::TerminalNode* SysYParser::UnaryOpContext::NOT() {
  return getToken(SysYParser::NOT, 0);
}


size_t SysYParser::UnaryOpContext::getRuleIndex() const {
  return SysYParser::RuleUnaryOp;
}


std::any SysYParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryOpContext* SysYParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 40, SysYParser::RuleUnaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8391680) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

SysYParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::ExpContext *> SysYParser::FuncRParamsContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncRParamsContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::FuncRParamsContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::FuncRParamsContext::getRuleIndex() const {
  return SysYParser::RuleFuncRParams;
}


std::any SysYParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncRParamsContext* SysYParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 42, SysYParser::RuleFuncRParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    exp(0);
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(298);
      match(SysYParser::COMMA);
      setState(299);
      exp(0);
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

SysYParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ExpContext* SysYParser::ConstExpContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}


size_t SysYParser::ConstExpContext::getRuleIndex() const {
  return SysYParser::RuleConstExp;
}


std::any SysYParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstExpContext* SysYParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 44, SysYParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SysYParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);
    case 17: return condSempred(antlrcpp::downCast<CondContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SysYParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::condSempred(CondContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void SysYParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sysyparserParserInitialize();
#else
  ::antlr4::internal::call_once(sysyparserParserOnceFlag, sysyparserParserInitialize);
#endif
}
