@a = global i32 1
@b = global i32 0
@c = global i32 1
@d = global i32 2
@e = global i32 4
define i32 @main() {
entry:
  %and_res11 = alloca i32
  %or_res11 = alloca i32
  %flag11 = alloca i32
  store i32 0, i32* %flag11
  %a_val1 = load i32, i32* @a
  %b_val1 = load i32, i32* @b
  %mul1 = mul i32 %a_val1, %b_val1
  %c_val1 = load i32, i32* @c
  %sdiv1 = sdiv i32 %mul1, %c_val1
  %e_val1 = load i32, i32* @e
  %d_val1 = load i32, i32* @d
  %add1 = add i32 %e_val1, %d_val1
  %icmp1 = icmp eq i32 %sdiv1, %add1
  br i1 %icmp1, label %and_rhs1, label %and_false1
then1:
  store i32 1, i32* %flag11
  br label %merge1
merge1:
  %flag_val1 = load i32, i32* %flag11
  call void @putint(i32 %flag_val1)
  %flag_val2 = load i32, i32* %flag11
  ret i32 %flag_val2
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %a_val4 = load i32, i32* @a
  %b_val3 = load i32, i32* @b
  %c_val3 = load i32, i32* @c
  %mul3 = mul i32 %b_val3, %c_val3
  %sub1 = sub i32 %a_val4, %mul3
  %d_val3 = load i32, i32* @d
  %a_val5 = load i32, i32* @a
  %c_val4 = load i32, i32* @c
  %sdiv2 = sdiv i32 %a_val5, %c_val4
  %sub2 = sub i32 %d_val3, %sdiv2
  %icmp4 = icmp eq i32 %sub1, %sub2
  %zext2 = zext i1 %icmp4 to i32
  store i32 %zext2, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp5 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp5, label %then1, label %merge1
and_rhs1:
  %a_val2 = load i32, i32* @a
  %a_val3 = load i32, i32* @a
  %b_val2 = load i32, i32* @b
  %add2 = add i32 %a_val3, %b_val2
  %mul2 = mul i32 %a_val2, %add2
  %c_val2 = load i32, i32* @c
  %add3 = add i32 %mul2, %c_val2
  %d_val2 = load i32, i32* @d
  %e_val2 = load i32, i32* @e
  %add4 = add i32 %d_val2, %e_val2
  %icmp2 = icmp sle i32 %add3, %add4
  %zext1 = zext i1 %icmp2 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp3 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp3, label %or_true1, label %or_rhs1
}

declare void @putint(i32 %arg0)
