@size = global [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@to = global [10 x [10 x i32]] [[10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]]
@cap = global [10 x [10 x i32]] [[10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]]
@rev = global [10 x [10 x i32]] [[10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0], [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]]
@used = global [10 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
define void @my_memset(i32* %arg0, i32 %arg1, i32 %arg2) {
entry:
  %i11 = alloca i32
  %n11 = alloca i32
  %val11 = alloca i32
  %arr11 = alloca i32*
  store i32* %arg0, i32** %arr11
  store i32 %arg1, i32* %val11
  store i32 %arg2, i32* %n11
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* %n11
  %icmp1 = icmp slt i32 %i_val1, %n_val1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %val_val1 = load i32, i32* %val11
  %arr_val1 = load i32*, i32** %arr11
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr i32, i32* %arr_val1, i32 %i_val2
  store i32 %val_val1, i32* %gep1
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %i_val3, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  ret void
}

define void @add_node(i32 %arg0, i32 %arg1, i32 %arg2) {
entry:
  %c11 = alloca i32
  %v11 = alloca i32
  %u11 = alloca i32
  store i32 %arg0, i32* %u11
  store i32 %arg1, i32* %v11
  store i32 %arg2, i32* %c11
  %v_val1 = load i32, i32* %v11
  %u_val1 = load i32, i32* %u11
  %u_val2 = load i32, i32* %u11
  %gep1 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val2
  %load1 = load i32, i32* %gep1
  %gep2 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %u_val1, i32 %load1
  store i32 %v_val1, i32* %gep2
  %c_val1 = load i32, i32* %c11
  %u_val3 = load i32, i32* %u11
  %u_val4 = load i32, i32* %u11
  %gep3 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val4
  %load2 = load i32, i32* %gep3
  %gep4 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %u_val3, i32 %load2
  store i32 %c_val1, i32* %gep4
  %v_val2 = load i32, i32* %v11
  %gep5 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val2
  %load3 = load i32, i32* %gep5
  %u_val5 = load i32, i32* %u11
  %u_val6 = load i32, i32* %u11
  %gep6 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val6
  %load4 = load i32, i32* %gep6
  %gep7 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @rev, i32 0, i32 %u_val5, i32 %load4
  store i32 %load3, i32* %gep7
  %u_val7 = load i32, i32* %u11
  %v_val3 = load i32, i32* %v11
  %v_val4 = load i32, i32* %v11
  %gep8 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val4
  %load5 = load i32, i32* %gep8
  %gep9 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %v_val3, i32 %load5
  store i32 %u_val7, i32* %gep9
  %v_val5 = load i32, i32* %v11
  %v_val6 = load i32, i32* %v11
  %gep10 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val6
  %load6 = load i32, i32* %gep10
  %gep11 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %v_val5, i32 %load6
  store i32 0, i32* %gep11
  %u_val8 = load i32, i32* %u11
  %gep12 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val8
  %load7 = load i32, i32* %gep12
  %v_val7 = load i32, i32* %v11
  %v_val8 = load i32, i32* %v11
  %gep13 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val8
  %load8 = load i32, i32* %gep13
  %gep14 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @rev, i32 0, i32 %v_val7, i32 %load8
  store i32 %load7, i32* %gep14
  %u_val9 = load i32, i32* %u11
  %gep15 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val9
  %load9 = load i32, i32* %gep15
  %add1 = add i32 %load9, 1
  %u_val10 = load i32, i32* %u11
  %gep16 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %u_val10
  store i32 %add1, i32* %gep16
  %v_val9 = load i32, i32* %v11
  %gep17 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val9
  %load10 = load i32, i32* %gep17
  %add2 = add i32 %load10, 1
  %v_val10 = load i32, i32* %v11
  %gep18 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %v_val10
  store i32 %add2, i32* %gep18
  ret void
}

define i32 @dfs(i32 %arg0, i32 %arg1, i32 %arg2) {
entry:
  %d11 = alloca i32
  %min_f11 = alloca i32
  %i11 = alloca i32
  %f11 = alloca i32
  %t11 = alloca i32
  %s11 = alloca i32
  store i32 %arg0, i32* %s11
  store i32 %arg1, i32* %t11
  store i32 %arg2, i32* %f11
  %s_val1 = load i32, i32* %s11
  %t_val1 = load i32, i32* %t11
  %icmp1 = icmp eq i32 %s_val1, %t_val1
  br i1 %icmp1, label %then1, label %merge1
then1:
  %f_val1 = load i32, i32* %f11
  ret i32 %f_val1
merge1:
  %s_val2 = load i32, i32* %s11
  %gep1 = getelementptr [10 x i32], [10 x i32]* @used, i32 0, i32 %s_val2
  store i32 1, i32* %gep1
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %s_val3 = load i32, i32* %s11
  %gep2 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 %s_val3
  %load1 = load i32, i32* %gep2
  %icmp2 = icmp slt i32 %i_val1, %load1
  br i1 %icmp2, label %while_body1, label %while_after1
while_body1:
  %s_val4 = load i32, i32* %s11
  %i_val2 = load i32, i32* %i11
  %gep3 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %s_val4, i32 %i_val2
  %load2 = load i32, i32* %gep3
  %gep4 = getelementptr [10 x i32], [10 x i32]* @used, i32 0, i32 %load2
  %load3 = load i32, i32* %gep4
  %icmp3 = icmp ne i32 %load3, 0
  br i1 %icmp3, label %then2, label %merge2
while_after1:
  ret i32 0
then2:
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %i_val3, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
merge2:
  %s_val5 = load i32, i32* %s11
  %i_val4 = load i32, i32* %i11
  %gep5 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %s_val5, i32 %i_val4
  %load4 = load i32, i32* %gep5
  %icmp4 = icmp sle i32 %load4, 0
  br i1 %icmp4, label %then3, label %merge3
then3:
  %i_val5 = load i32, i32* %i11
  %add2 = add i32 %i_val5, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
merge3:
  %f_val2 = load i32, i32* %f11
  %s_val6 = load i32, i32* %s11
  %i_val6 = load i32, i32* %i11
  %gep6 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %s_val6, i32 %i_val6
  %load5 = load i32, i32* %gep6
  %icmp5 = icmp slt i32 %f_val2, %load5
  br i1 %icmp5, label %then4, label %else1
then4:
  %f_val3 = load i32, i32* %f11
  store i32 %f_val3, i32* %min_f11
  br label %merge4
else1:
  %s_val7 = load i32, i32* %s11
  %i_val7 = load i32, i32* %i11
  %gep7 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %s_val7, i32 %i_val7
  %load6 = load i32, i32* %gep7
  store i32 %load6, i32* %min_f11
  br label %merge4
merge4:
  %s_val8 = load i32, i32* %s11
  %i_val8 = load i32, i32* %i11
  %gep8 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %s_val8, i32 %i_val8
  %load7 = load i32, i32* %gep8
  %t_val2 = load i32, i32* %t11
  %min_f_val1 = load i32, i32* %min_f11
  %call1 = call i32 @dfs(i32 %load7, i32 %t_val2, i32 %min_f_val1)
  store i32 %call1, i32* %d11
  %d_val1 = load i32, i32* %d11
  %icmp6 = icmp sgt i32 %d_val1, 0
  br i1 %icmp6, label %then5, label %merge5
then5:
  %s_val9 = load i32, i32* %s11
  %i_val9 = load i32, i32* %i11
  %gep9 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %s_val9, i32 %i_val9
  %load8 = load i32, i32* %gep9
  %d_val2 = load i32, i32* %d11
  %sub1 = sub i32 %load8, %d_val2
  %s_val10 = load i32, i32* %s11
  %i_val10 = load i32, i32* %i11
  %gep10 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %s_val10, i32 %i_val10
  store i32 %sub1, i32* %gep10
  %s_val11 = load i32, i32* %s11
  %i_val11 = load i32, i32* %i11
  %gep11 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %s_val11, i32 %i_val11
  %load9 = load i32, i32* %gep11
  %s_val12 = load i32, i32* %s11
  %i_val12 = load i32, i32* %i11
  %gep12 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @rev, i32 0, i32 %s_val12, i32 %i_val12
  %load10 = load i32, i32* %gep12
  %gep13 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %load9, i32 %load10
  %load11 = load i32, i32* %gep13
  %d_val3 = load i32, i32* %d11
  %add3 = add i32 %load11, %d_val3
  %s_val13 = load i32, i32* %s11
  %i_val13 = load i32, i32* %i11
  %gep14 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @to, i32 0, i32 %s_val13, i32 %i_val13
  %load12 = load i32, i32* %gep14
  %s_val14 = load i32, i32* %s11
  %i_val14 = load i32, i32* %i11
  %gep15 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @rev, i32 0, i32 %s_val14, i32 %i_val14
  %load13 = load i32, i32* %gep15
  %gep16 = getelementptr [10 x [10 x i32]], [10 x [10 x i32]]* @cap, i32 0, i32 %load12, i32 %load13
  store i32 %add3, i32* %gep16
  %d_val4 = load i32, i32* %d11
  ret i32 %d_val4
merge5:
  %i_val15 = load i32, i32* %i11
  %add4 = add i32 %i_val15, 1
  store i32 %add4, i32* %i11
  br label %while_cond1
}

define i32 @max_flow(i32 %arg0, i32 %arg1) {
entry:
  %f11 = alloca i32
  %flow11 = alloca i32
  %t11 = alloca i32
  %s11 = alloca i32
  store i32 %arg0, i32* %s11
  store i32 %arg1, i32* %t11
  store i32 0, i32* %flow11
  br label %while_cond1
while_cond1:
  %icmp1 = icmp ne i32 1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %gep1 = getelementptr [10 x i32], [10 x i32]* @used, i32 0, i32 0
  call void @my_memset(i32* %gep1, i32 0, i32 10)
  %s_val1 = load i32, i32* %s11
  %t_val1 = load i32, i32* %t11
  %call1 = call i32 @dfs(i32 %s_val1, i32 %t_val1, i32 1879048192)
  store i32 %call1, i32* %f11
  %f_val1 = load i32, i32* %f11
  %icmp2 = icmp eq i32 %f_val1, 0
  br i1 %icmp2, label %then1, label %merge1
while_after1:
  ret i32 0
then1:
  %flow_val1 = load i32, i32* %flow11
  ret i32 %flow_val1
merge1:
  %flow_val2 = load i32, i32* %flow11
  %f_val2 = load i32, i32* %f11
  %add1 = add i32 %flow_val2, %f_val2
  store i32 %add1, i32* %flow11
  br label %while_cond1
}

define i32 @main() {
entry:
  %c11 = alloca i32
  %v11 = alloca i32
  %u11 = alloca i32
  %E11 = alloca i32
  %V11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* %V11
  %call2 = call i32 @getint()
  store i32 %call2, i32* %E11
  %gep1 = getelementptr [10 x i32], [10 x i32]* @size, i32 0, i32 0
  call void @my_memset(i32* %gep1, i32 0, i32 10)
  br label %while_cond1
while_cond1:
  %E_val1 = load i32, i32* %E11
  %icmp1 = icmp sgt i32 %E_val1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call3 = call i32 @getint()
  store i32 %call3, i32* %u11
  %call4 = call i32 @getint()
  store i32 %call4, i32* %v11
  %call5 = call i32 @getint()
  store i32 %call5, i32* %c11
  %u_val1 = load i32, i32* %u11
  %v_val1 = load i32, i32* %v11
  %c_val1 = load i32, i32* %c11
  call void @add_node(i32 %u_val1, i32 %v_val1, i32 %c_val1)
  %E_val2 = load i32, i32* %E11
  %sub1 = sub i32 %E_val2, 1
  store i32 %sub1, i32* %E11
  br label %while_cond1
while_after1:
  %V_val1 = load i32, i32* %V11
  %call6 = call i32 @max_flow(i32 1, i32 %V_val1)
  call void @putint(i32 %call6)
  call void @putch(i32 10)
  ret i32 0
}

declare i32 @getint()
declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
