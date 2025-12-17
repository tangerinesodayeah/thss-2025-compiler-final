define i32 @main() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 10, i32* %a11
  store i32 30, i32* %b11
  %a_val1 = load i32, i32* %a11
  %sub1 = sub i32 0, 5
  %sub2 = sub i32 %a_val1, %sub1
  %b_val1 = load i32, i32* %b11
  %add1 = add i32 %sub2, %b_val1
  %sub3 = sub i32 0, 5
  %add2 = add i32 %add1, %sub3
  ret i32 %add2
}

