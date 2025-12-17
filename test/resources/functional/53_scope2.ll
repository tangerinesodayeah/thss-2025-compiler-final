@k = global i32 0
define i32 @main() {
entry:
  %g21 = alloca i32
  %l11 = alloca i32
  %g11 = alloca i32
  %k11 = alloca i32
  store i32 3389, i32* @k
  %k_val1 = load i32, i32* @k
  %icmp1 = icmp slt i32 %k_val1, 10000
  br i1 %icmp1, label %then1, label %merge1
then1:
  %k_val2 = load i32, i32* @k
  %add1 = add i32 %k_val2, 1
  store i32 %add1, i32* @k
  store i32 112, i32* %k11
  br label %while_cond1
merge1:
  %k_val9 = load i32, i32* @k
  ret i32 %k_val9
while_cond1:
  %k_val3 = load i32, i32* %k11
  %icmp2 = icmp sgt i32 %k_val3, 10
  br i1 %icmp2, label %while_body1, label %while_after1
while_body1:
  %k_val4 = load i32, i32* %k11
  %sub1 = sub i32 %k_val4, 88
  store i32 %sub1, i32* %k11
  %k_val5 = load i32, i32* %k11
  %icmp3 = icmp slt i32 %k_val5, 1000
  br i1 %icmp3, label %then2, label %merge2
while_after1:
  %k_val8 = load i32, i32* %k11
  call void @putint(i32 %k_val8)
  br label %merge1
then2:
  store i32 9, i32* %g11
  store i32 11, i32* %l11
  store i32 10, i32* %g11
  %k_val6 = load i32, i32* %k11
  %g_val1 = load i32, i32* %g11
  %sub2 = sub i32 %k_val6, %g_val1
  store i32 %sub2, i32* %k11
  store i32 11, i32* %g21
  %k_val7 = load i32, i32* %k11
  %g_val2 = load i32, i32* %g21
  %add2 = add i32 %k_val7, %g_val2
  %l_val1 = load i32, i32* %l11
  %add3 = add i32 %add2, %l_val1
  store i32 %add3, i32* %k11
  br label %merge2
merge2:
  br label %while_cond1
}

declare void @putint(i32 %arg0)
