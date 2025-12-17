define void @get_next(i32* %arg0, i32* %arg1) {
entry:
  %or_res11 = alloca i32
  %j11 = alloca i32
  %i11 = alloca i32
  %next11 = alloca i32*
  %str11 = alloca i32*
  store i32* %arg0, i32** %str11
  store i32* %arg1, i32** %next11
  %sub1 = sub i32 0, 1
  %next_val1 = load i32*, i32** %next11
  %gep1 = getelementptr i32, i32* %next_val1, i32 0
  store i32 %sub1, i32* %gep1
  store i32 0, i32* %i11
  %sub2 = sub i32 0, 1
  store i32 %sub2, i32* %j11
  br label %while_cond1
while_cond1:
  %str_val1 = load i32*, i32** %str11
  %i_val1 = load i32, i32* %i11
  %gep2 = getelementptr i32, i32* %str_val1, i32 %i_val1
  %load1 = load i32, i32* %gep2
  %icmp1 = icmp ne i32 %load1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %j_val1 = load i32, i32* %j11
  %sub3 = sub i32 0, 1
  %icmp2 = icmp eq i32 %j_val1, %sub3
  br i1 %icmp2, label %or_true1, label %or_rhs1
while_after1:
  ret void
then1:
  %j_val3 = load i32, i32* %j11
  %add1 = add i32 %j_val3, 1
  store i32 %add1, i32* %j11
  %i_val3 = load i32, i32* %i11
  %add2 = add i32 %i_val3, 1
  store i32 %add2, i32* %i11
  %j_val4 = load i32, i32* %j11
  %next_val2 = load i32*, i32** %next11
  %i_val4 = load i32, i32* %i11
  %gep5 = getelementptr i32, i32* %next_val2, i32 %i_val4
  store i32 %j_val4, i32* %gep5
  br label %merge1
else1:
  %next_val3 = load i32*, i32** %next11
  %j_val5 = load i32, i32* %j11
  %gep6 = getelementptr i32, i32* %next_val3, i32 %j_val5
  %load4 = load i32, i32* %gep6
  store i32 %load4, i32* %j11
  br label %merge1
merge1:
  br label %while_cond1
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %str_val2 = load i32*, i32** %str11
  %i_val2 = load i32, i32* %i11
  %gep3 = getelementptr i32, i32* %str_val2, i32 %i_val2
  %load2 = load i32, i32* %gep3
  %str_val3 = load i32*, i32** %str11
  %j_val2 = load i32, i32* %j11
  %gep4 = getelementptr i32, i32* %str_val3, i32 %j_val2
  %load3 = load i32, i32* %gep4
  %icmp3 = icmp eq i32 %load2, %load3
  %zext1 = zext i1 %icmp3 to i32
  store i32 %zext1, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp4 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp4, label %then1, label %else1
}

define i32 @KMP(i32* %arg0, i32* %arg1) {
entry:
  %j11 = alloca i32
  %i11 = alloca i32
  %next11 = alloca [4096 x i32]
  %src11 = alloca i32*
  %dst11 = alloca i32*
  store i32* %arg0, i32** %dst11
  store i32* %arg1, i32** %src11
  %dst_val1 = load i32*, i32** %dst11
  %gep1 = getelementptr [4096 x i32], [4096 x i32]* %next11, i32 0, i32 0
  call void @get_next(i32* %dst_val1, i32* %gep1)
  store i32 0, i32* %i11
  store i32 0, i32* %j11
  br label %while_cond1
while_cond1:
  %src_val1 = load i32*, i32** %src11
  %j_val1 = load i32, i32* %j11
  %gep2 = getelementptr i32, i32* %src_val1, i32 %j_val1
  %load1 = load i32, i32* %gep2
  %icmp1 = icmp ne i32 %load1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %dst_val2 = load i32*, i32** %dst11
  %i_val1 = load i32, i32* %i11
  %gep3 = getelementptr i32, i32* %dst_val2, i32 %i_val1
  %load2 = load i32, i32* %gep3
  %src_val2 = load i32*, i32** %src11
  %j_val2 = load i32, i32* %j11
  %gep4 = getelementptr i32, i32* %src_val2, i32 %j_val2
  %load3 = load i32, i32* %gep4
  %icmp2 = icmp eq i32 %load2, %load3
  br i1 %icmp2, label %then1, label %else1
while_after1:
  %sub2 = sub i32 0, 1
  ret i32 %sub2
then1:
  %i_val2 = load i32, i32* %i11
  %add1 = add i32 %i_val2, 1
  store i32 %add1, i32* %i11
  %j_val3 = load i32, i32* %j11
  %add2 = add i32 %j_val3, 1
  store i32 %add2, i32* %j11
  %dst_val3 = load i32*, i32** %dst11
  %i_val3 = load i32, i32* %i11
  %gep5 = getelementptr i32, i32* %dst_val3, i32 %i_val3
  %load4 = load i32, i32* %gep5
  %icmp3 = icmp eq i32 %load4, 0
  %zext1 = zext i1 %icmp3 to i32
  %icmp4 = icmp ne i32 %zext1, 0
  br i1 %icmp4, label %then2, label %merge2
else1:
  %i_val4 = load i32, i32* %i11
  %gep6 = getelementptr [4096 x i32], [4096 x i32]* %next11, i32 0, i32 %i_val4
  %load5 = load i32, i32* %gep6
  store i32 %load5, i32* %i11
  %i_val5 = load i32, i32* %i11
  %sub1 = sub i32 0, 1
  %icmp5 = icmp eq i32 %i_val5, %sub1
  br i1 %icmp5, label %then3, label %merge3
merge1:
  br label %while_cond1
then2:
  %j_val4 = load i32, i32* %j11
  ret i32 %j_val4
merge2:
  br label %merge1
then3:
  %i_val6 = load i32, i32* %i11
  %add3 = add i32 %i_val6, 1
  store i32 %add3, i32* %i11
  %j_val5 = load i32, i32* %j11
  %add4 = add i32 %j_val5, 1
  store i32 %add4, i32* %j11
  br label %merge3
merge3:
  br label %merge1
}

define i32 @read_str(i32* %arg0) {
entry:
  %i11 = alloca i32
  %buf11 = alloca i32*
  store i32* %arg0, i32** %buf11
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %icmp1 = icmp ne i32 1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call1 = call i32 @getch()
  %buf_val1 = load i32*, i32** %buf11
  %i_val1 = load i32, i32* %i11
  %gep1 = getelementptr i32, i32* %buf_val1, i32 %i_val1
  store i32 %call1, i32* %gep1
  %buf_val2 = load i32*, i32** %buf11
  %i_val2 = load i32, i32* %i11
  %gep2 = getelementptr i32, i32* %buf_val2, i32 %i_val2
  %load1 = load i32, i32* %gep2
  %icmp2 = icmp eq i32 %load1, 10
  br i1 %icmp2, label %then1, label %merge1
while_after1:
  %buf_val3 = load i32*, i32** %buf11
  %i_val4 = load i32, i32* %i11
  %gep3 = getelementptr i32, i32* %buf_val3, i32 %i_val4
  store i32 0, i32* %gep3
  %i_val5 = load i32, i32* %i11
  ret i32 %i_val5
then1:
  br label %while_after1
merge1:
  %i_val3 = load i32, i32* %i11
  %add1 = add i32 %i_val3, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
}

declare i32 @getch()
define i32 @main() {
entry:
  %src11 = alloca [4096 x i32]
  %dst11 = alloca [4096 x i32]
  %gep1 = getelementptr [4096 x i32], [4096 x i32]* %dst11, i32 0, i32 0
  %call1 = call i32 @read_str(i32* %gep1)
  %gep2 = getelementptr [4096 x i32], [4096 x i32]* %src11, i32 0, i32 0
  %call2 = call i32 @read_str(i32* %gep2)
  %gep3 = getelementptr [4096 x i32], [4096 x i32]* %dst11, i32 0, i32 0
  %gep4 = getelementptr [4096 x i32], [4096 x i32]* %src11, i32 0, i32 0
  %call3 = call i32 @KMP(i32* %gep3, i32* %gep4)
  call void @putint(i32 %call3)
  call void @putch(i32 10)
  ret i32 0
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
