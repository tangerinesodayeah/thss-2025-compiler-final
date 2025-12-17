@array = global [110 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0]
@n = global i32 0
define void @init(i32 %arg0) {
entry:
  %i11 = alloca i32
  %n11 = alloca i32
  store i32 %arg0, i32* %n11
  store i32 1, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %n_val1 = load i32, i32* %n11
  %n_val2 = load i32, i32* %n11
  %mul1 = mul i32 %n_val1, %n_val2
  %add1 = add i32 %mul1, 1
  %icmp1 = icmp sle i32 %i_val1, %add1
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %sub1 = sub i32 0, 1
  %i_val2 = load i32, i32* %i11
  %gep1 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %i_val2
  store i32 %sub1, i32* %gep1
  %i_val3 = load i32, i32* %i11
  %add2 = add i32 %i_val3, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
while_after1:
  ret void
}

define i32 @findfa(i32 %arg0) {
entry:
  %a11 = alloca i32
  store i32 %arg0, i32* %a11
  %a_val1 = load i32, i32* %a11
  %gep1 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %a_val1
  %load1 = load i32, i32* %gep1
  %a_val2 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %load1, %a_val2
  br i1 %icmp1, label %then1, label %else1
then1:
  %a_val3 = load i32, i32* %a11
  ret i32 %a_val3
else1:
  %a_val4 = load i32, i32* %a11
  %gep2 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %a_val4
  %load2 = load i32, i32* %gep2
  %call1 = call i32 @findfa(i32 %load2)
  %a_val5 = load i32, i32* %a11
  %gep3 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %a_val5
  store i32 %call1, i32* %gep3
  %a_val6 = load i32, i32* %a11
  %gep4 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %a_val6
  %load3 = load i32, i32* %gep4
  ret i32 %load3
merge1:
  ret i32 0
}

define void @mmerge(i32 %arg0, i32 %arg1) {
entry:
  %n11 = alloca i32
  %m11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 %arg0, i32* %a11
  store i32 %arg1, i32* %b11
  %a_val1 = load i32, i32* %a11
  %call1 = call i32 @findfa(i32 %a_val1)
  store i32 %call1, i32* %m11
  %b_val1 = load i32, i32* %b11
  %call2 = call i32 @findfa(i32 %b_val1)
  store i32 %call2, i32* %n11
  %m_val1 = load i32, i32* %m11
  %n_val1 = load i32, i32* %n11
  %icmp1 = icmp ne i32 %m_val1, %n_val1
  br i1 %icmp1, label %then1, label %merge1
then1:
  %n_val2 = load i32, i32* %n11
  %m_val2 = load i32, i32* %m11
  %gep1 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %m_val2
  store i32 %n_val2, i32* %gep1
  br label %merge1
merge1:
  ret void
}

define i32 @main() {
entry:
  %tmp11 = alloca i32
  %and_res61 = alloca i32
  %and_res51 = alloca i32
  %and_res41 = alloca i32
  %and_res31 = alloca i32
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  %loc11 = alloca i32
  %k11 = alloca i32
  %flag11 = alloca i32
  %i11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  %m11 = alloca i32
  %t11 = alloca i32
  store i32 1, i32* %t11
  br label %while_cond1
while_cond1:
  %t_val1 = load i32, i32* %t11
  %icmp1 = icmp ne i32 %t_val1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %t_val2 = load i32, i32* %t11
  %sub1 = sub i32 %t_val2, 1
  store i32 %sub1, i32* %t11
  store i32 4, i32* @n
  store i32 10, i32* %m11
  store i32 0, i32* %i11
  store i32 0, i32* %flag11
  %n_val1 = load i32, i32* @n
  call void @init(i32 %n_val1)
  %n_val2 = load i32, i32* @n
  %n_val3 = load i32, i32* @n
  %mul1 = mul i32 %n_val2, %n_val3
  %add1 = add i32 %mul1, 1
  store i32 %add1, i32* %k11
  br label %while_cond2
while_after1:
  ret i32 0
while_cond2:
  %i_val1 = load i32, i32* %i11
  %m_val1 = load i32, i32* %m11
  %icmp2 = icmp slt i32 %i_val1, %m_val1
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %call1 = call i32 @getint()
  store i32 %call1, i32* %a11
  %call2 = call i32 @getint()
  store i32 %call2, i32* %b11
  %flag_val1 = load i32, i32* %flag11
  %icmp3 = icmp eq i32 %flag_val1, 0
  %zext1 = zext i1 %icmp3 to i32
  %icmp4 = icmp ne i32 %zext1, 0
  br i1 %icmp4, label %then1, label %merge1
while_after2:
  %flag_val2 = load i32, i32* %flag11
  %icmp24 = icmp eq i32 %flag_val2, 0
  %zext8 = zext i1 %icmp24 to i32
  %icmp25 = icmp ne i32 %zext8, 0
  br i1 %icmp25, label %then9, label %merge9
then1:
  %n_val4 = load i32, i32* @n
  %a_val1 = load i32, i32* %a11
  %sub2 = sub i32 %a_val1, 1
  %mul2 = mul i32 %n_val4, %sub2
  %b_val1 = load i32, i32* %b11
  %add2 = add i32 %mul2, %b_val1
  store i32 %add2, i32* %loc11
  %loc_val1 = load i32, i32* %loc11
  %loc_val2 = load i32, i32* %loc11
  %gep1 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %loc_val2
  store i32 %loc_val1, i32* %gep1
  %a_val2 = load i32, i32* %a11
  %icmp5 = icmp eq i32 %a_val2, 1
  br i1 %icmp5, label %then2, label %merge2
merge1:
  %i_val3 = load i32, i32* %i11
  %add8 = add i32 %i_val3, 1
  store i32 %add8, i32* %i11
  br label %while_cond2
then2:
  %gep2 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 0
  store i32 0, i32* %gep2
  %loc_val3 = load i32, i32* %loc11
  call void @mmerge(i32 %loc_val3, i32 0)
  br label %merge2
merge2:
  %a_val3 = load i32, i32* %a11
  %n_val5 = load i32, i32* @n
  %icmp6 = icmp eq i32 %a_val3, %n_val5
  br i1 %icmp6, label %then3, label %merge3
then3:
  %k_val1 = load i32, i32* %k11
  %k_val2 = load i32, i32* %k11
  %gep3 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %k_val2
  store i32 %k_val1, i32* %gep3
  %loc_val4 = load i32, i32* %loc11
  %k_val3 = load i32, i32* %k11
  call void @mmerge(i32 %loc_val4, i32 %k_val3)
  br label %merge3
merge3:
  %b_val2 = load i32, i32* %b11
  %n_val6 = load i32, i32* @n
  %icmp7 = icmp slt i32 %b_val2, %n_val6
  br i1 %icmp7, label %and_rhs1, label %and_false1
then4:
  %loc_val6 = load i32, i32* %loc11
  %loc_val7 = load i32, i32* %loc11
  %add4 = add i32 %loc_val7, 1
  call void @mmerge(i32 %loc_val6, i32 %add4)
  br label %merge4
merge4:
  %b_val3 = load i32, i32* %b11
  %icmp10 = icmp sgt i32 %b_val3, 1
  br i1 %icmp10, label %and_rhs2, label %and_false2
and_rhs1:
  %loc_val5 = load i32, i32* %loc11
  %add3 = add i32 %loc_val5, 1
  %gep4 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %add3
  %load1 = load i32, i32* %gep4
  %sub3 = sub i32 0, 1
  %icmp8 = icmp ne i32 %load1, %sub3
  %zext2 = zext i1 %icmp8 to i32
  store i32 %zext2, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp9 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp9, label %then4, label %merge4
then5:
  %loc_val9 = load i32, i32* %loc11
  %loc_val10 = load i32, i32* %loc11
  %sub6 = sub i32 %loc_val10, 1
  call void @mmerge(i32 %loc_val9, i32 %sub6)
  br label %merge5
merge5:
  %a_val4 = load i32, i32* %a11
  %n_val7 = load i32, i32* @n
  %icmp13 = icmp slt i32 %a_val4, %n_val7
  br i1 %icmp13, label %and_rhs3, label %and_false3
and_rhs2:
  %loc_val8 = load i32, i32* %loc11
  %sub4 = sub i32 %loc_val8, 1
  %gep5 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %sub4
  %load2 = load i32, i32* %gep5
  %sub5 = sub i32 0, 1
  %icmp11 = icmp ne i32 %load2, %sub5
  %zext3 = zext i1 %icmp11 to i32
  store i32 %zext3, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val2 = load i32, i32* %and_res21
  %icmp12 = icmp ne i32 %and_res_val2, 0
  br i1 %icmp12, label %then5, label %merge5
then6:
  %loc_val12 = load i32, i32* %loc11
  %loc_val13 = load i32, i32* %loc11
  %n_val9 = load i32, i32* @n
  %add6 = add i32 %loc_val13, %n_val9
  call void @mmerge(i32 %loc_val12, i32 %add6)
  br label %merge6
merge6:
  %a_val5 = load i32, i32* %a11
  %icmp16 = icmp sgt i32 %a_val5, 1
  br i1 %icmp16, label %and_rhs4, label %and_false4
and_rhs3:
  %loc_val11 = load i32, i32* %loc11
  %n_val8 = load i32, i32* @n
  %add5 = add i32 %loc_val11, %n_val8
  %gep6 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %add5
  %load3 = load i32, i32* %gep6
  %sub7 = sub i32 0, 1
  %icmp14 = icmp ne i32 %load3, %sub7
  %zext4 = zext i1 %icmp14 to i32
  store i32 %zext4, i32* %and_res31
  br label %and_merge3
and_false3:
  store i32 0, i32* %and_res31
  br label %and_merge3
and_merge3:
  %and_res_val3 = load i32, i32* %and_res31
  %icmp15 = icmp ne i32 %and_res_val3, 0
  br i1 %icmp15, label %then6, label %merge6
then7:
  %loc_val15 = load i32, i32* %loc11
  %loc_val16 = load i32, i32* %loc11
  %n_val11 = load i32, i32* @n
  %sub10 = sub i32 %loc_val16, %n_val11
  call void @mmerge(i32 %loc_val15, i32 %sub10)
  br label %merge7
merge7:
  %gep8 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 0
  %load5 = load i32, i32* %gep8
  %sub11 = sub i32 0, 1
  %icmp19 = icmp ne i32 %load5, %sub11
  br i1 %icmp19, label %and_rhs6, label %and_false6
and_rhs4:
  %loc_val14 = load i32, i32* %loc11
  %n_val10 = load i32, i32* @n
  %sub8 = sub i32 %loc_val14, %n_val10
  %gep7 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %sub8
  %load4 = load i32, i32* %gep7
  %sub9 = sub i32 0, 1
  %icmp17 = icmp ne i32 %load4, %sub9
  %zext5 = zext i1 %icmp17 to i32
  store i32 %zext5, i32* %and_res41
  br label %and_merge4
and_false4:
  store i32 0, i32* %and_res41
  br label %and_merge4
and_merge4:
  %and_res_val4 = load i32, i32* %and_res41
  %icmp18 = icmp ne i32 %and_res_val4, 0
  br i1 %icmp18, label %then7, label %merge7
then8:
  store i32 1, i32* %flag11
  %i_val2 = load i32, i32* %i11
  %add7 = add i32 %i_val2, 1
  store i32 %add7, i32* %tmp11
  %tmp_val1 = load i32, i32* %tmp11
  call void @putint(i32 %tmp_val1)
  call void @putch(i32 10)
  br label %merge8
merge8:
  br label %merge1
and_rhs5:
  %call3 = call i32 @findfa(i32 0)
  %k_val5 = load i32, i32* %k11
  %call4 = call i32 @findfa(i32 %k_val5)
  %icmp22 = icmp eq i32 %call3, %call4
  %zext7 = zext i1 %icmp22 to i32
  store i32 %zext7, i32* %and_res51
  br label %and_merge5
and_false5:
  store i32 0, i32* %and_res51
  br label %and_merge5
and_merge5:
  %and_res_val6 = load i32, i32* %and_res51
  %icmp23 = icmp ne i32 %and_res_val6, 0
  br i1 %icmp23, label %then8, label %merge8
and_rhs6:
  %k_val4 = load i32, i32* %k11
  %gep9 = getelementptr [110 x i32], [110 x i32]* @array, i32 0, i32 %k_val4
  %load6 = load i32, i32* %gep9
  %sub12 = sub i32 0, 1
  %icmp20 = icmp ne i32 %load6, %sub12
  %zext6 = zext i1 %icmp20 to i32
  store i32 %zext6, i32* %and_res61
  br label %and_merge6
and_false6:
  store i32 0, i32* %and_res61
  br label %and_merge6
and_merge6:
  %and_res_val5 = load i32, i32* %and_res61
  %icmp21 = icmp ne i32 %and_res_val5, 0
  br i1 %icmp21, label %and_rhs5, label %and_false5
then9:
  %sub13 = sub i32 0, 1
  call void @putint(i32 %sub13)
  call void @putch(i32 10)
  br label %merge9
merge9:
  br label %while_cond1
}

declare i32 @getint()
declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
