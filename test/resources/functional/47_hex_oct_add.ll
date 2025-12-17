define i32 @main() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 15, i32* %a11
  store i32 12, i32* %b11
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %add1 = add i32 %a_val1, %b_val1
  %add2 = add i32 %add1, 61
  ret i32 %add2
}

