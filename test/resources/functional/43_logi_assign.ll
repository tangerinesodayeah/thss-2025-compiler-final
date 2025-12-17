@a = global i32 0
@b = global i32 0
define i32 @main() {
entry:
  %and_res11 = alloca i32
  %c11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* @a
  %call2 = call i32 @getint()
  store i32 %call2, i32* @b
  %a_val1 = load i32, i32* @a
  %b_val1 = load i32, i32* @b
  %icmp1 = icmp eq i32 %a_val1, %b_val1
  br i1 %icmp1, label %and_rhs1, label %and_false1
then1:
  store i32 1, i32* %c11
  br label %merge1
else1:
  store i32 0, i32* %c11
  br label %merge1
merge1:
  %c_val1 = load i32, i32* %c11
  ret i32 %c_val1
and_rhs1:
  %a_val2 = load i32, i32* @a
  %icmp2 = icmp ne i32 %a_val2, 3
  %zext1 = zext i1 %icmp2 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp3 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp3, label %then1, label %else1
}

declare i32 @getint()
