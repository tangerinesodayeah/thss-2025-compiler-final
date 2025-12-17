@k = global i32 0
define i32 @main() {
entry:
  %i11 = alloca i32
  store i32 0, i32* %i11
  store i32 1, i32* @k
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %sub1 = sub i32 10, 1
  %icmp1 = icmp sle i32 %i_val1, %sub1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %add1 = add i32 %i_val2, 1
  store i32 %add1, i32* %i11
  %k_val1 = load i32, i32* @k
  %add2 = add i32 %k_val1, 1
  %k_val2 = load i32, i32* @k
  %k_val3 = load i32, i32* @k
  %add3 = add i32 %k_val2, %k_val3
  store i32 %add3, i32* @k
  br label %while_cond1
while_after1:
  %k_val4 = load i32, i32* @k
  call void @putint(i32 %k_val4)
  %k_val5 = load i32, i32* @k
  ret i32 %k_val5
}

declare void @putint(i32 %arg0)
