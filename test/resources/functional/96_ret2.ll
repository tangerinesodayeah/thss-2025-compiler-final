define i32 @main() {
entry:
  %add1 = add i32 3, 5
  %mul1 = mul i32 %add1, 7
  %srem1 = srem i32 5, 3
  %mul2 = mul i32 %srem1, 7
  %sdiv1 = sdiv i32 %mul2, 2
  %add2 = add i32 %mul1, %sdiv1
  ret i32 %add2
}

