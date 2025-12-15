define i32 @main() {
entry:
  %a = alloca i32
  %b = alloca i32
  store i32 10, i32* %a
  store i32 30, i32* %b
  %a_val = load i32, i32* %a
  %sub = sub i32 0, 5
  %sub1 = sub i32 %a_val, %sub
  %b_val = load i32, i32* %b
  %add = add i32 %sub1, %b_val
  %sub2 = sub i32 0, 5
  %add1 = add i32 %add, %sub2
  ret i32 %add1
}

