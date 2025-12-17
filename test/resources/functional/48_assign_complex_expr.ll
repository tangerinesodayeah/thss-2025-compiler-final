define i32 @main() {
entry:
  %result11 = alloca i32
  %d11 = alloca i32
  %c11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 5, i32* %a11
  store i32 5, i32* %b11
  store i32 1, i32* %c11
  %sub1 = sub i32 0, 2
  store i32 %sub1, i32* %d11
  %d_val1 = load i32, i32* %d11
  %mul1 = mul i32 %d_val1, 1
  %sdiv1 = sdiv i32 %mul1, 2
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %sub2 = sub i32 %a_val1, %b_val1
  %add1 = add i32 %sdiv1, %sub2
  %c_val1 = load i32, i32* %c11
  %add2 = add i32 %c_val1, 3
  %sub3 = sub i32 0, %add2
  %srem1 = srem i32 %sub3, 2
  %sub4 = sub i32 %add1, %srem1
  store i32 %sub4, i32* %result11
  %result_val1 = load i32, i32* %result11
  call void @putint(i32 %result_val1)
  %d_val2 = load i32, i32* %d11
  %srem2 = srem i32 %d_val2, 2
  %add3 = add i32 %srem2, 67
  %a_val2 = load i32, i32* %a11
  %b_val2 = load i32, i32* %b11
  %sub5 = sub i32 %a_val2, %b_val2
  %sub6 = sub i32 0, %sub5
  %add4 = add i32 %add3, %sub6
  %c_val2 = load i32, i32* %c11
  %add5 = add i32 %c_val2, 2
  %srem3 = srem i32 %add5, 2
  %sub7 = sub i32 0, %srem3
  %sub8 = sub i32 %add4, %sub7
  store i32 %sub8, i32* %result11
  %result_val2 = load i32, i32* %result11
  %add6 = add i32 %result_val2, 3
  store i32 %add6, i32* %result11
  %result_val3 = load i32, i32* %result11
  call void @putint(i32 %result_val3)
  ret i32 0
}

declare void @putint(i32 %arg0)
