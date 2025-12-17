define i32 @main() {
entry:
  %and_res21 = alloca i32
  %or_res21 = alloca i32
  %and_res11 = alloca i32
  %or_res11 = alloca i32
  %result11 = alloca i32
  %d11 = alloca i32
  %c11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 5, i32* %a11
  store i32 5, i32* %b11
  store i32 1, i32* %c11
  %sub1 = sub i32 0, 2
  store i32 %sub1, i32* %d11
  store i32 2, i32* %result11
  %d_val1 = load i32, i32* %d11
  %mul1 = mul i32 %d_val1, 1
  %sdiv1 = sdiv i32 %mul1, 2
  %icmp1 = icmp slt i32 %sdiv1, 0
  br i1 %icmp1, label %or_true1, label %or_rhs1
then1:
  %result_val1 = load i32, i32* %result11
  call void @putint(i32 %result_val1)
  br label %merge1
merge1:
  %d_val2 = load i32, i32* %d11
  %srem2 = srem i32 %d_val2, 2
  %add2 = add i32 %srem2, 67
  %icmp6 = icmp slt i32 %add2, 0
  br i1 %icmp6, label %or_true2, label %or_rhs2
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %sub2 = sub i32 %a_val1, %b_val1
  %icmp2 = icmp ne i32 %sub2, 0
  br i1 %icmp2, label %and_rhs1, label %and_false1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp5 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp5, label %then1, label %merge1
and_rhs1:
  %c_val1 = load i32, i32* %c11
  %add1 = add i32 %c_val1, 3
  %srem1 = srem i32 %add1, 2
  %icmp3 = icmp ne i32 %srem1, 0
  %zext1 = zext i1 %icmp3 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp4 = icmp ne i32 %and_res_val1, 0
  %zext2 = zext i1 %icmp4 to i32
  store i32 %zext2, i32* %or_res11
  br label %or_merge1
then2:
  store i32 4, i32* %result11
  %result_val2 = load i32, i32* %result11
  call void @putint(i32 %result_val2)
  br label %merge2
merge2:
  ret i32 0
or_true2:
  store i32 1, i32* %or_res21
  br label %or_merge2
or_rhs2:
  %a_val2 = load i32, i32* %a11
  %b_val2 = load i32, i32* %b11
  %sub3 = sub i32 %a_val2, %b_val2
  %icmp7 = icmp ne i32 %sub3, 0
  br i1 %icmp7, label %and_rhs2, label %and_false2
or_merge2:
  %or_res_val2 = load i32, i32* %or_res21
  %icmp10 = icmp ne i32 %or_res_val2, 0
  br i1 %icmp10, label %then2, label %merge2
and_rhs2:
  %c_val2 = load i32, i32* %c11
  %add3 = add i32 %c_val2, 2
  %srem3 = srem i32 %add3, 2
  %icmp8 = icmp ne i32 %srem3, 0
  %zext3 = zext i1 %icmp8 to i32
  store i32 %zext3, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val2 = load i32, i32* %and_res21
  %icmp9 = icmp ne i32 %and_res_val2, 0
  %zext4 = zext i1 %icmp9 to i32
  store i32 %zext4, i32* %or_res21
  br label %or_merge2
}

declare void @putint(i32 %arg0)
