@n = global i32 0
define i32 @QuickSort(i32* %arg0, i32 %arg1, i32 %arg2) {
entry:
  %tmp11 = alloca i32
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  %k11 = alloca i32
  %j11 = alloca i32
  %i11 = alloca i32
  %high11 = alloca i32
  %low11 = alloca i32
  %arr11 = alloca i32*
  store i32* %arg0, i32** %arr11
  store i32 %arg1, i32* %low11
  store i32 %arg2, i32* %high11
  %low_val1 = load i32, i32* %low11
  %high_val1 = load i32, i32* %high11
  %icmp1 = icmp slt i32 %low_val1, %high_val1
  br i1 %icmp1, label %then1, label %merge1
then1:
  %low_val2 = load i32, i32* %low11
  store i32 %low_val2, i32* %i11
  %high_val2 = load i32, i32* %high11
  store i32 %high_val2, i32* %j11
  %arr_val1 = load i32*, i32** %arr11
  %low_val3 = load i32, i32* %low11
  %gep1 = getelementptr i32, i32* %arr_val1, i32 %low_val3
  %load1 = load i32, i32* %gep1
  store i32 %load1, i32* %k11
  br label %while_cond1
merge1:
  ret i32 0
while_cond1:
  %i_val1 = load i32, i32* %i11
  %j_val1 = load i32, i32* %j11
  %icmp2 = icmp slt i32 %i_val1, %j_val1
  br i1 %icmp2, label %while_body1, label %while_after1
while_body1:
  br label %while_cond2
while_after1:
  %k_val3 = load i32, i32* %k11
  %arr_val8 = load i32*, i32** %arr11
  %i_val11 = load i32, i32* %i11
  %gep8 = getelementptr i32, i32* %arr_val8, i32 %i_val11
  store i32 %k_val3, i32* %gep8
  %i_val12 = load i32, i32* %i11
  %sub4 = sub i32 %i_val12, 1
  store i32 %sub4, i32* %tmp11
  %arr_val9 = load i32*, i32** %arr11
  %low_val4 = load i32, i32* %low11
  %tmp_val1 = load i32, i32* %tmp11
  %call1 = call i32 @QuickSort(i32* %arr_val9, i32 %low_val4, i32 %tmp_val1)
  store i32 %call1, i32* %tmp11
  %i_val13 = load i32, i32* %i11
  %add3 = add i32 %i_val13, 1
  store i32 %add3, i32* %tmp11
  %arr_val10 = load i32*, i32** %arr11
  %tmp_val2 = load i32, i32* %tmp11
  %high_val3 = load i32, i32* %high11
  %call2 = call i32 @QuickSort(i32* %arr_val10, i32 %tmp_val2, i32 %high_val3)
  store i32 %call2, i32* %tmp11
  br label %merge1
while_cond2:
  %i_val2 = load i32, i32* %i11
  %j_val2 = load i32, i32* %j11
  %icmp3 = icmp slt i32 %i_val2, %j_val2
  br i1 %icmp3, label %and_rhs1, label %and_false1
while_body2:
  %j_val4 = load i32, i32* %j11
  %sub2 = sub i32 %j_val4, 1
  store i32 %sub2, i32* %j11
  br label %while_cond2
while_after2:
  %i_val3 = load i32, i32* %i11
  %j_val5 = load i32, i32* %j11
  %icmp6 = icmp slt i32 %i_val3, %j_val5
  br i1 %icmp6, label %then2, label %merge2
and_rhs1:
  %arr_val2 = load i32*, i32** %arr11
  %j_val3 = load i32, i32* %j11
  %gep2 = getelementptr i32, i32* %arr_val2, i32 %j_val3
  %load2 = load i32, i32* %gep2
  %k_val1 = load i32, i32* %k11
  %sub1 = sub i32 %k_val1, 1
  %icmp4 = icmp sgt i32 %load2, %sub1
  %zext1 = zext i1 %icmp4 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp5 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp5, label %while_body2, label %while_after2
then2:
  %arr_val3 = load i32*, i32** %arr11
  %j_val6 = load i32, i32* %j11
  %gep3 = getelementptr i32, i32* %arr_val3, i32 %j_val6
  %load3 = load i32, i32* %gep3
  %arr_val4 = load i32*, i32** %arr11
  %i_val4 = load i32, i32* %i11
  %gep4 = getelementptr i32, i32* %arr_val4, i32 %i_val4
  store i32 %load3, i32* %gep4
  %i_val5 = load i32, i32* %i11
  %add1 = add i32 %i_val5, 1
  store i32 %add1, i32* %i11
  br label %merge2
merge2:
  br label %while_cond3
while_cond3:
  %i_val6 = load i32, i32* %i11
  %j_val7 = load i32, i32* %j11
  %icmp7 = icmp slt i32 %i_val6, %j_val7
  br i1 %icmp7, label %and_rhs2, label %and_false2
while_body3:
  %i_val8 = load i32, i32* %i11
  %add2 = add i32 %i_val8, 1
  store i32 %add2, i32* %i11
  br label %while_cond3
while_after3:
  %i_val9 = load i32, i32* %i11
  %j_val8 = load i32, i32* %j11
  %icmp10 = icmp slt i32 %i_val9, %j_val8
  br i1 %icmp10, label %then3, label %merge3
and_rhs2:
  %arr_val5 = load i32*, i32** %arr11
  %i_val7 = load i32, i32* %i11
  %gep5 = getelementptr i32, i32* %arr_val5, i32 %i_val7
  %load4 = load i32, i32* %gep5
  %k_val2 = load i32, i32* %k11
  %icmp8 = icmp slt i32 %load4, %k_val2
  %zext2 = zext i1 %icmp8 to i32
  store i32 %zext2, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val2 = load i32, i32* %and_res21
  %icmp9 = icmp ne i32 %and_res_val2, 0
  br i1 %icmp9, label %while_body3, label %while_after3
then3:
  %arr_val6 = load i32*, i32** %arr11
  %i_val10 = load i32, i32* %i11
  %gep6 = getelementptr i32, i32* %arr_val6, i32 %i_val10
  %load5 = load i32, i32* %gep6
  %arr_val7 = load i32*, i32** %arr11
  %j_val9 = load i32, i32* %j11
  %gep7 = getelementptr i32, i32* %arr_val7, i32 %j_val9
  store i32 %load5, i32* %gep7
  %j_val10 = load i32, i32* %j11
  %sub3 = sub i32 %j_val10, 1
  store i32 %sub3, i32* %j11
  br label %merge3
merge3:
  br label %while_cond1
}

define i32 @main() {
entry:
  %tmp21 = alloca i32
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
  store i32 0, i32* %i11
  store i32 9, i32* %tmp11
  %gep11 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 0
  %i_val1 = load i32, i32* %i11
  %tmp_val1 = load i32, i32* %tmp11
  %call1 = call i32 @QuickSort(i32* %gep11, i32 %i_val1, i32 %tmp_val1)
  store i32 %call1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val2 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp slt i32 %i_val2, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val3 = load i32, i32* %i11
  %gep12 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %i_val3
  %load1 = load i32, i32* %gep12
  store i32 %load1, i32* %tmp21
  %tmp_val2 = load i32, i32* %tmp21
  call void @putint(i32 %tmp_val2)
  store i32 10, i32* %tmp21
  %tmp_val3 = load i32, i32* %tmp21
  call void @putch(i32 %tmp_val3)
  %i_val4 = load i32, i32* %i11
  %add1 = add i32 %i_val4, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  ret i32 0
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
