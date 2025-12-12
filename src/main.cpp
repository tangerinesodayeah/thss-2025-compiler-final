#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "SysYLexer.h"
#include "SysYParser.h"
#include "ASTBuilder.h"

using namespace antlr4;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input.sy> <output.ll>" << std::endl;
        return 1;
    }

    // 读取输入文件
    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 1;
    }

    // 词法分析
    ANTLRInputStream input(stream);
    SysYLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // 语法分析
    SysYParser parser(&tokens);
    auto tree = parser.compUnit();

    // 构建 AST
    ASTBuilder builder;
    auto ast = builder.buildAST(tree);

    // TODO: 使用 IRGenerator 生成 LLVM IR
    std::cout << "AST built successfully!" << std::endl;
    std::cout << "Number of top-level declarations: " << ast->decls.size() << std::endl;

    // 输出到文件（暂时输出提示信息）
    std::ofstream output(argv[2]);
    output << "; LLVM IR generation not implemented yet\n";
    output.close();

    return 0;
}