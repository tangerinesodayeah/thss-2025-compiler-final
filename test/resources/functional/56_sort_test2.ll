@n = global i32 0
define i32 @insertsort(i32* %arg0) {
entry:
  %and_res11 = alloca i32
  %j11 = alloca i32
  %temp11 = alloca i32
  %i11 = alloca i32
  %a11 = alloca i32*
  store i32* %arg0, i32** %a11
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp slt i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %a_val1 = load i32*, i32** %a11
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr i32, i32* %a_val1, i32 %i_val2
  %load1 = load i32, i32* %gep1
  store i32 %load1, i32* %temp11
  %i_val3 = load i32, i32* %i11
  %sub1 = sub i32 %i_val3, 1
  store i32 %sub1, i32* %j11
  br label %while_cond2
while_after1:
  ret i32 0
while_cond2:
  %j_val1 = load i32, i32* %j11
  %sub2 = sub i32 0, 1
  %icmp2 = icmp sgt i32 %j_val1, %sub2
  br i1 %icmp2, label %and_rhs1, label %and_false1
while_body2:
  %a_val3 = load i32*, i32** %a11
  %j_val3 = load i32, i32* %j11
  %gep3 = getelementptr i32, i32* %a_val3, i32 %j_val3
  %load3 = load i32, i32* %gep3
  %a_val4 = load i32*, i32** %a11
  %j_val4 = load i32, i32* %j11
  %add1 = add i32 %j_val4, 1
  %gep4 = getelementptr i32, i32* %a_val4, i32 %add1
  store i32 %load3, i32* %gep4
  %j_val5 = load i32, i32* %j11
  %sub3 = sub i32 %j_val5, 1
  store i32 %sub3, i32* %j11
  br label %while_cond2
while_after2:
  %temp_val2 = load i32, i32* %temp11
  %a_val5 = load i32*, i32** %a11
  %j_val6 = load i32, i32* %j11
  %add2 = add i32 %j_val6, 1
  %gep5 = getelementptr i32, i32* %a_val5, i32 %add2
  store i32 %temp_val2, i32* %gep5
  %i_val4 = load i32, i32* %i11
  %add3 = add i32 %i_val4, 1
  store i32 %add3, i32* %i11
  br label %while_cond1
and_rhs1:
  %temp_val1 = load i32, i32* %temp11
  %a_val2 = load i32*, i32** %a11
  %j_val2 = load i32, i32* %j11
  %gep2 = getelementptr i32, i32* %a_val2, i32 %j_val2
  %load2 = load i32, i32* %gep2
  %icmp3 = icmp slt i32 %temp_val1, %load2
  %zext1 = zext i1 %icmp3 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp4 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp4, label %while_body2, label %while_after2
}

define i32 @main() {
entry:
  %tmp11 = alloca i32
  %i11 = alloca i32
  %a11 = alloca [10 x i32]
  store i32 10, i32* @n
  %gep1 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 0
  store i32 4, i32* %gep1
  %gep2 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 1
  store i32 3, i32* %gep2
  %gep3 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 2
  store i32 9, i32* %gep3
  %gep4 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 3
  store i32 2, i32* %gep4
  %gep5 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 4
  store i32 0, i32* %gep5
  %gep6 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 5
  store i32 1, i32* %gep6
  %gep7 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 6
  store i32 6, i32* %gep7
  %gep8 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 7
  store i32 5, i32* %gep8
  %gep9 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 8
  store i32 7, i32* %gep9
  %gep10 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 9
  store i32 8, i32* %gep10
  %gep11 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 0
  %call1 = call i32 @insertsort(i32* %gep11)
  store i32 %call1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp slt i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %gep12 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %i_val2
  %load1 = load i32, i32* %gep12
  store i32 %load1, i32* %tmp11
  %tmp_val1 = load i32, i32* %tmp11
  call void @putint(i32 %tmp_val1)
  store i32 10, i32* %tmp11
  %tmp_val2 = load i32, i32* %tmp11
  call void @putch(i32 %tmp_val2)
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %i_val3, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  ret i32 0
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
