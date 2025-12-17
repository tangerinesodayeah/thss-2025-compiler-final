@e = global [16 x [16 x i32]] [[16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]]
@book = global [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@dis = global [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@n = global i32 0
@m = global i32 0
@v1 = global i32 0
@v2 = global i32 0
@w = global i32 0
define void @Dijkstra() {
entry:
  %j21 = alloca i32
  %and_res11 = alloca i32
  %k11 = alloca i32
  %min_index11 = alloca i32
  %min_num11 = alloca i32
  %j11 = alloca i32
  %i11 = alloca i32
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp sle i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 1, i32 %i_val2
  %load1 = load i32, i32* %gep1
  %i_val3 = load i32, i32* %i11
  %gep2 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %i_val3
  store i32 %load1, i32* %gep2
  %i_val4 = load i32, i32* %i11
  %gep3 = getelementptr [16 x i32], [16 x i32]* @book, i32 0, i32 %i_val4
  store i32 0, i32* %gep3
  %i_val5 = load i32, i32* %i11
  %add1 = add i32 %i_val5, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  %gep4 = getelementptr [16 x i32], [16 x i32]* @book, i32 0, i32 1
  store i32 1, i32* %gep4
  store i32 1, i32* %i11
  br label %while_cond2
while_cond2:
  %i_val6 = load i32, i32* %i11
  %n_val2 = load i32, i32* @n
  %sub1 = sub i32 %n_val2, 1
  %icmp2 = icmp sle i32 %i_val6, %sub1
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  store i32 65535, i32* %min_num11
  store i32 0, i32* %min_index11
  store i32 1, i32* %k11
  br label %while_cond3
while_after2:
  ret void
while_cond3:
  %k_val1 = load i32, i32* %k11
  %n_val3 = load i32, i32* @n
  %icmp3 = icmp sle i32 %k_val1, %n_val3
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %min_num_val1 = load i32, i32* %min_num11
  %k_val2 = load i32, i32* %k11
  %gep5 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %k_val2
  %load2 = load i32, i32* %gep5
  %icmp4 = icmp sgt i32 %min_num_val1, %load2
  br i1 %icmp4, label %and_rhs1, label %and_false1
while_after3:
  %min_index_val1 = load i32, i32* %min_index11
  %gep8 = getelementptr [16 x i32], [16 x i32]* @book, i32 0, i32 %min_index_val1
  store i32 1, i32* %gep8
  store i32 1, i32* %j21
  br label %while_cond4
then1:
  %k_val4 = load i32, i32* %k11
  %gep7 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %k_val4
  %load4 = load i32, i32* %gep7
  store i32 %load4, i32* %min_num11
  %k_val5 = load i32, i32* %k11
  store i32 %k_val5, i32* %min_index11
  br label %merge1
merge1:
  %k_val6 = load i32, i32* %k11
  %add2 = add i32 %k_val6, 1
  store i32 %add2, i32* %k11
  br label %while_cond3
and_rhs1:
  %k_val3 = load i32, i32* %k11
  %gep6 = getelementptr [16 x i32], [16 x i32]* @book, i32 0, i32 %k_val3
  %load3 = load i32, i32* %gep6
  %icmp5 = icmp eq i32 %load3, 0
  %zext1 = zext i1 %icmp5 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp6 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp6, label %then1, label %merge1
while_cond4:
  %j_val1 = load i32, i32* %j21
  %n_val4 = load i32, i32* @n
  %icmp7 = icmp sle i32 %j_val1, %n_val4
  br i1 %icmp7, label %while_body4, label %while_after4
while_body4:
  %min_index_val2 = load i32, i32* %min_index11
  %j_val2 = load i32, i32* %j21
  %gep9 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %min_index_val2, i32 %j_val2
  %load5 = load i32, i32* %gep9
  %icmp8 = icmp slt i32 %load5, 65535
  br i1 %icmp8, label %then2, label %merge2
while_after4:
  %i_val7 = load i32, i32* %i11
  %add6 = add i32 %i_val7, 1
  store i32 %add6, i32* %i11
  br label %while_cond2
then2:
  %j_val3 = load i32, i32* %j21
  %gep10 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %j_val3
  %load6 = load i32, i32* %gep10
  %min_index_val3 = load i32, i32* %min_index11
  %gep11 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %min_index_val3
  %load7 = load i32, i32* %gep11
  %min_index_val4 = load i32, i32* %min_index11
  %j_val4 = load i32, i32* %j21
  %gep12 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %min_index_val4, i32 %j_val4
  %load8 = load i32, i32* %gep12
  %add3 = add i32 %load7, %load8
  %icmp9 = icmp sgt i32 %load6, %add3
  br i1 %icmp9, label %then3, label %merge3
merge2:
  %j_val7 = load i32, i32* %j21
  %add5 = add i32 %j_val7, 1
  store i32 %add5, i32* %j21
  br label %while_cond4
then3:
  %min_index_val5 = load i32, i32* %min_index11
  %gep13 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %min_index_val5
  %load9 = load i32, i32* %gep13
  %min_index_val6 = load i32, i32* %min_index11
  %j_val5 = load i32, i32* %j21
  %gep14 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %min_index_val6, i32 %j_val5
  %load10 = load i32, i32* %gep14
  %add4 = add i32 %load9, %load10
  %j_val6 = load i32, i32* %j21
  %gep15 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %j_val6
  store i32 %add4, i32* %gep15
  br label %merge3
merge3:
  br label %merge2
}

define i32 @main() {
entry:
  %v11 = alloca i32
  %u11 = alloca i32
  %j11 = alloca i32
  %i11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* @n
  %call2 = call i32 @getint()
  store i32 %call2, i32* @m
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* @n
  %icmp1 = icmp sle i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  store i32 1, i32* %j11
  br label %while_cond2
while_after1:
  store i32 1, i32* %i11
  br label %while_cond3
while_cond2:
  %j_val1 = load i32, i32* %j11
  %n_val2 = load i32, i32* @n
  %icmp2 = icmp sle i32 %j_val1, %n_val2
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %i_val2 = load i32, i32* %i11
  %j_val2 = load i32, i32* %j11
  %icmp3 = icmp eq i32 %i_val2, %j_val2
  br i1 %icmp3, label %then1, label %else1
while_after2:
  %i_val5 = load i32, i32* %i11
  %add2 = add i32 %i_val5, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
then1:
  %i_val3 = load i32, i32* %i11
  %j_val3 = load i32, i32* %j11
  %gep1 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %i_val3, i32 %j_val3
  store i32 0, i32* %gep1
  br label %merge1
else1:
  %i_val4 = load i32, i32* %i11
  %j_val4 = load i32, i32* %j11
  %gep2 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %i_val4, i32 %j_val4
  store i32 65535, i32* %gep2
  br label %merge1
merge1:
  %j_val5 = load i32, i32* %j11
  %add1 = add i32 %j_val5, 1
  store i32 %add1, i32* %j11
  br label %while_cond2
while_cond3:
  %i_val6 = load i32, i32* %i11
  %m_val1 = load i32, i32* @m
  %icmp4 = icmp sle i32 %i_val6, %m_val1
  br i1 %icmp4, label %while_body3, label %while_after3
while_body3:
  %call3 = call i32 @getint()
  store i32 %call3, i32* %u11
  %call4 = call i32 @getint()
  store i32 %call4, i32* %v11
  %call5 = call i32 @getint()
  %u_val1 = load i32, i32* %u11
  %v_val1 = load i32, i32* %v11
  %gep3 = getelementptr [16 x [16 x i32]], [16 x [16 x i32]]* @e, i32 0, i32 %u_val1, i32 %v_val1
  store i32 %call5, i32* %gep3
  %i_val7 = load i32, i32* %i11
  %add3 = add i32 %i_val7, 1
  store i32 %add3, i32* %i11
  br label %while_cond3
while_after3:
  call void @Dijkstra()
  store i32 1, i32* %i11
  br label %while_cond4
while_cond4:
  %i_val8 = load i32, i32* %i11
  %n_val3 = load i32, i32* @n
  %icmp5 = icmp sle i32 %i_val8, %n_val3
  br i1 %icmp5, label %while_body4, label %while_after4
while_body4:
  %i_val9 = load i32, i32* %i11
  %gep4 = getelementptr [16 x i32], [16 x i32]* @dis, i32 0, i32 %i_val9
  %load1 = load i32, i32* %gep4
  call void @putint(i32 %load1)
  call void @putch(i32 32)
  %i_val10 = load i32, i32* %i11
  %add4 = add i32 %i_val10, 1
  store i32 %add4, i32* %i11
  br label %while_cond4
while_after4:
  call void @putch(i32 10)
  ret i32 0
}

declare i32 @getint()
declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
