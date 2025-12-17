@a = global i32 3
@b = global i32 5
define i32 @main() {
entry:
  %a11 = alloca i32
  store i32 5, i32* %a11
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* @b
  %add1 = add i32 %a_val1, %b_val1
  ret i32 %add1
}

