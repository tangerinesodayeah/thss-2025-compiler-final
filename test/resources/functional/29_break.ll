define i32 @main() {
entry:
  %sum11 = alloca i32
  %i11 = alloca i32
  store i32 0, i32* %i11
  store i32 0, i32* %sum11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp slt i32 %i_val1, 100
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %icmp2 = icmp eq i32 %i_val2, 50
  br i1 %icmp2, label %then1, label %merge1
while_after1:
  %sum_val2 = load i32, i32* %sum11
  ret i32 %sum_val2
then1:
  br label %while_after1
merge1:
  %sum_val1 = load i32, i32* %sum11
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %sum_val1, %i_val3
  store i32 %add1, i32* %sum11
  %i_val4 = load i32, i32* %i11
  %add2 = add i32 %i_val4, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
}

