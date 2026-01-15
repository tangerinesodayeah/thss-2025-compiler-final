# 编译器前端特性拓展测试用例说明

## 测试文件清单

本目录包含用于验证编译器前端特性实现的所有测试用例。

### 测试分类

#### 1. for循环测试 (30-33.sy)
- `30_for_basic.sy` - 基本for循环，计算0到9的和
- `31_for_empty_cond.sy` - 空条件的for循环
- `32_for_break_continue.sy` - break和continue测试
- `33_for_nested.sy` - 嵌套for循环

#### 2. switch语句测试 (34-37.sy)
- `34_switch_basic.sy` - 基本switch匹配
- `35_switch_fallthrough.sy` - case穿透测试
- `36_switch_default.sy` - default分支测试
- `37_switch_break.sy` - switch内break测试

#### 3. 浮点数测试 (38-39.sy)
- `38_float_basic.sy` - 基本浮点运算
- `39_float_cast.sy` - 浮点类型转换

#### 4. 指针测试 (40-41.sy)
- `40_pointer_basic.sy` - 基本指针操作
- `41_pointer_array.sy` - 指针与数组

#### 5. 结构体测试 (42-44.sy)
- `42_struct_basic.sy` - 结构体基础
- `43_struct_pointer.sy` - 结构体指针
- `44_struct_nested.sy` - 嵌套结构体

#### 6. 综合测试 (45-46.sy)
- `45_combined.sy` - 多特性组合测试
- `46_complex_control.sy` - 复杂控制流测试

## 运行测试

### 单个测试
```bash
./compiler test/resources/functional/30_for_basic.sy -o output.ll
lli output.ll
echo $?
```

### 运行所有测试
```bash
bash run_all_tests.sh
```

## 测试结果

所有测试用例均通过，验证了以下特性：
- ✅ for循环：支持init、cond、iter三段，支持break/continue
- ✅ switch语句：支持多case、default、break和case穿透
- ✅ 浮点数：支持基本运算和类型转换
- ✅ 指针：支持取地址、解引用和数组访问
- ✅ 结构体：支持定义、初始化和成员访问
- ✅ 特性组合：所有特性可正确协同工作
