@g = global i32 0
@h = global i32 0
@f = global i32 0
@e = global i32 0
define i32 @EightWhile() {
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
  %add9 = add i32 %b_val4, %d_val4
  %add10 = add i32 %a_val3, %add9
  %c_val4 = load i32, i32* %c11
  %add11 = add i32 %add10, %c_val4
  %e_val4 = load i32, i32* @e
  %d_val5 = load i32, i32* %d11
  %add12 = add i32 %e_val4, %d_val5
  %g_val4 = load i32, i32* @g
  %sub8 = sub i32 %add12, %g_val4
  %h_val4 = load i32, i32* @h
  %add13 = add i32 %sub8, %h_val4
  %sub9 = sub i32 %add11, %add13
  ret i32 %sub9
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
  %sub7 = sub i32 %b_val3, 2
  store i32 %sub7, i32* %b11
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
  %add8 = add i32 %c_val3, 1
  store i32 %add8, i32* %c11
  br label %while_cond2
while_cond4:
  %d_val1 = load i32, i32* %d11
  %icmp4 = icmp slt i32 %d_val1, 20
  br i1 %icmp4, label %while_body4, label %while_after4
while_body4:
  %d_val2 = load i32, i32* %d11
  %add3 = add i32 %d_val2, 3
  store i32 %add3, i32* %d11
  br label %while_cond5
while_after4:
  %d_val3 = load i32, i32* %d11
  %sub6 = sub i32 %d_val3, 1
  store i32 %sub6, i32* %d11
  br label %while_cond3
while_cond5:
  %e_val1 = load i32, i32* @e
  %icmp5 = icmp sgt i32 %e_val1, 1
  br i1 %icmp5, label %while_body5, label %while_after5
while_body5:
  %e_val2 = load i32, i32* @e
  %sub2 = sub i32 %e_val2, 1
  store i32 %sub2, i32* @e
  br label %while_cond6
while_after5:
  %e_val3 = load i32, i32* @e
  %add7 = add i32 %e_val3, 1
  store i32 %add7, i32* @e
  br label %while_cond4
while_cond6:
  %f_val1 = load i32, i32* @f
  %icmp6 = icmp sgt i32 %f_val1, 2
  br i1 %icmp6, label %while_body6, label %while_after6
while_body6:
  %f_val2 = load i32, i32* @f
  %sub3 = sub i32 %f_val2, 2
  store i32 %sub3, i32* @f
  br label %while_cond7
while_after6:
  %f_val3 = load i32, i32* @f
  %add6 = add i32 %f_val3, 1
  store i32 %add6, i32* @f
  br label %while_cond5
while_cond7:
  %g_val1 = load i32, i32* @g
  %icmp7 = icmp slt i32 %g_val1, 3
  br i1 %icmp7, label %while_body7, label %while_after7
while_body7:
  %g_val2 = load i32, i32* @g
  %add4 = add i32 %g_val2, 10
  store i32 %add4, i32* @g
  br label %while_cond8
while_after7:
  %g_val3 = load i32, i32* @g
  %sub5 = sub i32 %g_val3, 8
  store i32 %sub5, i32* @g
  br label %while_cond6
while_cond8:
  %h_val1 = load i32, i32* @h
  %icmp8 = icmp slt i32 %h_val1, 10
  br i1 %icmp8, label %while_body8, label %while_after8
while_body8:
  %h_val2 = load i32, i32* @h
  %add5 = add i32 %h_val2, 8
  store i32 %add5, i32* @h
  br label %while_cond8
while_after8:
  %h_val3 = load i32, i32* @h
  %sub4 = sub i32 %h_val3, 1
  store i32 %sub4, i32* @h
  br label %while_cond7
}

define i32 @main() {
entry:
  store i32 1, i32* @g
  store i32 2, i32* @h
  store i32 4, i32* @e
  store i32 6, i32* @f
  %call1 = call i32 @EightWhile()
  ret i32 %call1
}

