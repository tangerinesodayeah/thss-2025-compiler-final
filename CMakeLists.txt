cmake_minimum_required(VERSION 3.10)
project(SysYCompiler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 Java
find_package(Java REQUIRED)

# ANTLR jar 路径
set(ANTLR_JAR ${CMAKE_SOURCE_DIR}/lib/antlr-4.13.1-complete.jar)
set(ANTLR_OUTPUT_DIR ${CMAKE_SOURCE_DIR}/src/antlr)

# 创建输出目录
file(MAKE_DIRECTORY ${ANTLR_OUTPUT_DIR})

# ANTLR 生成命令
add_custom_command(
    OUTPUT 
        ${ANTLR_OUTPUT_DIR}/SysYLexer.cpp
        ${ANTLR_OUTPUT_DIR}/SysYLexer.h
        ${ANTLR_OUTPUT_DIR}/SysYParser.cpp
        ${ANTLR_OUTPUT_DIR}/SysYParser.h
        ${ANTLR_OUTPUT_DIR}/SysYParserBaseVisitor.cpp
        ${ANTLR_OUTPUT_DIR}/SysYParserBaseVisitor.h
        ${ANTLR_OUTPUT_DIR}/SysYParserVisitor.cpp
        ${ANTLR_OUTPUT_DIR}/SysYParserVisitor.h
    COMMAND ${Java_JAVA_EXECUTABLE} -jar ${ANTLR_JAR}
        -Dlanguage=Cpp
        -visitor
        -no-listener
        -o ${ANTLR_OUTPUT_DIR}
        ${CMAKE_SOURCE_DIR}/SysYLexer.g4
        ${CMAKE_SOURCE_DIR}/SysYParser.g4
    DEPENDS 
        ${CMAKE_SOURCE_DIR}/SysYLexer.g4
        ${CMAKE_SOURCE_DIR}/SysYParser.g4
    COMMENT "Generating ANTLR parser"
)

# ANTLR4 运行时
add_subdirectory(third_party/antlr4-runtime)

# 包含目录
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/antlr
    ${CMAKE_SOURCE_DIR}/third_party/antlr4-runtime/runtime/src
)

# 源文件
set(SOURCES
    src/main.cpp
    src/ASTBuilder.cpp
    src/AST.cpp
    src/SymbolTable.cpp
    src/IRBuilder.cpp
    src/IR.cpp
    src/Type.cpp
    ${ANTLR_OUTPUT_DIR}/SysYLexer.cpp

    ${ANTLR_OUTPUT_DIR}/SysYParser.cpp
    ${ANTLR_OUTPUT_DIR}/SysYParserBaseVisitor.cpp
    ${ANTLR_OUTPUT_DIR}/SysYParserVisitor.cpp
)

# 可执行文件
add_executable(compiler ${SOURCES})

# 测试 IRBuilder
add_executable(ir_test 
    src/IRBuilderTest.cpp
    src/IRBuilder.cpp
    src/IR.cpp
    src/Type.cpp
    src/SymbolTable.cpp
)

# 链接库
target_link_libraries(compiler antlr4_static)
target_link_libraries(ir_test antlr4_static) # SymbolTable might not need it but just in case


# 设置输出目录
set_target_properties(compiler PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)