define i32 @main() {
entry:
  %sum11 = alloca i32
  %i11 = alloca i32
  %arr11 = alloca [100 x i32]
  store i32 0, i32* %i11
  store i32 0, i32* %sum11
  br label %while_cond1
while_cond1:
  %call1 = call i32 @getint()
  %icmp1 = icmp ne i32 %call1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call2 = call i32 @getint()
  %i_val1 = load i32, i32* %i11
  %gep1 = getelementptr [100 x i32], [100 x i32]* %arr11, i32 0, i32 %i_val1
  store i32 %call2, i32* %gep1
  %i_val2 = load i32, i32* %i11
  %add1 = add i32 %i_val2, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  br label %while_cond2
while_cond2:
  %i_val3 = load i32, i32* %i11
  %icmp2 = icmp ne i32 %i_val3, 0
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %i_val4 = load i32, i32* %i11
  %sub1 = sub i32 %i_val4, 1
  store i32 %sub1, i32* %i11
  %sum_val1 = load i32, i32* %sum11
  %i_val5 = load i32, i32* %i11
  %gep2 = getelementptr [100 x i32], [100 x i32]* %arr11, i32 0, i32 %i_val5
  %load1 = load i32, i32* %gep2
  %add2 = add i32 %sum_val1, %load1
  store i32 %add2, i32* %sum11
  br label %while_cond2
while_after2:
  %sum_val2 = load i32, i32* %sum11
  %srem1 = srem i32 %sum_val2, 79
  ret i32 %srem1
}

declare i32 @getint()
