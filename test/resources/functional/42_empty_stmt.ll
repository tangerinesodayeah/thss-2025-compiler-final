define i32 @main() {
entry:
  %a11 = alloca i32
  store i32 10, i32* %a11
  %a_val1 = load i32, i32* %a11
  %mul1 = mul i32 %a_val1, 2
  %add1 = add i32 %mul1, 1
  ret i32 %add1
}

