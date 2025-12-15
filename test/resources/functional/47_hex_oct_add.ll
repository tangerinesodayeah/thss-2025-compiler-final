define i32 @main() {
entry:
  %a = alloca i32
  %b = alloca i32
  store i32 0, i32* %a
  store i32 0, i32* %b
  %a_val = load i32, i32* %a
  %b_val = load i32, i32* %b
  %add = add i32 %a_val, %b_val
  %add1 = add i32 %add, 75
  ret i32 %add1
}

