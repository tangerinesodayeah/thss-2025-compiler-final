define i32 @main() {
entry:
  %b_val = load i32, i32* %b
  ret i32 %b_val
}

