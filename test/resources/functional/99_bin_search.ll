define i32 @main() {
entry:
  %and_res11 = alloca i32
  %n11 = alloca i32
  %mid11 = alloca i32
  %low11 = alloca i32
  %high11 = alloca i32
  %x11 = alloca i32
  %a11 = alloca [10 x i32]
  %sum11 = alloca i32
  %i11 = alloca i32
  store i32 0, i32* %sum11
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp slt i32 %i_val1, 10
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %add1 = add i32 %i_val2, 1
  %i_val3 = load i32, i32* %i11
  %gep1 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %i_val3
  store i32 %add1, i32* %gep1
  %i_val4 = load i32, i32* %i11
  %add2 = add i32 %i_val4, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
while_after1:
  store i32 10, i32* %n11
  %call1 = call i32 @getint()
  store i32 %call1, i32* %x11
  %n_val1 = load i32, i32* %n11
  %sub1 = sub i32 %n_val1, 1
  store i32 %sub1, i32* %high11
  store i32 0, i32* %low11
  %high_val1 = load i32, i32* %high11
  %low_val1 = load i32, i32* %low11
  %add3 = add i32 %high_val1, %low_val1
  %sdiv1 = sdiv i32 %add3, 2
  store i32 %sdiv1, i32* %mid11
  br label %while_cond2
while_cond2:
  %mid_val1 = load i32, i32* %mid11
  %gep2 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %mid_val1
  %load1 = load i32, i32* %gep2
  %x_val1 = load i32, i32* %x11
  %icmp2 = icmp ne i32 %load1, %x_val1
  br i1 %icmp2, label %and_rhs1, label %and_false1
while_body2:
  %high_val3 = load i32, i32* %high11
  %low_val3 = load i32, i32* %low11
  %add4 = add i32 %high_val3, %low_val3
  %sdiv2 = sdiv i32 %add4, 2
  store i32 %sdiv2, i32* %mid11
  %x_val2 = load i32, i32* %x11
  %mid_val2 = load i32, i32* %mid11
  %gep3 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %mid_val2
  %load2 = load i32, i32* %gep3
  %icmp5 = icmp slt i32 %x_val2, %load2
  br i1 %icmp5, label %then1, label %else1
while_after2:
  %x_val3 = load i32, i32* %x11
  %mid_val5 = load i32, i32* %mid11
  %gep4 = getelementptr [10 x i32], [10 x i32]* %a11, i32 0, i32 %mid_val5
  %load3 = load i32, i32* %gep4
  %icmp6 = icmp eq i32 %x_val3, %load3
  br i1 %icmp6, label %then2, label %else2
and_rhs1:
  %low_val2 = load i32, i32* %low11
  %high_val2 = load i32, i32* %high11
  %icmp3 = icmp slt i32 %low_val2, %high_val2
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
then1:
  %mid_val3 = load i32, i32* %mid11
  %sub2 = sub i32 %mid_val3, 1
  store i32 %sub2, i32* %high11
  br label %merge1
else1:
  %mid_val4 = load i32, i32* %mid11
  %add5 = add i32 %mid_val4, 1
  store i32 %add5, i32* %low11
  br label %merge1
merge1:
  br label %while_cond2
then2:
  %x_val4 = load i32, i32* %x11
  call void @putint(i32 %x_val4)
  br label %merge2
else2:
  store i32 0, i32* %x11
  %x_val5 = load i32, i32* %x11
  call void @putint(i32 %x_val5)
  br label %merge2
merge2:
  store i32 10, i32* %x11
  %x_val6 = load i32, i32* %x11
  call void @putch(i32 %x_val6)
  ret i32 0
}

declare i32 @getint()
declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
