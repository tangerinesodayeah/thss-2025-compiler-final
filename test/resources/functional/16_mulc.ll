define i32 @main() {
entry:
  %a_val = load i32, i32* %a
  %mul = mul i32 %a_val, 5
  ret i32 %mul
}

