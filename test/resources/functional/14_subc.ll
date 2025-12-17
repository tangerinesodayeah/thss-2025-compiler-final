define i32 @main() {
entry:
  %a11 = alloca i32
  store i32 10, i32* %a11
  %a_val1 = load i32, i32* %a11
  %sub1 = sub i32 %a_val1, 2
  ret i32 %sub1
}

