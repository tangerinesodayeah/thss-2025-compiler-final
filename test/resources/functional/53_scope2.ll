define i32 @main() {
entry:
  store i32 3389, i32* %k
  %k_val = load i32, i32* %k
  %icmp = icmp slt i32 %k_val, 10000
  br i1 %icmp, label %then, label %merge
then:
  %k_val1 = load i32, i32* %k
  %add = add i32 %k_val1, 1
  store i32 %add, i32* %k
  %k = alloca i32
  store i32 112, i32* %k
  br label %while_cond
merge:
  %k_val7 = load i32, i32* %k
  ret i32 %k_val7
while_cond:
  %k_val2 = load i32, i32* %k
  %icmp1 = icmp sgt i32 %k_val2, 10
  br i1 %icmp1, label %while_body, label %while_after
while_body:
  %k_val3 = load i32, i32* %k
  %sub = sub i32 %k_val3, 88
  store i32 %sub, i32* %k
  %k_val4 = load i32, i32* %k
  %icmp2 = icmp slt i32 %k_val4, 1000
  br i1 %icmp2, label %then1, label %merge1
while_after:
  br label %merge
then1:
  %g = alloca i32
  store i32 9, i32* %g
  %l = alloca i32
  store i32 11, i32* %l
  store i32 10, i32* %g
  %k_val5 = load i32, i32* %k
  %g_val = load i32, i32* %g
  %sub1 = sub i32 %k_val5, %g_val
  store i32 %sub1, i32* %k
  %g = alloca i32
  store i32 11, i32* %g
  %k_val6 = load i32, i32* %k
  %g_val1 = load i32, i32* %g
  %add1 = add i32 %k_val6, %g_val1
  %l_val = load i32, i32* %l
  %add2 = add i32 %add1, %l_val
  store i32 %add2, i32* %k
  br label %merge1
merge1:
  br label %while_cond
}

