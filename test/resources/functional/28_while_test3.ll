define i32 @EightWhile() {
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
  %add8 = add i32 %b_val3, %d_val3
  %add9 = add i32 %a_val2, %add8
  %c_val3 = load i32, i32* %c
  %add10 = add i32 %add9, %c_val3
  %e_val3 = load i32, i32* %e
  %d_val4 = load i32, i32* %d
  %add11 = add i32 %e_val3, %d_val4
  %g_val3 = load i32, i32* %g
  %sub7 = sub i32 %add11, %g_val3
  %h_val3 = load i32, i32* %h
  %add12 = add i32 %sub7, %h_val3
  %sub8 = sub i32 %add10, %add12
  ret i32 %sub8
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
  %sub6 = sub i32 %b_val2, 2
  store i32 %sub6, i32* %b
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
  %add7 = add i32 %c_val2, 1
  store i32 %add7, i32* %c
  br label %while_cond1
while_cond3:
  %d_val = load i32, i32* %d
  %icmp3 = icmp slt i32 %d_val, 20
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %d_val1 = load i32, i32* %d
  %add2 = add i32 %d_val1, 3
  store i32 %add2, i32* %d
  br label %while_cond4
while_after3:
  %d_val2 = load i32, i32* %d
  %sub5 = sub i32 %d_val2, 1
  store i32 %sub5, i32* %d
  br label %while_cond2
while_cond4:
  %e_val = load i32, i32* %e
  %icmp4 = icmp sgt i32 %e_val, 1
  br i1 %icmp4, label %while_body4, label %while_after4
while_body4:
  %e_val1 = load i32, i32* %e
  %sub1 = sub i32 %e_val1, 1
  store i32 %sub1, i32* %e
  br label %while_cond5
while_after4:
  %e_val2 = load i32, i32* %e
  %add6 = add i32 %e_val2, 1
  store i32 %add6, i32* %e
  br label %while_cond3
while_cond5:
  %f_val = load i32, i32* %f
  %icmp5 = icmp sgt i32 %f_val, 2
  br i1 %icmp5, label %while_body5, label %while_after5
while_body5:
  %f_val1 = load i32, i32* %f
  %sub2 = sub i32 %f_val1, 2
  store i32 %sub2, i32* %f
  br label %while_cond6
while_after5:
  %f_val2 = load i32, i32* %f
  %add5 = add i32 %f_val2, 1
  store i32 %add5, i32* %f
  br label %while_cond4
while_cond6:
  %g_val = load i32, i32* %g
  %icmp6 = icmp slt i32 %g_val, 3
  br i1 %icmp6, label %while_body6, label %while_after6
while_body6:
  %g_val1 = load i32, i32* %g
  %add3 = add i32 %g_val1, 10
  store i32 %add3, i32* %g
  br label %while_cond7
while_after6:
  %g_val2 = load i32, i32* %g
  %sub4 = sub i32 %g_val2, 8
  store i32 %sub4, i32* %g
  br label %while_cond5
while_cond7:
  %h_val = load i32, i32* %h
  %icmp7 = icmp slt i32 %h_val, 10
  br i1 %icmp7, label %while_body7, label %while_after7
while_body7:
  %h_val1 = load i32, i32* %h
  %add4 = add i32 %h_val1, 8
  store i32 %add4, i32* %h
  br label %while_cond7
while_after7:
  %h_val2 = load i32, i32* %h
  %sub3 = sub i32 %h_val2, 1
  store i32 %sub3, i32* %h
  br label %while_cond6
}

define i32 @main() {
entry:
  store i32 1, i32* %g
  store i32 2, i32* %h
  store i32 4, i32* %e
  store i32 6, i32* %f
  ret i32 6
}

