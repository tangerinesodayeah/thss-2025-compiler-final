define i32 @main() {
entry:
  %a = alloca i32
  store i32 10, i32* %a
  %a_val = load i32, i32* %a
  %sdiv = sdiv i32 %a_val, 3
  ret i32 %sdiv
}

