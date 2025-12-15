define i32 @main() {
entry:
  %a = alloca i32
  %b0 = alloca i32
  %_c = alloca i32
  store i32 1, i32* %a
  store i32 2, i32* %b0
  store i32 3, i32* %_c
  %b0_val = load i32, i32* %b0
  %_c_val = load i32, i32* %_c
  %add = add i32 %b0_val, %_c_val
  ret i32 %add
}

