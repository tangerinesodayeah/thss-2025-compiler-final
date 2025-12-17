define i32 @main() {
entry:
  %_c11 = alloca i32
  %b011 = alloca i32
  %a11 = alloca i32
  store i32 1, i32* %a11
  store i32 2, i32* %b011
  store i32 3, i32* %_c11
  %b0_val1 = load i32, i32* %b011
  %_c_val1 = load i32, i32* %_c11
  %add1 = add i32 %b0_val1, %_c_val1
  ret i32 %add1
}

