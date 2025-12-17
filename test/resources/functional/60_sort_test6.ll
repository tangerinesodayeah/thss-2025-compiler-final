@n = global i32 0
define i32 @counting_sort(i32* %arg0, i32* %arg1, i32 %arg2) {
entry:
  %k11 = alloca i32
  %j11 = alloca i32
  %i11 = alloca i32
  %count_arr11 = alloca [10 x i32]
  %n11 = alloca i32
  %sorted_arr11 = alloca i32*
  %ini_arr11 = alloca i32*
  store i32* %arg0, i32** %ini_arr11
  store i32* %arg1, i32** %sorted_arr11
  store i32 %arg2, i32* %n11
  store i32 0, i32* %k11
  store i32 0, i32* %i11
  store i32 0, i32* %j11
  br label %while_cond1
while_cond1:
  %k_val1 = load i32, i32* %k11
  %icmp1 = icmp slt i32 %k_val1, 10
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %k_val2 = load i32, i32* %k11
  %gep1 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %k_val2
  store i32 0, i32* %gep1
  %k_val3 = load i32, i32* %k11
  %add1 = add i32 %k_val3, 1
  store i32 %add1, i32* %k11
  br label %while_cond1
while_after1:
  br label %while_cond2
while_cond2:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* %n11
  %icmp2 = icmp slt i32 %i_val1, %n_val1
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %ini_arr_val1 = load i32*, i32** %ini_arr11
  %i_val2 = load i32, i32* %i11
  %gep2 = getelementptr i32, i32* %ini_arr_val1, i32 %i_val2
  %load1 = load i32, i32* %gep2
  %gep3 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %load1
  %load2 = load i32, i32* %gep3
  %add2 = add i32 %load2, 1
  %ini_arr_val2 = load i32*, i32** %ini_arr11
  %i_val3 = load i32, i32* %i11
  %gep4 = getelementptr i32, i32* %ini_arr_val2, i32 %i_val3
  %load3 = load i32, i32* %gep4
  %gep5 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %load3
  store i32 %add2, i32* %gep5
  %i_val4 = load i32, i32* %i11
  %add3 = add i32 %i_val4, 1
  store i32 %add3, i32* %i11
  br label %while_cond2
while_after2:
  store i32 1, i32* %k11
  br label %while_cond3
while_cond3:
  %k_val4 = load i32, i32* %k11
  %icmp3 = icmp slt i32 %k_val4, 10
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %k_val5 = load i32, i32* %k11
  %gep6 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %k_val5
  %load4 = load i32, i32* %gep6
  %k_val6 = load i32, i32* %k11
  %sub1 = sub i32 %k_val6, 1
  %gep7 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %sub1
  %load5 = load i32, i32* %gep7
  %add4 = add i32 %load4, %load5
  %k_val7 = load i32, i32* %k11
  %gep8 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %k_val7
  store i32 %add4, i32* %gep8
  %k_val8 = load i32, i32* %k11
  %add5 = add i32 %k_val8, 1
  store i32 %add5, i32* %k11
  br label %while_cond3
while_after3:
  %n_val2 = load i32, i32* %n11
  store i32 %n_val2, i32* %j11
  br label %while_cond4
while_cond4:
  %j_val1 = load i32, i32* %j11
  %icmp4 = icmp sgt i32 %j_val1, 0
  br i1 %icmp4, label %while_body4, label %while_after4
while_body4:
  %ini_arr_val3 = load i32*, i32** %ini_arr11
  %j_val2 = load i32, i32* %j11
  %sub2 = sub i32 %j_val2, 1
  %gep9 = getelementptr i32, i32* %ini_arr_val3, i32 %sub2
  %load6 = load i32, i32* %gep9
  %gep10 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %load6
  %load7 = load i32, i32* %gep10
  %sub3 = sub i32 %load7, 1
  %ini_arr_val4 = load i32*, i32** %ini_arr11
  %j_val3 = load i32, i32* %j11
  %sub4 = sub i32 %j_val3, 1
  %gep11 = getelementptr i32, i32* %ini_arr_val4, i32 %sub4
  %load8 = load i32, i32* %gep11
  %gep12 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %load8
  store i32 %sub3, i32* %gep12
  %ini_arr_val5 = load i32*, i32** %ini_arr11
  %j_val4 = load i32, i32* %j11
  %sub5 = sub i32 %j_val4, 1
  %gep13 = getelementptr i32, i32* %ini_arr_val5, i32 %sub5
  %load9 = load i32, i32* %gep13
  %sorted_arr_val1 = load i32*, i32** %sorted_arr11
  %ini_arr_val6 = load i32*, i32** %ini_arr11
  %j_val5 = load i32, i32* %j11
  %sub6 = sub i32 %j_val5, 1
  %gep14 = getelementptr i32, i32* %ini_arr_val6, i32 %sub6
  %load10 = load i32, i32* %gep14
  %gep15 = getelementptr [10 x i32], [10 x i32]* %count_arr11, i32 0, i32 %load10
  %load11 = load i32, i32* %gep15
  %gep16 = getelementptr i32, i32* %sorted_arr_val1, i32 %load11
  store i32 %load9, i32* %gep16
  %j_val6 = load i32, i32* %j11
  %sub7 = sub i32 %j_val6, 1
  store i32 %sub7, i32* %j11
  br label %while_cond4
while_after4:
  ret i32 0
}

define i32 @main() {
entry:
  %tmp11 = alloca i32
  %b11 = alloca [10 x i32]
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
  %gep11 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 0
  %gep12 = getelementptr [10 x i32], [10 x i32]* %b11, i32 0, i32 0
  %n_val1 = load i32, i32* @n
  %call1 = call i32 @counting_sort(i32* %gep11, i32* %gep12, i32 %n_val1)
  store i32 %call1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val2 = load i32, i32* @n
  %icmp1 = icmp slt i32 %i_val1, %n_val2
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %gep13 = getelementptr [10 x i32], [10 x i32]* %b11, i32 0, i32 %i_val2
  %load1 = load i32, i32* %gep13
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
