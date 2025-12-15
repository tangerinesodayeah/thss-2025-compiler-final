define i32 @FourWhile() {
entry:
  %a = alloca i32
  store i32 5, i32* %a
  %b = alloca i32
  %c = alloca i32
  store i32 6, i32* %b
  store i32 7, i32* %c
  %d = alloca i32
  store i32 10, i32* %d
  br label %while_cond
while_cond:
  %a_val = load i32, i32* %a
  %icmp = icmp slt i32 %a_val, 20
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %a_val1 = load i32, i32* %a
  %add = add i32 %a_val1, 3
  store i32 %add, i32* %a
  br label %while_cond1
while_after:
  %a_val2 = load i32, i32* %a
  %b_val3 = load i32, i32* %b
  %d_val3 = load i32, i32* %d
  %add4 = add i32 %b_val3, %d_val3
  %add5 = add i32 %a_val2, %add4
  %c_val3 = load i32, i32* %c
  %add6 = add i32 %add5, %c_val3
  ret i32 %add6
while_cond1:
  %b_val = load i32, i32* %b
  %icmp1 = icmp slt i32 %b_val, 10
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %b_val1 = load i32, i32* %b
  %add1 = add i32 %b_val1, 1
  store i32 %add1, i32* %b
  br label %while_cond2
while_after1:
  %b_val2 = load i32, i32* %b
  %sub2 = sub i32 %b_val2, 2
  store i32 %sub2, i32* %b
  br label %while_cond
while_cond2:
  %c_val = load i32, i32* %c
  %icmp2 = icmp eq i32 %c_val, 7
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %c_val1 = load i32, i32* %c
  %sub = sub i32 %c_val1, 1
  store i32 %sub, i32* %c
  br label %while_cond3
while_after2:
  %c_val2 = load i32, i32* %c
  %add3 = add i32 %c_val2, 1
  store i32 %add3, i32* %c
  br label %while_cond1
while_cond3:
  %d_val = load i32, i32* %d
  %icmp3 = icmp slt i32 %d_val, 20
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %d_val1 = load i32, i32* %d
  %add2 = add i32 %d_val1, 3
  store i32 %add2, i32* %d
  br label %while_cond3
while_after3:
  %d_val2 = load i32, i32* %d
  %sub1 = sub i32 %d_val2, 1
  store i32 %sub1, i32* %d
  br label %while_cond2
}

define i32 @main() {
entry:
  ret i32 %add6
}

