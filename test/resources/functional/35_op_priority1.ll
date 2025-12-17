define i32 @main() {
entry:
  %d11 = alloca i32
  %c11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 10, i32* %a11
  store i32 4, i32* %b11
  store i32 2, i32* %c11
  store i32 2, i32* %d11
  %c_val1 = load i32, i32* %c11
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %mul1 = mul i32 %a_val1, %b_val1
  %add1 = add i32 %c_val1, %mul1
  %d_val1 = load i32, i32* %d11
  %sub1 = sub i32 %add1, %d_val1
  ret i32 %sub1
}

