define i32 @main() {
entry:
  %b11 = alloca i32
  store i32 2, i32* %b11
  %b_val1 = load i32, i32* %b11
  %sub1 = sub i32 %b_val1, 10
  ret i32 %sub1
}

