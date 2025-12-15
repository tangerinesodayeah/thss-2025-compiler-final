define i32 @main() {
entry:
  %add = add i32 3, 5
  %mul = mul i32 %add, 7
  %srem = srem i32 5, 3
  %mul1 = mul i32 %srem, 7
  %sdiv = sdiv i32 %mul1, 2
  %add1 = add i32 %mul, %sdiv
  ret i32 %add1
}

