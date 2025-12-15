define i32 @main() {
entry:
  %mul = mul i32 9, 3
  %add = add i32 4, %mul
  ret i32 %add
}

