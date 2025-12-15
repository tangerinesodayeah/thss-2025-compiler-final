define i32 @main() {
entry:
  %a = alloca i32
  %b = alloca i32
  %c = alloca i32
  %d = alloca i32
  store i32 10, i32* %a
  store i32 4, i32* %b
  store i32 2, i32* %c
  store i32 2, i32* %d
  %c_val = load i32, i32* %c
  %a_val = load i32, i32* %a
  %b_val = load i32, i32* %b
  %mul = mul i32 %a_val, %b_val
  %add = add i32 %c_val, %mul
  %d_val = load i32, i32* %d
  %sub = sub i32 %add, %d_val
  ret i32 %sub
}

