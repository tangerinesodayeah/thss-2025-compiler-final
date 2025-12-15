define i32 @main() {
entry:
  %a = alloca i32
  store i32 5, i32* %a
  %a_val = load i32, i32* %a
  %b_val = load i32, i32* %b
  %add = add i32 %a_val, %b_val
  ret i32 %add
}

