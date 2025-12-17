define i32 @defn() {
entry:
  ret i32 4
}

define i32 @main() {
entry:
  %a11 = alloca i32
  %call1 = call i32 @defn()
  store i32 %call1, i32* %a11
  %a_val1 = load i32, i32* %a11
  ret i32 %a_val1
}

