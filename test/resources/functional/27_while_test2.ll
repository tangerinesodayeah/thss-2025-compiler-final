define i32 @FourWhile() {
entry:
  %d11 = alloca i32
  %c11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 5, i32* %a11
  store i32 6, i32* %b11
  store i32 7, i32* %c11
  store i32 10, i32* %d11
  br label %while_cond1
while_cond1:
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp slt i32 %a_val1, 20
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %a_val2 = load i32, i32* %a11
  %add1 = add i32 %a_val2, 3
  store i32 %add1, i32* %a11
  br label %while_cond2
while_after1:
  %a_val3 = load i32, i32* %a11
  %b_val4 = load i32, i32* %b11
  %d_val4 = load i32, i32* %d11
  %add5 = add i32 %b_val4, %d_val4
  %add6 = add i32 %a_val3, %add5
  %c_val4 = load i32, i32* %c11
  %add7 = add i32 %add6, %c_val4
  ret i32 %add7
while_cond2:
  %b_val1 = load i32, i32* %b11
  %icmp2 = icmp slt i32 %b_val1, 10
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %b_val2 = load i32, i32* %b11
  %add2 = add i32 %b_val2, 1
  store i32 %add2, i32* %b11
  br label %while_cond3
while_after2:
  %b_val3 = load i32, i32* %b11
  %sub3 = sub i32 %b_val3, 2
  store i32 %sub3, i32* %b11
  br label %while_cond1
while_cond3:
  %c_val1 = load i32, i32* %c11
  %icmp3 = icmp eq i32 %c_val1, 7
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %c_val2 = load i32, i32* %c11
  %sub1 = sub i32 %c_val2, 1
  store i32 %sub1, i32* %c11
  br label %while_cond4
while_after3:
  %c_val3 = load i32, i32* %c11
  %add4 = add i32 %c_val3, 1
  store i32 %add4, i32* %c11
  br label %while_cond2
while_cond4:
  %d_val1 = load i32, i32* %d11
  %icmp4 = icmp slt i32 %d_val1, 20
  br i1 %icmp4, label %while_body4, label %while_after4
while_body4:
  %d_val2 = load i32, i32* %d11
  %add3 = add i32 %d_val2, 3
  store i32 %add3, i32* %d11
  br label %while_cond4
while_after4:
  %d_val3 = load i32, i32* %d11
  %sub2 = sub i32 %d_val3, 1
  store i32 %sub2, i32* %d11
  br label %while_cond3
}

define i32 @main() {
entry:
  %call1 = call i32 @FourWhile()
  ret i32 %call1
}

