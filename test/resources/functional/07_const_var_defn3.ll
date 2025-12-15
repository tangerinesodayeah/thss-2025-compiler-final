define i32 @main() {
entry:
  %a = alloca i32
  store i32 10, i32* %a
  %b = alloca i32
  store i32 5, i32* %b
  %b_val = load i32, i32* %b
  ret i32 %b_val
}

