define i32 @main() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 10, i32* %a11
  %sub1 = sub i32 0, 1
  store i32 %sub1, i32* %b11
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %add1 = add i32 %a_val1, %b_val1
  ret i32 %add1
}

