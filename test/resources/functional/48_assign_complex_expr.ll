define i32 @main() {
entry:
  %a = alloca i32
  %b = alloca i32
  %c = alloca i32
  %d = alloca i32
  %result = alloca i32
  store i32 5, i32* %a
  store i32 5, i32* %b
  store i32 1, i32* %c
  %sub = sub i32 0, 2
  store i32 %sub, i32* %d
  %d_val = load i32, i32* %d
  %mul = mul i32 %d_val, 1
  %sdiv = sdiv i32 %mul, 2
  %a_val = load i32, i32* %a
  %b_val = load i32, i32* %b
  %sub1 = sub i32 %a_val, %b_val
  %add = add i32 %sdiv, %sub1
  %c_val = load i32, i32* %c
  %add1 = add i32 %c_val, 3
  %sub2 = sub i32 0, %add1
  %srem = srem i32 %sub2, 2
  %sub3 = sub i32 %add, %srem
  store i32 %sub3, i32* %result
  %d_val1 = load i32, i32* %d
  %srem1 = srem i32 %d_val1, 2
  %add2 = add i32 %srem1, 67
  %a_val1 = load i32, i32* %a
  %b_val1 = load i32, i32* %b
  %sub4 = sub i32 %a_val1, %b_val1
  %sub5 = sub i32 0, %sub4
  %add3 = add i32 %add2, %sub5
  %c_val1 = load i32, i32* %c
  %add4 = add i32 %c_val1, 2
  %srem2 = srem i32 %add4, 2
  %sub6 = sub i32 0, %srem2
  %sub7 = sub i32 %add3, %sub6
  store i32 %sub7, i32* %result
  %result_val = load i32, i32* %result
  %add5 = add i32 %result_val, 3
  store i32 %add5, i32* %result
  ret i32 0
}

