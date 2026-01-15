#!/bin/bash
# run_all_tests.sh - 自动化测试脚本

COMPILER="./build/compiler"
TEST_DIR="test/resources/functional"
PASSED=0
FAILED=0
TOTAL=0

# 定义测试用例：文件名:预期返回值
declare -A TESTS=(
    ["30_for_basic.sy"]=45
    ["31_for_empty_cond.sy"]=5
    ["32_for_break_continue.sy"]=4
    ["33_for_nested.sy"]=6
    ["34_switch_basic.sy"]=200
    ["35_switch_fallthrough.sy"]=300
    ["36_switch_default.sy"]=999
    ["37_switch_break.sy"]=200
    ["38_float_basic.sy"]=5
    ["39_float_cast.sy"]=3
    ["40_pointer_basic.sy"]=20
    ["41_pointer_array.sy"]=60
    ["42_struct_basic.sy"]=4
    ["43_struct_pointer.sy"]=4
    ["44_struct_nested.sy"]=5
    ["45_combined.sy"]=5
    ["46_complex_control.sy"]=21
)

echo "==================================="
echo "  编译器前端特性测试"
echo "==================================="
echo ""

for file in "${!TESTS[@]}"; do
    expected="${TESTS[$file]}"
    input="${TEST_DIR}/${file}"
    output="/tmp/${file%.sy}.ll"
    
    TOTAL=$((TOTAL + 1))
    
    # 编译
    if ! $COMPILER "$input" -o "$output" 2>/dev/null; then
        echo "❌ $file: COMPILATION FAILED"
        FAILED=$((FAILED + 1))
        continue
    fi
    
    # 执行
    actual=$(lli "$output" 2>/dev/null)
    exit_code=$?
    
    if [ $exit_code -ne 0 ]; then
        echo "❌ $file: EXECUTION FAILED (exit code: $exit_code)"
        FAILED=$((FAILED + 1))
        continue
    fi
    
    # 验证结果
    if [ "$actual" -eq "$expected" ]; then
        echo "✅ $file: PASSED (expected=$expected, got=$actual)"
        PASSED=$((PASSED + 1))
    else
        echo "❌ $file: FAILED (expected=$expected, got=$actual)"
        FAILED=$((FAILED + 1))
    fi
done

echo ""
echo "==================================="
echo "  测试总结"
echo "==================================="
echo "总计: $TOTAL"
echo "通过: $PASSED"
echo "失败: $FAILED"
echo "通过率: $(echo "scale=2; $PASSED * 100 / $TOTAL" | bc)%"
echo "==================================="

if [ $FAILED -eq 0 ]; then
    echo "🎉 所有测试通过！"
    exit 0
else
    echo "⚠️  有 $FAILED 个测试失败"
    exit 1
fi
