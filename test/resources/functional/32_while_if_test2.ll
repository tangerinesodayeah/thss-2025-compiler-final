define i32 @ifWhile() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 0, i32* %a11
  store i32 3, i32* %b11
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %a_val1, 5
  br i1 %icmp1, label %then1, label %else1
then1:
  br label %while_cond1
else1:
  br label %while_cond2
merge1:
  %b_val5 = load i32, i32* %b11
  ret i32 %b_val5
while_cond1:
  %b_val1 = load i32, i32* %b11
  %icmp2 = icmp eq i32 %b_val1, 2
  br i1 %icmp2, label %while_body1, label %while_after1
while_body1:
  %b_val2 = load i32, i32* %b11
  %add1 = add i32 %b_val2, 2
  store i32 %add1, i32* %b11
  br label %while_cond1
while_after1:
  %b_val3 = load i32, i32* %b11
  %add2 = add i32 %b_val3, 25
  store i32 %add2, i32* %b11
  br label %merge1
while_cond2:
  %a_val2 = load i32, i32* %a11
  %icmp3 = icmp slt i32 %a_val2, 5
  br i1 %icmp3, label %while_body2, label %while_after2
while_body2:
  %b_val4 = load i32, i32* %b11
  %mul1 = mul i32 %b_val4, 2
  store i32 %mul1, i32* %b11
  %a_val3 = load i32, i32* %a11
  %add3 = add i32 %a_val3, 1
  store i32 %add3, i32* %a11
  br label %while_cond2
while_after2:
  br label %merge1
}

define i32 @main() {
entry:
  %call1 = call i32 @ifWhile()
  ret i32 %call1
}

