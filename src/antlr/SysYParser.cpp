
// Generated from /mnt/f/编译原理/thss-2025-compiler-final/SysYParser.g4 by ANTLR 4.13.1


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
      "funcFParam", "block", "blockItem", "stmt", "switchCase", "exp", "cond", 
      "lVal", "number", "unaryOp", "funcRParams", "constExp"
    },
    std::vector<std::string>{
      "", "'const'", "'int'", "'void'", "'if'", "'else'", "'while'", "'break'", 
      "'continue'", "'return'", "'switch'", "'case'", "'default'", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'&&'", "'||'", "'!'", "'='", "';'", "','", "'('", "')'", 
      "'{'", "'}'", "'['", "']'", "':'"
    },
    std::vector<std::string>{
      "", "CONST", "INT", "VOID", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", 
      "RETURN", "SWITCH", "CASE", "DEFAULT", "PLUS", "MINUS", "MUL", "DIV", 
      "MOD", "EQ", "NEQ", "LT", "GT", "LE", "GE", "AND", "OR", "NOT", "ASSIGN", 
      "SEMICOLON", "COMMA", "L_PAREN", "R_PAREN", "L_BRACE", "R_BRACE", 
      "L_BRACKET", "R_BRACKET", "COLON", "INT_CONST", "IDENT", "WS", "LINE_COMMENT", 
      "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,41,342,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,5,0,51,8,0,10,0,12,0,54,9,0,1,0,1,0,1,
  	1,1,1,3,1,60,8,1,1,2,1,2,1,2,1,2,1,2,5,2,67,8,2,10,2,12,2,70,9,2,1,2,
  	1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,81,8,4,10,4,12,4,84,9,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,5,5,94,8,5,10,5,12,5,97,9,5,3,5,99,8,5,1,5,3,5,
  	102,8,5,1,6,1,6,1,6,1,6,5,6,108,8,6,10,6,12,6,111,9,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,5,7,120,8,7,10,7,12,7,123,9,7,1,7,1,7,1,7,1,7,1,7,5,7,130,
  	8,7,10,7,12,7,133,9,7,1,7,1,7,3,7,137,8,7,1,8,1,8,1,8,1,8,1,8,5,8,144,
  	8,8,10,8,12,8,147,9,8,3,8,149,8,8,1,8,3,8,152,8,8,1,9,1,9,1,9,1,9,3,9,
  	158,8,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,168,8,11,10,11,12,11,
  	171,9,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,181,8,12,10,12,
  	12,12,184,9,12,3,12,186,8,12,1,13,1,13,5,13,190,8,13,10,13,12,13,193,
  	9,13,1,13,1,13,1,14,1,14,3,14,199,8,14,1,15,1,15,1,15,1,15,1,15,1,15,
  	3,15,207,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,218,8,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,232,
  	8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,241,8,15,10,15,12,15,244,
  	9,15,1,15,1,15,3,15,248,8,15,1,16,1,16,1,16,1,16,5,16,254,8,16,10,16,
  	12,16,257,9,16,1,16,1,16,1,16,5,16,262,8,16,10,16,12,16,265,9,16,3,16,
  	267,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,279,8,
  	17,1,17,1,17,1,17,1,17,3,17,285,8,17,1,17,1,17,1,17,1,17,1,17,1,17,5,
  	17,293,8,17,10,17,12,17,296,9,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,313,8,18,10,18,12,18,316,9,
  	18,1,19,1,19,1,19,1,19,1,19,5,19,323,8,19,10,19,12,19,326,9,19,1,20,1,
  	20,1,21,1,21,1,22,1,22,1,22,5,22,335,8,22,10,22,12,22,338,9,22,1,23,1,
  	23,1,23,0,2,34,36,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,0,6,1,0,2,3,1,0,15,17,1,0,13,14,1,0,20,23,1,0,18,19,
  	2,0,13,14,26,26,366,0,52,1,0,0,0,2,59,1,0,0,0,4,61,1,0,0,0,6,73,1,0,0,
  	0,8,75,1,0,0,0,10,101,1,0,0,0,12,103,1,0,0,0,14,136,1,0,0,0,16,151,1,
  	0,0,0,18,153,1,0,0,0,20,162,1,0,0,0,22,164,1,0,0,0,24,172,1,0,0,0,26,
  	187,1,0,0,0,28,198,1,0,0,0,30,247,1,0,0,0,32,266,1,0,0,0,34,284,1,0,0,
  	0,36,297,1,0,0,0,38,317,1,0,0,0,40,327,1,0,0,0,42,329,1,0,0,0,44,331,
  	1,0,0,0,46,339,1,0,0,0,48,51,3,2,1,0,49,51,3,18,9,0,50,48,1,0,0,0,50,
  	49,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,1,0,0,0,53,55,1,0,0,0,54,
  	52,1,0,0,0,55,56,5,0,0,1,56,1,1,0,0,0,57,60,3,4,2,0,58,60,3,12,6,0,59,
  	57,1,0,0,0,59,58,1,0,0,0,60,3,1,0,0,0,61,62,5,1,0,0,62,63,3,6,3,0,63,
  	68,3,8,4,0,64,65,5,29,0,0,65,67,3,8,4,0,66,64,1,0,0,0,67,70,1,0,0,0,68,
  	66,1,0,0,0,68,69,1,0,0,0,69,71,1,0,0,0,70,68,1,0,0,0,71,72,5,28,0,0,72,
  	5,1,0,0,0,73,74,5,2,0,0,74,7,1,0,0,0,75,82,5,38,0,0,76,77,5,34,0,0,77,
  	78,3,46,23,0,78,79,5,35,0,0,79,81,1,0,0,0,80,76,1,0,0,0,81,84,1,0,0,0,
  	82,80,1,0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,82,1,0,0,0,85,86,5,27,0,
  	0,86,87,3,10,5,0,87,9,1,0,0,0,88,102,3,46,23,0,89,98,5,32,0,0,90,95,3,
  	10,5,0,91,92,5,29,0,0,92,94,3,10,5,0,93,91,1,0,0,0,94,97,1,0,0,0,95,93,
  	1,0,0,0,95,96,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,98,90,1,0,0,0,98,99,
  	1,0,0,0,99,100,1,0,0,0,100,102,5,33,0,0,101,88,1,0,0,0,101,89,1,0,0,0,
  	102,11,1,0,0,0,103,104,3,6,3,0,104,109,3,14,7,0,105,106,5,29,0,0,106,
  	108,3,14,7,0,107,105,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,
  	1,0,0,0,110,112,1,0,0,0,111,109,1,0,0,0,112,113,5,28,0,0,113,13,1,0,0,
  	0,114,121,5,38,0,0,115,116,5,34,0,0,116,117,3,46,23,0,117,118,5,35,0,
  	0,118,120,1,0,0,0,119,115,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,
  	122,1,0,0,0,122,137,1,0,0,0,123,121,1,0,0,0,124,131,5,38,0,0,125,126,
  	5,34,0,0,126,127,3,46,23,0,127,128,5,35,0,0,128,130,1,0,0,0,129,125,1,
  	0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,134,1,0,0,0,
  	133,131,1,0,0,0,134,135,5,27,0,0,135,137,3,16,8,0,136,114,1,0,0,0,136,
  	124,1,0,0,0,137,15,1,0,0,0,138,152,3,34,17,0,139,148,5,32,0,0,140,145,
  	3,16,8,0,141,142,5,29,0,0,142,144,3,16,8,0,143,141,1,0,0,0,144,147,1,
  	0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,
  	148,140,1,0,0,0,148,149,1,0,0,0,149,150,1,0,0,0,150,152,5,33,0,0,151,
  	138,1,0,0,0,151,139,1,0,0,0,152,17,1,0,0,0,153,154,3,20,10,0,154,155,
  	5,38,0,0,155,157,5,30,0,0,156,158,3,22,11,0,157,156,1,0,0,0,157,158,1,
  	0,0,0,158,159,1,0,0,0,159,160,5,31,0,0,160,161,3,26,13,0,161,19,1,0,0,
  	0,162,163,7,0,0,0,163,21,1,0,0,0,164,169,3,24,12,0,165,166,5,29,0,0,166,
  	168,3,24,12,0,167,165,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,
  	1,0,0,0,170,23,1,0,0,0,171,169,1,0,0,0,172,173,3,6,3,0,173,185,5,38,0,
  	0,174,175,5,34,0,0,175,182,5,35,0,0,176,177,5,34,0,0,177,178,3,34,17,
  	0,178,179,5,35,0,0,179,181,1,0,0,0,180,176,1,0,0,0,181,184,1,0,0,0,182,
  	180,1,0,0,0,182,183,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,0,185,174,1,
  	0,0,0,185,186,1,0,0,0,186,25,1,0,0,0,187,191,5,32,0,0,188,190,3,28,14,
  	0,189,188,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,
  	194,1,0,0,0,193,191,1,0,0,0,194,195,5,33,0,0,195,27,1,0,0,0,196,199,3,
  	2,1,0,197,199,3,30,15,0,198,196,1,0,0,0,198,197,1,0,0,0,199,29,1,0,0,
  	0,200,201,3,38,19,0,201,202,5,27,0,0,202,203,3,34,17,0,203,204,5,28,0,
  	0,204,248,1,0,0,0,205,207,3,34,17,0,206,205,1,0,0,0,206,207,1,0,0,0,207,
  	208,1,0,0,0,208,248,5,28,0,0,209,248,3,26,13,0,210,211,5,4,0,0,211,212,
  	5,30,0,0,212,213,3,36,18,0,213,214,5,31,0,0,214,217,3,30,15,0,215,216,
  	5,5,0,0,216,218,3,30,15,0,217,215,1,0,0,0,217,218,1,0,0,0,218,248,1,0,
  	0,0,219,220,5,6,0,0,220,221,5,30,0,0,221,222,3,36,18,0,222,223,5,31,0,
  	0,223,224,3,30,15,0,224,248,1,0,0,0,225,226,5,7,0,0,226,248,5,28,0,0,
  	227,228,5,8,0,0,228,248,5,28,0,0,229,231,5,9,0,0,230,232,3,34,17,0,231,
  	230,1,0,0,0,231,232,1,0,0,0,232,233,1,0,0,0,233,248,5,28,0,0,234,235,
  	5,10,0,0,235,236,5,30,0,0,236,237,3,34,17,0,237,238,5,31,0,0,238,242,
  	5,32,0,0,239,241,3,32,16,0,240,239,1,0,0,0,241,244,1,0,0,0,242,240,1,
  	0,0,0,242,243,1,0,0,0,243,245,1,0,0,0,244,242,1,0,0,0,245,246,5,33,0,
  	0,246,248,1,0,0,0,247,200,1,0,0,0,247,206,1,0,0,0,247,209,1,0,0,0,247,
  	210,1,0,0,0,247,219,1,0,0,0,247,225,1,0,0,0,247,227,1,0,0,0,247,229,1,
  	0,0,0,247,234,1,0,0,0,248,31,1,0,0,0,249,250,5,11,0,0,250,251,5,37,0,
  	0,251,255,5,36,0,0,252,254,3,28,14,0,253,252,1,0,0,0,254,257,1,0,0,0,
  	255,253,1,0,0,0,255,256,1,0,0,0,256,267,1,0,0,0,257,255,1,0,0,0,258,259,
  	5,12,0,0,259,263,5,36,0,0,260,262,3,28,14,0,261,260,1,0,0,0,262,265,1,
  	0,0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,
  	266,249,1,0,0,0,266,258,1,0,0,0,267,33,1,0,0,0,268,269,6,17,-1,0,269,
  	270,5,30,0,0,270,271,3,34,17,0,271,272,5,31,0,0,272,285,1,0,0,0,273,285,
  	3,38,19,0,274,285,3,40,20,0,275,276,5,38,0,0,276,278,5,30,0,0,277,279,
  	3,44,22,0,278,277,1,0,0,0,278,279,1,0,0,0,279,280,1,0,0,0,280,285,5,31,
  	0,0,281,282,3,42,21,0,282,283,3,34,17,3,283,285,1,0,0,0,284,268,1,0,0,
  	0,284,273,1,0,0,0,284,274,1,0,0,0,284,275,1,0,0,0,284,281,1,0,0,0,285,
  	294,1,0,0,0,286,287,10,2,0,0,287,288,7,1,0,0,288,293,3,34,17,3,289,290,
  	10,1,0,0,290,291,7,2,0,0,291,293,3,34,17,2,292,286,1,0,0,0,292,289,1,
  	0,0,0,293,296,1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,35,1,0,0,0,
  	296,294,1,0,0,0,297,298,6,18,-1,0,298,299,3,34,17,0,299,314,1,0,0,0,300,
  	301,10,4,0,0,301,302,7,3,0,0,302,313,3,36,18,5,303,304,10,3,0,0,304,305,
  	7,4,0,0,305,313,3,36,18,4,306,307,10,2,0,0,307,308,5,24,0,0,308,313,3,
  	36,18,3,309,310,10,1,0,0,310,311,5,25,0,0,311,313,3,36,18,2,312,300,1,
  	0,0,0,312,303,1,0,0,0,312,306,1,0,0,0,312,309,1,0,0,0,313,316,1,0,0,0,
  	314,312,1,0,0,0,314,315,1,0,0,0,315,37,1,0,0,0,316,314,1,0,0,0,317,324,
  	5,38,0,0,318,319,5,34,0,0,319,320,3,34,17,0,320,321,5,35,0,0,321,323,
  	1,0,0,0,322,318,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,
  	0,325,39,1,0,0,0,326,324,1,0,0,0,327,328,5,37,0,0,328,41,1,0,0,0,329,
  	330,7,5,0,0,330,43,1,0,0,0,331,336,3,34,17,0,332,333,5,29,0,0,333,335,
  	3,34,17,0,334,332,1,0,0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,337,1,0,
  	0,0,337,45,1,0,0,0,338,336,1,0,0,0,339,340,3,34,17,0,340,47,1,0,0,0,37,
  	50,52,59,68,82,95,98,101,109,121,131,136,145,148,151,157,169,182,185,
  	191,198,206,217,231,242,247,255,263,266,278,284,292,294,312,314,324,336
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
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14) != 0)) {
      setState(50);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(48);
        decl();
        break;
      }

      case 2: {
        setState(49);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(54);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
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
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        constDecl();
        break;
      }

      case SysYParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(58);
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
    setState(61);
    match(SysYParser::CONST);
    setState(62);
    bType();
    setState(63);
    constDef();
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(64);
      match(SysYParser::COMMA);
      setState(65);
      constDef();
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
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
    setState(73);
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
    setState(75);
    match(SysYParser::IDENT);
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::L_BRACKET) {
      setState(76);
      match(SysYParser::L_BRACKET);
      setState(77);
      constExp();
      setState(78);
      match(SysYParser::R_BRACKET);
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    match(SysYParser::ASSIGN);
    setState(86);
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
    setState(101);
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
        setState(88);
        constExp();
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(89);
        match(SysYParser::L_BRACE);
        setState(98);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 417752702976) != 0)) {
          setState(90);
          constInitVal();
          setState(95);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(91);
            match(SysYParser::COMMA);
            setState(92);
            constInitVal();
            setState(97);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(100);
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
    setState(103);
    bType();
    setState(104);
    varDef();
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(105);
      match(SysYParser::COMMA);
      setState(106);
      varDef();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
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
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::UninitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(114);
      match(SysYParser::IDENT);
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(115);
        match(SysYParser::L_BRACKET);
        setState(116);
        constExp();
        setState(117);
        match(SysYParser::R_BRACKET);
        setState(123);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::InitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(124);
      match(SysYParser::IDENT);
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(125);
        match(SysYParser::L_BRACKET);
        setState(126);
        constExp();
        setState(127);
        match(SysYParser::R_BRACKET);
        setState(133);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(134);
      match(SysYParser::ASSIGN);
      setState(135);
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
    setState(151);
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
        setState(138);
        exp(0);
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(SysYParser::L_BRACE);
        setState(148);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 417752702976) != 0)) {
          setState(140);
          initVal();
          setState(145);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(141);
            match(SysYParser::COMMA);
            setState(142);
            initVal();
            setState(147);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(150);
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
    setState(153);
    funcType();
    setState(154);
    match(SysYParser::IDENT);
    setState(155);
    match(SysYParser::L_PAREN);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::INT) {
      setState(156);
      funcFParams();
    }
    setState(159);
    match(SysYParser::R_PAREN);
    setState(160);
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
    setState(162);
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
    setState(164);
    funcFParam();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(165);
      match(SysYParser::COMMA);
      setState(166);
      funcFParam();
      setState(171);
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
    setState(172);
    bType();
    setState(173);
    match(SysYParser::IDENT);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::L_BRACKET) {
      setState(174);
      match(SysYParser::L_BRACKET);
      setState(175);
      match(SysYParser::R_BRACKET);
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(176);
        match(SysYParser::L_BRACKET);
        setState(177);
        exp(0);
        setState(178);
        match(SysYParser::R_BRACKET);
        setState(184);
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
    setState(187);
    match(SysYParser::L_BRACE);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 418021140438) != 0)) {
      setState(188);
      blockItem();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
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
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST:
      case SysYParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(196);
        decl();
        break;
      }

      case SysYParser::IF:
      case SysYParser::WHILE:
      case SysYParser::BREAK:
      case SysYParser::CONTINUE:
      case SysYParser::RETURN:
      case SysYParser::SWITCH:
      case SysYParser::PLUS:
      case SysYParser::MINUS:
      case SysYParser::NOT:
      case SysYParser::SEMICOLON:
      case SysYParser::L_PAREN:
      case SysYParser::L_BRACE:
      case SysYParser::INT_CONST:
      case SysYParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(197);
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

//----------------- SwitchStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::SwitchStmtContext::SWITCH() {
  return getToken(SysYParser::SWITCH, 0);
}

tree::TerminalNode* SysYParser::SwitchStmtContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

SysYParser::ExpContext* SysYParser::SwitchStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::SwitchStmtContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

tree::TerminalNode* SysYParser::SwitchStmtContext::L_BRACE() {
  return getToken(SysYParser::L_BRACE, 0);
}

tree::TerminalNode* SysYParser::SwitchStmtContext::R_BRACE() {
  return getToken(SysYParser::R_BRACE, 0);
}

std::vector<SysYParser::SwitchCaseContext *> SysYParser::SwitchStmtContext::switchCase() {
  return getRuleContexts<SysYParser::SwitchCaseContext>();
}

SysYParser::SwitchCaseContext* SysYParser::SwitchStmtContext::switchCase(size_t i) {
  return getRuleContext<SysYParser::SwitchCaseContext>(i);
}

SysYParser::SwitchStmtContext::SwitchStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any SysYParser::SwitchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStmt(this);
  else
    return visitor->visitChildren(this);
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
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(200);
      lVal();
      setState(201);
      match(SysYParser::ASSIGN);
      setState(202);
      exp(0);
      setState(203);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(206);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 413457735680) != 0)) {
        setState(205);
        exp(0);
      }
      setState(208);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SysYParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(209);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SysYParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(210);
      match(SysYParser::IF);
      setState(211);
      match(SysYParser::L_PAREN);
      setState(212);
      cond(0);
      setState(213);
      match(SysYParser::R_PAREN);
      setState(214);
      stmt();
      setState(217);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(215);
        match(SysYParser::ELSE);
        setState(216);
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
      setState(219);
      match(SysYParser::WHILE);
      setState(220);
      match(SysYParser::L_PAREN);
      setState(221);
      cond(0);
      setState(222);
      match(SysYParser::R_PAREN);
      setState(223);
      stmt();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SysYParser::BreakStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(225);
      match(SysYParser::BREAK);
      setState(226);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SysYParser::ContinueStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(227);
      match(SysYParser::CONTINUE);
      setState(228);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<SysYParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(229);
      match(SysYParser::RETURN);
      setState(231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 413457735680) != 0)) {
        setState(230);
        exp(0);
      }
      setState(233);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<SysYParser::SwitchStmtContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(234);
      match(SysYParser::SWITCH);
      setState(235);
      match(SysYParser::L_PAREN);
      setState(236);
      exp(0);
      setState(237);
      match(SysYParser::R_PAREN);
      setState(238);
      match(SysYParser::L_BRACE);
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::CASE

      || _la == SysYParser::DEFAULT) {
        setState(239);
        switchCase();
        setState(244);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(245);
      match(SysYParser::R_BRACE);
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

//----------------- SwitchCaseContext ------------------------------------------------------------------

SysYParser::SwitchCaseContext::SwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysYParser::SwitchCaseContext::getRuleIndex() const {
  return SysYParser::RuleSwitchCase;
}

void SysYParser::SwitchCaseContext::copyFrom(SwitchCaseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CaseStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::CaseStmtContext::CASE() {
  return getToken(SysYParser::CASE, 0);
}

tree::TerminalNode* SysYParser::CaseStmtContext::INT_CONST() {
  return getToken(SysYParser::INT_CONST, 0);
}

tree::TerminalNode* SysYParser::CaseStmtContext::COLON() {
  return getToken(SysYParser::COLON, 0);
}

std::vector<SysYParser::BlockItemContext *> SysYParser::CaseStmtContext::blockItem() {
  return getRuleContexts<SysYParser::BlockItemContext>();
}

SysYParser::BlockItemContext* SysYParser::CaseStmtContext::blockItem(size_t i) {
  return getRuleContext<SysYParser::BlockItemContext>(i);
}

SysYParser::CaseStmtContext::CaseStmtContext(SwitchCaseContext *ctx) { copyFrom(ctx); }


std::any SysYParser::CaseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCaseStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysYParser::DefaultStmtContext::DEFAULT() {
  return getToken(SysYParser::DEFAULT, 0);
}

tree::TerminalNode* SysYParser::DefaultStmtContext::COLON() {
  return getToken(SysYParser::COLON, 0);
}

std::vector<SysYParser::BlockItemContext *> SysYParser::DefaultStmtContext::blockItem() {
  return getRuleContexts<SysYParser::BlockItemContext>();
}

SysYParser::BlockItemContext* SysYParser::DefaultStmtContext::blockItem(size_t i) {
  return getRuleContext<SysYParser::BlockItemContext>(i);
}

SysYParser::DefaultStmtContext::DefaultStmtContext(SwitchCaseContext *ctx) { copyFrom(ctx); }


std::any SysYParser::DefaultStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitDefaultStmt(this);
  else
    return visitor->visitChildren(this);
}
SysYParser::SwitchCaseContext* SysYParser::switchCase() {
  SwitchCaseContext *_localctx = _tracker.createInstance<SwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 32, SysYParser::RuleSwitchCase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CASE: {
        _localctx = _tracker.createInstance<SysYParser::CaseStmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(249);
        match(SysYParser::CASE);
        setState(250);
        match(SysYParser::INT_CONST);
        setState(251);
        match(SysYParser::COLON);
        setState(255);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 418021140438) != 0)) {
          setState(252);
          blockItem();
          setState(257);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case SysYParser::DEFAULT: {
        _localctx = _tracker.createInstance<SysYParser::DefaultStmtContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(258);
        match(SysYParser::DEFAULT);
        setState(259);
        match(SysYParser::COLON);
        setState(263);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 418021140438) != 0)) {
          setState(260);
          blockItem();
          setState(265);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, SysYParser::RuleExp, precedence);

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
    setState(284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(269);
      match(SysYParser::L_PAREN);
      setState(270);
      exp(0);
      setState(271);
      match(SysYParser::R_PAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LValExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(273);
      lVal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(274);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(275);
      match(SysYParser::IDENT);
      setState(276);
      match(SysYParser::L_PAREN);
      setState(278);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 413457735680) != 0)) {
        setState(277);
        funcRParams();
      }
      setState(280);
      match(SysYParser::R_PAREN);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(281);
      unaryOp();
      setState(282);
      exp(3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(292);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivModExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(286);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(287);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 229376) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(288);
          exp(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(289);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(290);
          _la = _input->LA(1);
          if (!(_la == SysYParser::PLUS

          || _la == SysYParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(291);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(296);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, SysYParser::RuleCond, precedence);

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

    setState(298);
    exp(0);
    _ctx->stop = _input->LT(-1);
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(312);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<RelCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(300);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(301);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 15728640) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(302);
          cond(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(303);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(304);
          _la = _input->LA(1);
          if (!(_la == SysYParser::EQ

          || _la == SysYParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(305);
          cond(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AndCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(306);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(307);
          match(SysYParser::AND);
          setState(308);
          cond(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OrCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(309);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(310);
          match(SysYParser::OR);
          setState(311);
          cond(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
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
  enterRule(_localctx, 38, SysYParser::RuleLVal);

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
    setState(317);
    match(SysYParser::IDENT);
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(318);
        match(SysYParser::L_BRACKET);
        setState(319);
        exp(0);
        setState(320);
        match(SysYParser::R_BRACKET); 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
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
  enterRule(_localctx, 40, SysYParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
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
  enterRule(_localctx, 42, SysYParser::RuleUnaryOp);
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
    setState(329);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67133440) != 0))) {
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
  enterRule(_localctx, 44, SysYParser::RuleFuncRParams);
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
    setState(331);
    exp(0);
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(332);
      match(SysYParser::COMMA);
      setState(333);
      exp(0);
      setState(338);
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
  enterRule(_localctx, 46, SysYParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
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
    case 17: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);
    case 18: return condSempred(antlrcpp::downCast<CondContext *>(context), predicateIndex);

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
