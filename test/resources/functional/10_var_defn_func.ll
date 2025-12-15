define i32 @defn() {
entry:
  ret i32 4
}

define i32 @main() {
entry:
  %a = alloca i32
  store i32 4, i32* %a
  %a_val = load i32, i32* %a
  ret i32 %a_val
}

