define i32 @main() {
entry:
  %b = alloca i32
  store i32 2, i32* %b
  %b_val = load i32, i32* %b
  %a_val = load i32, i32* %a
  %sub = sub i32 %b_val, %a_val
  ret i32 %sub
}

