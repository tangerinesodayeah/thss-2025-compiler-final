define i32 @main() {
entry:
  %a = alloca i32
  store i32 10, i32* %a
  %a_val = load i32, i32* %a
  %mul = mul i32 %a_val, 2
  %add = add i32 %mul, 1
  ret i32 %add
}

