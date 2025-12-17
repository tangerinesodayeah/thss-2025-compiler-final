@g = global i32 0
define i32 @func(i32 %arg0) {
entry:
  %n11 = alloca i32
  store i32 %arg0, i32* %n11
  %g_val1 = load i32, i32* @g
  %n_val1 = load i32, i32* %n11
  %add1 = add i32 %g_val1, %n_val1
  store i32 %add1, i32* @g
  %g_val2 = load i32, i32* @g
  call void @putint(i32 %g_val2)
  %g_val3 = load i32, i32* @g
  ret i32 %g_val3
}

declare void @putint(i32 %arg0)
define i32 @main() {
entry:
  %and_res31 = alloca i32
  %or_res21 = alloca i32
  %or_res11 = alloca i32
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  %i11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* %i11
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp sgt i32 %i_val1, 10
  br i1 %icmp1, label %and_rhs1, label %and_false1
then1:
  store i32 1, i32* %i11
  br label %merge1
else1:
  store i32 0, i32* %i11
  br label %merge1
merge1:
  %call3 = call i32 @getint()
  store i32 %call3, i32* %i11
  %i_val3 = load i32, i32* %i11
  %icmp4 = icmp sgt i32 %i_val3, 11
  br i1 %icmp4, label %and_rhs2, label %and_false2
and_rhs1:
  %i_val2 = load i32, i32* %i11
  %call2 = call i32 @func(i32 %i_val2)
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
  br i1 %icmp3, label %then1, label %else1
then2:
  store i32 1, i32* %i11
  br label %merge2
else2:
  store i32 0, i32* %i11
  br label %merge2
merge2:
  %call5 = call i32 @getint()
  store i32 %call5, i32* %i11
  %i_val5 = load i32, i32* %i11
  %icmp7 = icmp sle i32 %i_val5, 99
  br i1 %icmp7, label %or_true1, label %or_rhs1
and_rhs2:
  %i_val4 = load i32, i32* %i11
  %call4 = call i32 @func(i32 %i_val4)
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
  br i1 %icmp6, label %then2, label %else2
then3:
  store i32 1, i32* %i11
  br label %merge3
else3:
  store i32 0, i32* %i11
  br label %merge3
merge3:
  %call7 = call i32 @getint()
  store i32 %call7, i32* %i11
  %i_val7 = load i32, i32* %i11
  %icmp10 = icmp sle i32 %i_val7, 100
  br i1 %icmp10, label %or_true2, label %or_rhs2
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %i_val6 = load i32, i32* %i11
  %call6 = call i32 @func(i32 %i_val6)
  %icmp8 = icmp ne i32 %call6, 0
  %zext3 = zext i1 %icmp8 to i32
  store i32 %zext3, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp9 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp9, label %then3, label %else3
then4:
  store i32 1, i32* %i11
  br label %merge4
else4:
  store i32 0, i32* %i11
  br label %merge4
merge4:
  %call9 = call i32 @func(i32 99)
  %icmp13 = icmp eq i32 %call9, 0
  %zext5 = zext i1 %icmp13 to i32
  %icmp14 = icmp ne i32 %zext5, 0
  br i1 %icmp14, label %and_rhs3, label %and_false3
or_true2:
  store i32 1, i32* %or_res21
  br label %or_merge2
or_rhs2:
  %i_val8 = load i32, i32* %i11
  %call8 = call i32 @func(i32 %i_val8)
  %icmp11 = icmp ne i32 %call8, 0
  %zext4 = zext i1 %icmp11 to i32
  store i32 %zext4, i32* %or_res21
  br label %or_merge2
or_merge2:
  %or_res_val2 = load i32, i32* %or_res21
  %icmp12 = icmp ne i32 %or_res_val2, 0
  br i1 %icmp12, label %then4, label %else4
then5:
  store i32 1, i32* %i11
  br label %merge5
else5:
  store i32 0, i32* %i11
  br label %merge5
merge5:
  ret i32 0
and_rhs3:
  %call10 = call i32 @func(i32 100)
  %icmp15 = icmp ne i32 %call10, 0
  %zext6 = zext i1 %icmp15 to i32
  store i32 %zext6, i32* %and_res31
  br label %and_merge3
and_false3:
  store i32 0, i32* %and_res31
  br label %and_merge3
and_merge3:
  %and_res_val3 = load i32, i32* %and_res31
  %icmp16 = icmp ne i32 %and_res_val3, 0
  br i1 %icmp16, label %then5, label %else5
}

declare i32 @getint()
