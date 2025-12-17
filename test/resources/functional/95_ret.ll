define i32 @main() {
entry:
  %mul1 = mul i32 9, 3
  %add1 = add i32 4, %mul1
  ret i32 %add1
}

