@a = global i32 0
@b = global i32 0
@c = global i32 0
@d = global i32 0
@e = global i32 0
define i32 @main() {
entry:
  %or_res21 = alloca i32
  %or_res11 = alloca i32
  %flag11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* @a
  %call2 = call i32 @getint()
  store i32 %call2, i32* @b
  %call3 = call i32 @getint()
  store i32 %call3, i32* @c
  %call4 = call i32 @getint()
  store i32 %call4, i32* @d
  %call5 = call i32 @getint()
  store i32 %call5, i32* @e
  store i32 0, i32* %flag11
  %a_val1 = load i32, i32* @a
  %b_val1 = load i32, i32* @b
  %c_val1 = load i32, i32* @c
  %mul1 = mul i32 %b_val1, %c_val1
  %sub1 = sub i32 %a_val1, %mul1
  %d_val1 = load i32, i32* @d
  %a_val2 = load i32, i32* @a
  %c_val2 = load i32, i32* @c
  %sdiv1 = sdiv i32 %a_val2, %c_val2
  %sub2 = sub i32 %d_val1, %sdiv1
  %icmp1 = icmp ne i32 %sub1, %sub2
  br i1 %icmp1, label %or_true2, label %or_rhs2
then1:
  store i32 1, i32* %flag11
  br label %merge1
merge1:
  %flag_val1 = load i32, i32* %flag11
  ret i32 %flag_val1
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %a_val4 = load i32, i32* @a
  %b_val3 = load i32, i32* @b
  %add2 = add i32 %a_val4, %b_val3
  %c_val4 = load i32, i32* @c
  %add3 = add i32 %add2, %c_val4
  %d_val3 = load i32, i32* @d
  %e_val2 = load i32, i32* @e
  %add4 = add i32 %d_val3, %e_val2
  %icmp4 = icmp eq i32 %add3, %add4
  %zext2 = zext i1 %icmp4 to i32
  store i32 %zext2, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val2 = load i32, i32* %or_res11
  %icmp5 = icmp ne i32 %or_res_val2, 0
  br i1 %icmp5, label %then1, label %merge1
or_true2:
  store i32 1, i32* %or_res21
  br label %or_merge2
or_rhs2:
  %a_val3 = load i32, i32* @a
  %b_val2 = load i32, i32* @b
  %mul2 = mul i32 %a_val3, %b_val2
  %c_val3 = load i32, i32* @c
  %sdiv2 = sdiv i32 %mul2, %c_val3
  %e_val1 = load i32, i32* @e
  %d_val2 = load i32, i32* @d
  %add1 = add i32 %e_val1, %d_val2
  %icmp2 = icmp eq i32 %sdiv2, %add1
  %zext1 = zext i1 %icmp2 to i32
  store i32 %zext1, i32* %or_res21
  br label %or_merge2
or_merge2:
  %or_res_val1 = load i32, i32* %or_res21
  %icmp3 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp3, label %or_true1, label %or_rhs1
}

declare i32 @getint()
