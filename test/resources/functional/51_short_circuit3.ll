@a = global i32 0
@b = global i32 0
@d = global i32 0
define i32 @set_a(i32 %arg0) {
entry:
  %val11 = alloca i32
  store i32 %arg0, i32* %val11
  %val_val1 = load i32, i32* %val11
  store i32 %val_val1, i32* @a
  %a_val1 = load i32, i32* @a
  ret i32 %a_val1
}

define i32 @set_b(i32 %arg0) {
entry:
  %val11 = alloca i32
  store i32 %arg0, i32* %val11
  %val_val1 = load i32, i32* %val11
  store i32 %val_val1, i32* @b
  %b_val1 = load i32, i32* @b
  ret i32 %b_val1
}

define i32 @set_d(i32 %arg0) {
entry:
  %val11 = alloca i32
  store i32 %arg0, i32* %val11
  %val_val1 = load i32, i32* %val11
  store i32 %val_val1, i32* @d
  %d_val1 = load i32, i32* @d
  ret i32 %d_val1
}

define i32 @main() {
entry:
  %and_res71 = alloca i32
  %or_res51 = alloca i32
  %and_res61 = alloca i32
  %or_res41 = alloca i32
  %and_res51 = alloca i32
  %or_res31 = alloca i32
  %or_res21 = alloca i32
  %and_res41 = alloca i32
  %i411 = alloca i32
  %i311 = alloca i32
  %i211 = alloca i32
  %i111 = alloca i32
  %i011 = alloca i32
  %or_res11 = alloca i32
  %and_res31 = alloca i32
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  store i32 2, i32* @a
  store i32 3, i32* @b
  %call1 = call i32 @set_a(i32 0)
  %icmp1 = icmp ne i32 %call1, 0
  br i1 %icmp1, label %and_rhs1, label %and_false1
then1:
  br label %merge1
merge1:
  %a_val1 = load i32, i32* @a
  call void @putint(i32 %a_val1)
  call void @putch(i32 32)
  %b_val1 = load i32, i32* @b
  call void @putint(i32 %b_val1)
  call void @putch(i32 32)
  store i32 2, i32* @a
  store i32 3, i32* @b
  %call3 = call i32 @set_a(i32 0)
  %icmp4 = icmp ne i32 %call3, 0
  br i1 %icmp4, label %and_rhs2, label %and_false2
and_rhs1:
  %call2 = call i32 @set_b(i32 1)
  %icmp2 = icmp ne i32 %call2, 0
  %zext1 = zext i1 %icmp2 to i32
  store i32 %zext1, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp3 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp3, label %then1, label %merge1
then2:
  br label %merge2
merge2:
  %a_val2 = load i32, i32* @a
  call void @putint(i32 %a_val2)
  call void @putch(i32 32)
  %b_val2 = load i32, i32* @b
  call void @putint(i32 %b_val2)
  call void @putch(i32 10)
  store i32 2, i32* @d
  %icmp7 = icmp sge i32 1, 1
  br i1 %icmp7, label %and_rhs3, label %and_false3
and_rhs2:
  %call4 = call i32 @set_b(i32 1)
  %icmp5 = icmp ne i32 %call4, 0
  %zext2 = zext i1 %icmp5 to i32
  store i32 %zext2, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val2 = load i32, i32* %and_res21
  %icmp6 = icmp ne i32 %and_res_val2, 0
  br i1 %icmp6, label %then2, label %merge2
then3:
  br label %merge3
merge3:
  %d_val1 = load i32, i32* @d
  call void @putint(i32 %d_val1)
  call void @putch(i32 32)
  %icmp10 = icmp sle i32 1, 1
  br i1 %icmp10, label %or_true1, label %or_rhs1
and_rhs3:
  %call5 = call i32 @set_d(i32 3)
  %icmp8 = icmp ne i32 %call5, 0
  %zext3 = zext i1 %icmp8 to i32
  store i32 %zext3, i32* %and_res31
  br label %and_merge3
and_false3:
  store i32 0, i32* %and_res31
  br label %and_merge3
and_merge3:
  %and_res_val3 = load i32, i32* %and_res31
  %icmp9 = icmp ne i32 %and_res_val3, 0
  br i1 %icmp9, label %then3, label %merge3
then4:
  br label %merge4
merge4:
  %d_val2 = load i32, i32* @d
  call void @putint(i32 %d_val2)
  call void @putch(i32 10)
  %add1 = add i32 2, 1
  %sub1 = sub i32 3, %add1
  %icmp13 = icmp sge i32 16, %sub1
  br i1 %icmp13, label %then5, label %merge5
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %call6 = call i32 @set_d(i32 4)
  %icmp11 = icmp ne i32 %call6, 0
  %zext4 = zext i1 %icmp11 to i32
  store i32 %zext4, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp12 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp12, label %then4, label %merge4
then5:
  call void @putch(i32 65)
  br label %merge5
merge5:
  %sub2 = sub i32 25, 7
  %mul1 = mul i32 6, 3
  %sub3 = sub i32 36, %mul1
  %icmp14 = icmp ne i32 %sub2, %sub3
  br i1 %icmp14, label %then6, label %merge6
then6:
  call void @putch(i32 66)
  br label %merge6
merge6:
  %icmp15 = icmp slt i32 1, 8
  %srem1 = srem i32 7, 2
  %zext5 = zext i1 %icmp15 to i32
  %icmp16 = icmp ne i32 %zext5, %srem1
  br i1 %icmp16, label %then7, label %merge7
then7:
  call void @putch(i32 67)
  br label %merge7
merge7:
  %icmp17 = icmp sgt i32 3, 4
  %zext6 = zext i1 %icmp17 to i32
  %icmp18 = icmp eq i32 %zext6, 0
  br i1 %icmp18, label %then8, label %merge8
then8:
  call void @putch(i32 68)
  br label %merge8
merge8:
  %icmp19 = icmp sle i32 102, 63
  %zext7 = zext i1 %icmp19 to i32
  %icmp20 = icmp eq i32 1, %zext7
  br i1 %icmp20, label %then9, label %merge9
then9:
  call void @putch(i32 69)
  br label %merge9
merge9:
  %sub4 = sub i32 5, 6
  %icmp21 = icmp eq i32 0, 0
  %zext8 = zext i1 %icmp21 to i32
  %sub5 = sub i32 0, %zext8
  %icmp22 = icmp eq i32 %sub4, %sub5
  br i1 %icmp22, label %then10, label %merge10
then10:
  call void @putch(i32 70)
  br label %merge10
merge10:
  call void @putch(i32 10)
  store i32 0, i32* %i011
  store i32 1, i32* %i111
  store i32 2, i32* %i211
  store i32 3, i32* %i311
  store i32 4, i32* %i411
  br label %while_cond1
while_cond1:
  %i0_val1 = load i32, i32* %i011
  %icmp23 = icmp ne i32 %i0_val1, 0
  br i1 %icmp23, label %and_rhs4, label %and_false4
while_body1:
  call void @putch(i32 32)
  br label %while_cond1
while_after1:
  %i0_val2 = load i32, i32* %i011
  %icmp26 = icmp ne i32 %i0_val2, 0
  br i1 %icmp26, label %or_true2, label %or_rhs2
and_rhs4:
  %i1_val1 = load i32, i32* %i111
  %icmp24 = icmp ne i32 %i1_val1, 0
  %zext9 = zext i1 %icmp24 to i32
  store i32 %zext9, i32* %and_res41
  br label %and_merge4
and_false4:
  store i32 0, i32* %and_res41
  br label %and_merge4
and_merge4:
  %and_res_val4 = load i32, i32* %and_res41
  %icmp25 = icmp ne i32 %and_res_val4, 0
  br i1 %icmp25, label %while_body1, label %while_after1
then11:
  call void @putch(i32 67)
  br label %merge11
merge11:
  %i0_val3 = load i32, i32* %i011
  %i1_val3 = load i32, i32* %i111
  %icmp29 = icmp sge i32 %i0_val3, %i1_val3
  br i1 %icmp29, label %or_true3, label %or_rhs3
or_true2:
  store i32 1, i32* %or_res21
  br label %or_merge2
or_rhs2:
  %i1_val2 = load i32, i32* %i111
  %icmp27 = icmp ne i32 %i1_val2, 0
  %zext10 = zext i1 %icmp27 to i32
  store i32 %zext10, i32* %or_res21
  br label %or_merge2
or_merge2:
  %or_res_val2 = load i32, i32* %or_res21
  %icmp28 = icmp ne i32 %or_res_val2, 0
  br i1 %icmp28, label %then11, label %merge11
then12:
  call void @putch(i32 72)
  br label %merge12
merge12:
  %i2_val1 = load i32, i32* %i211
  %i1_val5 = load i32, i32* %i111
  %icmp32 = icmp sge i32 %i2_val1, %i1_val5
  br i1 %icmp32, label %and_rhs5, label %and_false5
or_true3:
  store i32 1, i32* %or_res31
  br label %or_merge3
or_rhs3:
  %i1_val4 = load i32, i32* %i111
  %i0_val4 = load i32, i32* %i011
  %icmp30 = icmp sle i32 %i1_val4, %i0_val4
  %zext11 = zext i1 %icmp30 to i32
  store i32 %zext11, i32* %or_res31
  br label %or_merge3
or_merge3:
  %or_res_val3 = load i32, i32* %or_res31
  %icmp31 = icmp ne i32 %or_res_val3, 0
  br i1 %icmp31, label %then12, label %merge12
then13:
  call void @putch(i32 73)
  br label %merge13
merge13:
  %i0_val5 = load i32, i32* %i011
  %i1_val6 = load i32, i32* %i111
  %icmp35 = icmp eq i32 %i1_val6, 0
  %zext13 = zext i1 %icmp35 to i32
  %icmp36 = icmp eq i32 %i0_val5, %zext13
  br i1 %icmp36, label %and_rhs6, label %and_false6
and_rhs5:
  %i4_val1 = load i32, i32* %i411
  %i3_val1 = load i32, i32* %i311
  %icmp33 = icmp ne i32 %i4_val1, %i3_val1
  %zext12 = zext i1 %icmp33 to i32
  store i32 %zext12, i32* %and_res51
  br label %and_merge5
and_false5:
  store i32 0, i32* %and_res51
  br label %and_merge5
and_merge5:
  %and_res_val5 = load i32, i32* %and_res51
  %icmp34 = icmp ne i32 %and_res_val5, 0
  br i1 %icmp34, label %then13, label %merge13
then14:
  call void @putch(i32 74)
  br label %merge14
merge14:
  %i0_val6 = load i32, i32* %i011
  %i1_val7 = load i32, i32* %i111
  %icmp41 = icmp eq i32 %i1_val7, 0
  %zext16 = zext i1 %icmp41 to i32
  %icmp42 = icmp eq i32 %i0_val6, %zext16
  br i1 %icmp42, label %or_true5, label %or_rhs5
or_true4:
  store i32 1, i32* %or_res41
  br label %or_merge4
or_rhs4:
  %i4_val2 = load i32, i32* %i411
  %i4_val3 = load i32, i32* %i411
  %icmp39 = icmp sge i32 %i4_val2, %i4_val3
  %zext15 = zext i1 %icmp39 to i32
  store i32 %zext15, i32* %or_res41
  br label %or_merge4
or_merge4:
  %or_res_val4 = load i32, i32* %or_res41
  %icmp40 = icmp ne i32 %or_res_val4, 0
  br i1 %icmp40, label %then14, label %merge14
and_rhs6:
  %i3_val2 = load i32, i32* %i311
  %i3_val3 = load i32, i32* %i311
  %icmp37 = icmp slt i32 %i3_val2, %i3_val3
  %zext14 = zext i1 %icmp37 to i32
  store i32 %zext14, i32* %and_res61
  br label %and_merge6
and_false6:
  store i32 0, i32* %and_res61
  br label %and_merge6
and_merge6:
  %and_res_val6 = load i32, i32* %and_res61
  %icmp38 = icmp ne i32 %and_res_val6, 0
  br i1 %icmp38, label %or_true4, label %or_rhs4
then15:
  call void @putch(i32 75)
  br label %merge15
merge15:
  call void @putch(i32 10)
  ret i32 0
or_true5:
  store i32 1, i32* %or_res51
  br label %or_merge5
or_rhs5:
  %i3_val4 = load i32, i32* %i311
  %i3_val5 = load i32, i32* %i311
  %icmp43 = icmp slt i32 %i3_val4, %i3_val5
  br i1 %icmp43, label %and_rhs7, label %and_false7
or_merge5:
  %or_res_val5 = load i32, i32* %or_res51
  %icmp46 = icmp ne i32 %or_res_val5, 0
  br i1 %icmp46, label %then15, label %merge15
and_rhs7:
  %i4_val4 = load i32, i32* %i411
  %i4_val5 = load i32, i32* %i411
  %icmp44 = icmp sge i32 %i4_val4, %i4_val5
  %zext17 = zext i1 %icmp44 to i32
  store i32 %zext17, i32* %and_res71
  br label %and_merge7
and_false7:
  store i32 0, i32* %and_res71
  br label %and_merge7
and_merge7:
  %and_res_val7 = load i32, i32* %and_res71
  %icmp45 = icmp ne i32 %and_res_val7, 0
  %zext18 = zext i1 %icmp45 to i32
  store i32 %zext18, i32* %or_res51
  br label %or_merge5
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
