@ans = global [50 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@sum = global i32 0
@n = global i32 0
@row = global [50 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@line1 = global [50 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@line2 = global [100 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
define void @printans() {
entry:
  %i11 = alloca i32
  %sum_val1 = load i32, i32* @sum
  %add1 = add i32 %sum_val1, 1
  store i32 %add1, i32* @sum
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp sle i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr [50 x i32], [50 x i32]* @ans, i32 0, i32 %i_val2
  %load1 = load i32, i32* %gep1
  call void @putint(i32 %load1)
  %i_val3 = load i32, i32* %i11
  %n_val2 = load i32, i32* @n
  %icmp2 = icmp eq i32 %i_val3, %n_val2
  br i1 %icmp2, label %then1, label %else1
while_after1:
  ret void
then1:
  call void @putch(i32 10)
  ret void
else1:
  call void @putch(i32 32)
  br label %merge1
merge1:
  %i_val4 = load i32, i32* %i11
  %add2 = add i32 %i_val4, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
define void @f(i32 %arg0) {
entry:
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  %i11 = alloca i32
  %step11 = alloca i32
  store i32 %arg0, i32* %step11
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp sle i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr [50 x i32], [50 x i32]* @row, i32 0, i32 %i_val2
  %load1 = load i32, i32* %gep1
  %icmp2 = icmp ne i32 %load1, 1
  br i1 %icmp2, label %and_rhs2, label %and_false2
while_after1:
  ret void
then1:
  %i_val5 = load i32, i32* %i11
  %step_val3 = load i32, i32* %step11
  %gep4 = getelementptr [50 x i32], [50 x i32]* @ans, i32 0, i32 %step_val3
  store i32 %i_val5, i32* %gep4
  %step_val4 = load i32, i32* %step11
  %n_val3 = load i32, i32* @n
  %icmp8 = icmp eq i32 %step_val4, %n_val3
  br i1 %icmp8, label %then2, label %merge2
merge1:
  %i_val12 = load i32, i32* %i11
  %add8 = add i32 %i_val12, 1
  store i32 %add8, i32* %i11
  br label %while_cond1
and_rhs1:
  %n_val2 = load i32, i32* @n
  %step_val2 = load i32, i32* %step11
  %add2 = add i32 %n_val2, %step_val2
  %i_val4 = load i32, i32* %i11
  %sub1 = sub i32 %add2, %i_val4
  %gep3 = getelementptr [100 x i32], [100 x i32]* @line2, i32 0, i32 %sub1
  %load3 = load i32, i32* %gep3
  %icmp5 = icmp eq i32 %load3, 0
  %zext2 = zext i1 %icmp5 to i32
  %icmp6 = icmp ne i32 %zext2, 0
  %zext3 = zext i1 %icmp6 to i32
  store i32 %zext3, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val2 = load i32, i32* %and_res11
  %icmp7 = icmp ne i32 %and_res_val2, 0
  br i1 %icmp7, label %then1, label %merge1
and_rhs2:
  %step_val1 = load i32, i32* %step11
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %step_val1, %i_val3
  %gep2 = getelementptr [50 x i32], [50 x i32]* @line1, i32 0, i32 %add1
  %load2 = load i32, i32* %gep2
  %icmp3 = icmp eq i32 %load2, 0
  %zext1 = zext i1 %icmp3 to i32
  store i32 %zext1, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val1 = load i32, i32* %and_res21
  %icmp4 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp4, label %and_rhs1, label %and_false1
then2:
  call void @printans()
  br label %merge2
merge2:
  %i_val6 = load i32, i32* %i11
  %gep5 = getelementptr [50 x i32], [50 x i32]* @row, i32 0, i32 %i_val6
  store i32 1, i32* %gep5
  %step_val5 = load i32, i32* %step11
  %i_val7 = load i32, i32* %i11
  %add3 = add i32 %step_val5, %i_val7
  %gep6 = getelementptr [50 x i32], [50 x i32]* @line1, i32 0, i32 %add3
  store i32 1, i32* %gep6
  %n_val4 = load i32, i32* @n
  %step_val6 = load i32, i32* %step11
  %add4 = add i32 %n_val4, %step_val6
  %i_val8 = load i32, i32* %i11
  %sub2 = sub i32 %add4, %i_val8
  %gep7 = getelementptr [100 x i32], [100 x i32]* @line2, i32 0, i32 %sub2
  store i32 1, i32* %gep7
  %step_val7 = load i32, i32* %step11
  %add5 = add i32 %step_val7, 1
  call void @f(i32 %add5)
  %i_val9 = load i32, i32* %i11
  %gep8 = getelementptr [50 x i32], [50 x i32]* @row, i32 0, i32 %i_val9
  store i32 0, i32* %gep8
  %step_val8 = load i32, i32* %step11
  %i_val10 = load i32, i32* %i11
  %add6 = add i32 %step_val8, %i_val10
  %gep9 = getelementptr [50 x i32], [50 x i32]* @line1, i32 0, i32 %add6
  store i32 0, i32* %gep9
  %n_val5 = load i32, i32* @n
  %step_val9 = load i32, i32* %step11
  %add7 = add i32 %n_val5, %step_val9
  %i_val11 = load i32, i32* %i11
  %sub3 = sub i32 %add7, %i_val11
  %gep10 = getelementptr [100 x i32], [100 x i32]* @line2, i32 0, i32 %sub3
  store i32 0, i32* %gep10
  br label %merge1
}

define i32 @main() {
entry:
  %N11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* %N11
  br label %while_cond1
while_cond1:
  %N_val1 = load i32, i32* %N11
  %icmp1 = icmp sgt i32 %N_val1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call2 = call i32 @getint()
  store i32 %call2, i32* @n
  call void @f(i32 1)
  %N_val2 = load i32, i32* %N11
  %sub1 = sub i32 %N_val2, 1
  store i32 %sub1, i32* %N11
  br label %while_cond1
while_after1:
  %sum_val1 = load i32, i32* @sum
  ret i32 %sum_val1
}

declare i32 @getint()
