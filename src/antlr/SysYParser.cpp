
// Generated from SysYParser.g4 by ANTLR 4.13.1


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
      "number", "unaryOp", "funcRParams", "constExp", "addExp", "mulExp", 
      "unaryExp", "primaryExp"
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
  	4,1,37,358,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,5,0,57,8,
  	0,10,0,12,0,60,9,0,1,0,1,0,1,1,1,1,3,1,66,8,1,1,2,1,2,1,2,1,2,1,2,5,2,
  	73,8,2,10,2,12,2,76,9,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,87,8,
  	4,10,4,12,4,90,9,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,5,5,100,8,5,10,5,12,
  	5,103,9,5,3,5,105,8,5,1,5,3,5,108,8,5,1,6,1,6,1,6,1,6,5,6,114,8,6,10,
  	6,12,6,117,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,5,7,126,8,7,10,7,12,7,129,
  	9,7,1,7,1,7,1,7,1,7,1,7,5,7,136,8,7,10,7,12,7,139,9,7,1,7,1,7,3,7,143,
  	8,7,1,8,1,8,1,8,1,8,1,8,5,8,150,8,8,10,8,12,8,153,9,8,3,8,155,8,8,1,8,
  	3,8,158,8,8,1,9,1,9,1,9,1,9,3,9,164,8,9,1,9,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,11,5,11,174,8,11,10,11,12,11,177,9,11,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,5,12,187,8,12,10,12,12,12,190,9,12,3,12,192,8,12,1,13,1,
  	13,5,13,196,8,13,10,13,12,13,199,9,13,1,13,1,13,1,14,1,14,3,14,205,8,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,213,8,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,3,15,224,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,3,15,238,8,15,1,15,3,15,241,8,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,253,8,16,1,16,1,16,1,16,
  	1,16,3,16,259,8,16,1,16,1,16,1,16,1,16,1,16,1,16,5,16,267,8,16,10,16,
  	12,16,270,9,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,5,17,287,8,17,10,17,12,17,290,9,17,1,18,1,18,1,18,
  	1,18,1,18,5,18,297,8,18,10,18,12,18,300,9,18,1,19,1,19,1,20,1,20,1,21,
  	1,21,1,21,5,21,309,8,21,10,21,12,21,312,9,21,1,22,1,22,1,23,1,23,1,23,
  	1,23,1,23,1,23,5,23,322,8,23,10,23,12,23,325,9,23,1,24,1,24,1,24,1,24,
  	1,24,1,24,5,24,333,8,24,10,24,12,24,336,9,24,1,25,1,25,1,25,1,25,3,25,
  	342,8,25,1,25,1,25,1,25,1,25,3,25,348,8,25,1,26,1,26,1,26,1,26,1,26,1,
  	26,3,26,356,8,26,1,26,0,4,32,34,46,48,27,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,6,1,0,2,3,1,0,12,14,
  	1,0,10,11,1,0,17,20,1,0,15,16,2,0,10,11,23,23,381,0,58,1,0,0,0,2,65,1,
  	0,0,0,4,67,1,0,0,0,6,79,1,0,0,0,8,81,1,0,0,0,10,107,1,0,0,0,12,109,1,
  	0,0,0,14,142,1,0,0,0,16,157,1,0,0,0,18,159,1,0,0,0,20,168,1,0,0,0,22,
  	170,1,0,0,0,24,178,1,0,0,0,26,193,1,0,0,0,28,204,1,0,0,0,30,240,1,0,0,
  	0,32,258,1,0,0,0,34,271,1,0,0,0,36,291,1,0,0,0,38,301,1,0,0,0,40,303,
  	1,0,0,0,42,305,1,0,0,0,44,313,1,0,0,0,46,315,1,0,0,0,48,326,1,0,0,0,50,
  	347,1,0,0,0,52,355,1,0,0,0,54,57,3,2,1,0,55,57,3,18,9,0,56,54,1,0,0,0,
  	56,55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,61,1,0,0,0,
  	60,58,1,0,0,0,61,62,5,0,0,1,62,1,1,0,0,0,63,66,3,4,2,0,64,66,3,12,6,0,
  	65,63,1,0,0,0,65,64,1,0,0,0,66,3,1,0,0,0,67,68,5,1,0,0,68,69,3,6,3,0,
  	69,74,3,8,4,0,70,71,5,26,0,0,71,73,3,8,4,0,72,70,1,0,0,0,73,76,1,0,0,
  	0,74,72,1,0,0,0,74,75,1,0,0,0,75,77,1,0,0,0,76,74,1,0,0,0,77,78,5,25,
  	0,0,78,5,1,0,0,0,79,80,5,2,0,0,80,7,1,0,0,0,81,88,5,34,0,0,82,83,5,31,
  	0,0,83,84,3,44,22,0,84,85,5,32,0,0,85,87,1,0,0,0,86,82,1,0,0,0,87,90,
  	1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,92,
  	5,24,0,0,92,93,3,10,5,0,93,9,1,0,0,0,94,108,3,44,22,0,95,104,5,29,0,0,
  	96,101,3,10,5,0,97,98,5,26,0,0,98,100,3,10,5,0,99,97,1,0,0,0,100,103,
  	1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,
  	0,104,96,1,0,0,0,104,105,1,0,0,0,105,106,1,0,0,0,106,108,5,30,0,0,107,
  	94,1,0,0,0,107,95,1,0,0,0,108,11,1,0,0,0,109,110,3,6,3,0,110,115,3,14,
  	7,0,111,112,5,26,0,0,112,114,3,14,7,0,113,111,1,0,0,0,114,117,1,0,0,0,
  	115,113,1,0,0,0,115,116,1,0,0,0,116,118,1,0,0,0,117,115,1,0,0,0,118,119,
  	5,25,0,0,119,13,1,0,0,0,120,127,5,34,0,0,121,122,5,31,0,0,122,123,3,44,
  	22,0,123,124,5,32,0,0,124,126,1,0,0,0,125,121,1,0,0,0,126,129,1,0,0,0,
  	127,125,1,0,0,0,127,128,1,0,0,0,128,143,1,0,0,0,129,127,1,0,0,0,130,137,
  	5,34,0,0,131,132,5,31,0,0,132,133,3,44,22,0,133,134,5,32,0,0,134,136,
  	1,0,0,0,135,131,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,
  	0,138,140,1,0,0,0,139,137,1,0,0,0,140,141,5,24,0,0,141,143,3,16,8,0,142,
  	120,1,0,0,0,142,130,1,0,0,0,143,15,1,0,0,0,144,158,3,32,16,0,145,154,
  	5,29,0,0,146,151,3,16,8,0,147,148,5,26,0,0,148,150,3,16,8,0,149,147,1,
  	0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,155,1,0,0,0,
  	153,151,1,0,0,0,154,146,1,0,0,0,154,155,1,0,0,0,155,156,1,0,0,0,156,158,
  	5,30,0,0,157,144,1,0,0,0,157,145,1,0,0,0,158,17,1,0,0,0,159,160,3,20,
  	10,0,160,161,5,34,0,0,161,163,5,27,0,0,162,164,3,22,11,0,163,162,1,0,
  	0,0,163,164,1,0,0,0,164,165,1,0,0,0,165,166,5,28,0,0,166,167,3,26,13,
  	0,167,19,1,0,0,0,168,169,7,0,0,0,169,21,1,0,0,0,170,175,3,24,12,0,171,
  	172,5,26,0,0,172,174,3,24,12,0,173,171,1,0,0,0,174,177,1,0,0,0,175,173,
  	1,0,0,0,175,176,1,0,0,0,176,23,1,0,0,0,177,175,1,0,0,0,178,179,3,6,3,
  	0,179,191,5,34,0,0,180,181,5,31,0,0,181,188,5,32,0,0,182,183,5,31,0,0,
  	183,184,3,32,16,0,184,185,5,32,0,0,185,187,1,0,0,0,186,182,1,0,0,0,187,
  	190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,192,1,0,0,0,190,188,1,
  	0,0,0,191,180,1,0,0,0,191,192,1,0,0,0,192,25,1,0,0,0,193,197,5,29,0,0,
  	194,196,3,28,14,0,195,194,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,
  	198,1,0,0,0,198,200,1,0,0,0,199,197,1,0,0,0,200,201,5,30,0,0,201,27,1,
  	0,0,0,202,205,3,2,1,0,203,205,3,30,15,0,204,202,1,0,0,0,204,203,1,0,0,
  	0,205,29,1,0,0,0,206,207,3,36,18,0,207,208,5,24,0,0,208,209,3,32,16,0,
  	209,210,5,25,0,0,210,241,1,0,0,0,211,213,3,32,16,0,212,211,1,0,0,0,212,
  	213,1,0,0,0,213,214,1,0,0,0,214,241,5,25,0,0,215,241,3,26,13,0,216,217,
  	5,4,0,0,217,218,5,27,0,0,218,219,3,34,17,0,219,220,5,28,0,0,220,223,3,
  	30,15,0,221,222,5,5,0,0,222,224,3,30,15,0,223,221,1,0,0,0,223,224,1,0,
  	0,0,224,241,1,0,0,0,225,226,5,6,0,0,226,227,5,27,0,0,227,228,3,34,17,
  	0,228,229,5,28,0,0,229,230,3,30,15,0,230,241,1,0,0,0,231,232,5,7,0,0,
  	232,241,5,25,0,0,233,234,5,8,0,0,234,241,5,25,0,0,235,237,5,9,0,0,236,
  	238,3,32,16,0,237,236,1,0,0,0,237,238,1,0,0,0,238,239,1,0,0,0,239,241,
  	5,25,0,0,240,206,1,0,0,0,240,212,1,0,0,0,240,215,1,0,0,0,240,216,1,0,
  	0,0,240,225,1,0,0,0,240,231,1,0,0,0,240,233,1,0,0,0,240,235,1,0,0,0,241,
  	31,1,0,0,0,242,243,6,16,-1,0,243,244,5,27,0,0,244,245,3,32,16,0,245,246,
  	5,28,0,0,246,259,1,0,0,0,247,259,3,36,18,0,248,259,3,38,19,0,249,250,
  	5,34,0,0,250,252,5,27,0,0,251,253,3,42,21,0,252,251,1,0,0,0,252,253,1,
  	0,0,0,253,254,1,0,0,0,254,259,5,28,0,0,255,256,3,40,20,0,256,257,3,32,
  	16,3,257,259,1,0,0,0,258,242,1,0,0,0,258,247,1,0,0,0,258,248,1,0,0,0,
  	258,249,1,0,0,0,258,255,1,0,0,0,259,268,1,0,0,0,260,261,10,2,0,0,261,
  	262,7,1,0,0,262,267,3,32,16,3,263,264,10,1,0,0,264,265,7,2,0,0,265,267,
  	3,32,16,2,266,260,1,0,0,0,266,263,1,0,0,0,267,270,1,0,0,0,268,266,1,0,
  	0,0,268,269,1,0,0,0,269,33,1,0,0,0,270,268,1,0,0,0,271,272,6,17,-1,0,
  	272,273,3,32,16,0,273,288,1,0,0,0,274,275,10,4,0,0,275,276,7,3,0,0,276,
  	287,3,34,17,5,277,278,10,3,0,0,278,279,7,4,0,0,279,287,3,34,17,4,280,
  	281,10,2,0,0,281,282,5,21,0,0,282,287,3,34,17,3,283,284,10,1,0,0,284,
  	285,5,22,0,0,285,287,3,34,17,2,286,274,1,0,0,0,286,277,1,0,0,0,286,280,
  	1,0,0,0,286,283,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,
  	0,289,35,1,0,0,0,290,288,1,0,0,0,291,298,5,34,0,0,292,293,5,31,0,0,293,
  	294,3,32,16,0,294,295,5,32,0,0,295,297,1,0,0,0,296,292,1,0,0,0,297,300,
  	1,0,0,0,298,296,1,0,0,0,298,299,1,0,0,0,299,37,1,0,0,0,300,298,1,0,0,
  	0,301,302,5,33,0,0,302,39,1,0,0,0,303,304,7,5,0,0,304,41,1,0,0,0,305,
  	310,3,32,16,0,306,307,5,26,0,0,307,309,3,32,16,0,308,306,1,0,0,0,309,
  	312,1,0,0,0,310,308,1,0,0,0,310,311,1,0,0,0,311,43,1,0,0,0,312,310,1,
  	0,0,0,313,314,3,46,23,0,314,45,1,0,0,0,315,316,6,23,-1,0,316,317,3,48,
  	24,0,317,323,1,0,0,0,318,319,10,1,0,0,319,320,7,2,0,0,320,322,3,48,24,
  	0,321,318,1,0,0,0,322,325,1,0,0,0,323,321,1,0,0,0,323,324,1,0,0,0,324,
  	47,1,0,0,0,325,323,1,0,0,0,326,327,6,24,-1,0,327,328,3,50,25,0,328,334,
  	1,0,0,0,329,330,10,1,0,0,330,331,7,1,0,0,331,333,3,50,25,0,332,329,1,
  	0,0,0,333,336,1,0,0,0,334,332,1,0,0,0,334,335,1,0,0,0,335,49,1,0,0,0,
  	336,334,1,0,0,0,337,348,3,52,26,0,338,339,5,34,0,0,339,341,5,27,0,0,340,
  	342,3,42,21,0,341,340,1,0,0,0,341,342,1,0,0,0,342,343,1,0,0,0,343,348,
  	5,28,0,0,344,345,3,40,20,0,345,346,3,50,25,0,346,348,1,0,0,0,347,337,
  	1,0,0,0,347,338,1,0,0,0,347,344,1,0,0,0,348,51,1,0,0,0,349,350,5,27,0,
  	0,350,351,3,32,16,0,351,352,5,28,0,0,352,356,1,0,0,0,353,356,3,36,18,
  	0,354,356,3,38,19,0,355,349,1,0,0,0,355,353,1,0,0,0,355,354,1,0,0,0,356,
  	53,1,0,0,0,38,56,58,65,74,88,101,104,107,115,127,137,142,151,154,157,
  	163,175,188,191,197,204,212,223,237,240,252,258,266,268,286,288,298,310,
  	323,334,341,347,355
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
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14) != 0)) {
      setState(56);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(54);
        decl();
        break;
      }

      case 2: {
        setState(55);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        constDecl();
        break;
      }

      case SysYParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(64);
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
    setState(67);
    match(SysYParser::CONST);
    setState(68);
    bType();
    setState(69);
    constDef();
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(70);
      match(SysYParser::COMMA);
      setState(71);
      constDef();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
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
    setState(79);
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
    setState(81);
    match(SysYParser::IDENT);
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::L_BRACKET) {
      setState(82);
      match(SysYParser::L_BRACKET);
      setState(83);
      constExp();
      setState(84);
      match(SysYParser::R_BRACKET);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(91);
    match(SysYParser::ASSIGN);
    setState(92);
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
    setState(107);
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
        setState(94);
        constExp();
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(95);
        match(SysYParser::L_BRACE);
        setState(104);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 26449284096) != 0)) {
          setState(96);
          constInitVal();
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(97);
            match(SysYParser::COMMA);
            setState(98);
            constInitVal();
            setState(103);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(106);
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
    setState(109);
    bType();
    setState(110);
    varDef();
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(111);
      match(SysYParser::COMMA);
      setState(112);
      varDef();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
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
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::UninitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(120);
      match(SysYParser::IDENT);
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(121);
        match(SysYParser::L_BRACKET);
        setState(122);
        constExp();
        setState(123);
        match(SysYParser::R_BRACKET);
        setState(129);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::InitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(130);
      match(SysYParser::IDENT);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(131);
        match(SysYParser::L_BRACKET);
        setState(132);
        constExp();
        setState(133);
        match(SysYParser::R_BRACKET);
        setState(139);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(140);
      match(SysYParser::ASSIGN);
      setState(141);
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
    setState(157);
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
        setState(144);
        exp(0);
        break;
      }

      case SysYParser::L_BRACE: {
        _localctx = _tracker.createInstance<SysYParser::ListInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(145);
        match(SysYParser::L_BRACE);
        setState(154);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 26449284096) != 0)) {
          setState(146);
          initVal();
          setState(151);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(147);
            match(SysYParser::COMMA);
            setState(148);
            initVal();
            setState(153);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(156);
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
    setState(159);
    funcType();
    setState(160);
    match(SysYParser::IDENT);
    setState(161);
    match(SysYParser::L_PAREN);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::INT) {
      setState(162);
      funcFParams();
    }
    setState(165);
    match(SysYParser::R_PAREN);
    setState(166);
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
    setState(168);
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
    setState(170);
    funcFParam();
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(171);
      match(SysYParser::COMMA);
      setState(172);
      funcFParam();
      setState(177);
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
    setState(178);
    bType();
    setState(179);
    match(SysYParser::IDENT);
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::L_BRACKET) {
      setState(180);
      match(SysYParser::L_BRACKET);
      setState(181);
      match(SysYParser::R_BRACKET);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::L_BRACKET) {
        setState(182);
        match(SysYParser::L_BRACKET);
        setState(183);
        exp(0);
        setState(184);
        match(SysYParser::R_BRACKET);
        setState(190);
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
    setState(193);
    match(SysYParser::L_BRACE);
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 26482839510) != 0)) {
      setState(194);
      blockItem();
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
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
    setState(204);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST:
      case SysYParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(202);
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
        setState(203);
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
    setState(240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysYParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(206);
      lVal();
      setState(207);
      match(SysYParser::ASSIGN);
      setState(208);
      exp(0);
      setState(209);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysYParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(211);
        exp(0);
      }
      setState(214);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SysYParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(215);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SysYParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(216);
      match(SysYParser::IF);
      setState(217);
      match(SysYParser::L_PAREN);
      setState(218);
      cond(0);
      setState(219);
      match(SysYParser::R_PAREN);
      setState(220);
      stmt();
      setState(223);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(221);
        match(SysYParser::ELSE);
        setState(222);
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
      setState(225);
      match(SysYParser::WHILE);
      setState(226);
      match(SysYParser::L_PAREN);
      setState(227);
      cond(0);
      setState(228);
      match(SysYParser::R_PAREN);
      setState(229);
      stmt();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SysYParser::BreakStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(231);
      match(SysYParser::BREAK);
      setState(232);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SysYParser::ContinueStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(233);
      match(SysYParser::CONTINUE);
      setState(234);
      match(SysYParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<SysYParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(235);
      match(SysYParser::RETURN);
      setState(237);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(236);
        exp(0);
      }
      setState(239);
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
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(243);
      match(SysYParser::L_PAREN);
      setState(244);
      exp(0);
      setState(245);
      match(SysYParser::R_PAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LValExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(247);
      lVal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(248);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(249);
      match(SysYParser::IDENT);
      setState(250);
      match(SysYParser::L_PAREN);
      setState(252);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(251);
        funcRParams();
      }
      setState(254);
      match(SysYParser::R_PAREN);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(255);
      unaryOp();
      setState(256);
      exp(3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(266);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivModExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(260);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(261);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 28672) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(262);
          exp(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(263);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(264);
          _la = _input->LA(1);
          if (!(_la == SysYParser::PLUS

          || _la == SysYParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(265);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(270);
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

    setState(272);
    exp(0);
    _ctx->stop = _input->LT(-1);
    setState(288);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(286);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<RelCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(274);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(275);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1966080) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(276);
          cond(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(277);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(278);
          _la = _input->LA(1);
          if (!(_la == SysYParser::EQ

          || _la == SysYParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(279);
          cond(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AndCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(280);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(281);
          match(SysYParser::AND);
          setState(282);
          cond(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OrCondContext>(_tracker.createInstance<CondContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCond);
          setState(283);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(284);
          match(SysYParser::OR);
          setState(285);
          cond(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(290);
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
    setState(291);
    match(SysYParser::IDENT);
    setState(298);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(292);
        match(SysYParser::L_BRACKET);
        setState(293);
        exp(0);
        setState(294);
        match(SysYParser::R_BRACKET); 
      }
      setState(300);
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
    setState(301);
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
    setState(303);
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
    setState(305);
    exp(0);
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(306);
      match(SysYParser::COMMA);
      setState(307);
      exp(0);
      setState(312);
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

SysYParser::AddExpContext* SysYParser::ConstExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
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
    setState(313);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

SysYParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::MulExpContext* SysYParser::AddExpContext::mulExp() {
  return getRuleContext<SysYParser::MulExpContext>(0);
}

SysYParser::AddExpContext* SysYParser::AddExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
}

tree::TerminalNode* SysYParser::AddExpContext::PLUS() {
  return getToken(SysYParser::PLUS, 0);
}

tree::TerminalNode* SysYParser::AddExpContext::MINUS() {
  return getToken(SysYParser::MINUS, 0);
}


size_t SysYParser::AddExpContext::getRuleIndex() const {
  return SysYParser::RuleAddExp;
}


std::any SysYParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::AddExpContext* SysYParser::addExp() {
   return addExp(0);
}

SysYParser::AddExpContext* SysYParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  SysYParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, SysYParser::RuleAddExp, precedence);

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
    setState(316);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(323);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AddExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAddExp);
        setState(318);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(319);
        _la = _input->LA(1);
        if (!(_la == SysYParser::PLUS

        || _la == SysYParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(320);
        mulExp(0); 
      }
      setState(325);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

SysYParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::UnaryExpContext* SysYParser::MulExpContext::unaryExp() {
  return getRuleContext<SysYParser::UnaryExpContext>(0);
}

SysYParser::MulExpContext* SysYParser::MulExpContext::mulExp() {
  return getRuleContext<SysYParser::MulExpContext>(0);
}

tree::TerminalNode* SysYParser::MulExpContext::MUL() {
  return getToken(SysYParser::MUL, 0);
}

tree::TerminalNode* SysYParser::MulExpContext::DIV() {
  return getToken(SysYParser::DIV, 0);
}

tree::TerminalNode* SysYParser::MulExpContext::MOD() {
  return getToken(SysYParser::MOD, 0);
}


size_t SysYParser::MulExpContext::getRuleIndex() const {
  return SysYParser::RuleMulExp;
}


std::any SysYParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::MulExpContext* SysYParser::mulExp() {
   return mulExp(0);
}

SysYParser::MulExpContext* SysYParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  SysYParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, SysYParser::RuleMulExp, precedence);

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
    setState(327);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(334);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MulExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMulExp);
        setState(329);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(330);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 28672) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(331);
        unaryExp(); 
      }
      setState(336);
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

//----------------- UnaryExpContext ------------------------------------------------------------------

SysYParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::PrimaryExpContext* SysYParser::UnaryExpContext::primaryExp() {
  return getRuleContext<SysYParser::PrimaryExpContext>(0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::IDENT() {
  return getToken(SysYParser::IDENT, 0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::FuncRParamsContext* SysYParser::UnaryExpContext::funcRParams() {
  return getRuleContext<SysYParser::FuncRParamsContext>(0);
}

SysYParser::UnaryOpContext* SysYParser::UnaryExpContext::unaryOp() {
  return getRuleContext<SysYParser::UnaryOpContext>(0);
}

SysYParser::UnaryExpContext* SysYParser::UnaryExpContext::unaryExp() {
  return getRuleContext<SysYParser::UnaryExpContext>(0);
}


size_t SysYParser::UnaryExpContext::getRuleIndex() const {
  return SysYParser::RuleUnaryExp;
}


std::any SysYParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryExpContext* SysYParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 50, SysYParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(347);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(337);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(338);
      match(SysYParser::IDENT);
      setState(339);
      match(SysYParser::L_PAREN);
      setState(341);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 25912413184) != 0)) {
        setState(340);
        funcRParams();
      }
      setState(343);
      match(SysYParser::R_PAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(344);
      unaryOp();
      setState(345);
      unaryExp();
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

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysYParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::PrimaryExpContext::L_PAREN() {
  return getToken(SysYParser::L_PAREN, 0);
}

SysYParser::ExpContext* SysYParser::PrimaryExpContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::PrimaryExpContext::R_PAREN() {
  return getToken(SysYParser::R_PAREN, 0);
}

SysYParser::LValContext* SysYParser::PrimaryExpContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

SysYParser::NumberContext* SysYParser::PrimaryExpContext::number() {
  return getRuleContext<SysYParser::NumberContext>(0);
}


size_t SysYParser::PrimaryExpContext::getRuleIndex() const {
  return SysYParser::RulePrimaryExp;
}


std::any SysYParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::PrimaryExpContext* SysYParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 52, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(355);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::L_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(349);
        match(SysYParser::L_PAREN);
        setState(350);
        exp(0);
        setState(351);
        match(SysYParser::R_PAREN);
        break;
      }

      case SysYParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(353);
        lVal();
        break;
      }

      case SysYParser::INT_CONST: {
        enterOuterAlt(_localctx, 3);
        setState(354);
        number();
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

bool SysYParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);
    case 17: return condSempred(antlrcpp::downCast<CondContext *>(context), predicateIndex);
    case 23: return addExpSempred(antlrcpp::downCast<AddExpContext *>(context), predicateIndex);
    case 24: return mulExpSempred(antlrcpp::downCast<MulExpContext *>(context), predicateIndex);

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

bool SysYParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

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
