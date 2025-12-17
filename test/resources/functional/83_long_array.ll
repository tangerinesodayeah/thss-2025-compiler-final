define i32 @long_array(i32 %arg0) {
entry:
  %j21 = alloca i32
  %j11 = alloca i32
  %ans11 = alloca i32
  %i11 = alloca i32
  %a311 = alloca [10000 x i32]
  %a211 = alloca [10000 x i32]
  %a111 = alloca [10000 x i32]
  %k11 = alloca i32
  store i32 %arg0, i32* %k11
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp slt i32 %i_val1, 10000
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %i_val3 = load i32, i32* %i11
  %mul1 = mul i32 %i_val2, %i_val3
  %srem1 = srem i32 %mul1, 10
  %i_val4 = load i32, i32* %i11
  %gep1 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %i_val4
  store i32 %srem1, i32* %gep1
  %i_val5 = load i32, i32* %i11
  %add1 = add i32 %i_val5, 1
  store i32 %add1, i32* %i11
  br label %while_cond1
while_after1:
  store i32 0, i32* %i11
  br label %while_cond2
while_cond2:
  %i_val6 = load i32, i32* %i11
  %icmp2 = icmp slt i32 %i_val6, 10000
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %i_val7 = load i32, i32* %i11
  %gep2 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %i_val7
  %load1 = load i32, i32* %gep2
  %i_val8 = load i32, i32* %i11
  %gep3 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %i_val8
  %load2 = load i32, i32* %gep3
  %mul2 = mul i32 %load1, %load2
  %srem2 = srem i32 %mul2, 10
  %i_val9 = load i32, i32* %i11
  %gep4 = getelementptr [10000 x i32], [10000 x i32]* %a211, i32 0, i32 %i_val9
  store i32 %srem2, i32* %gep4
  %i_val10 = load i32, i32* %i11
  %add2 = add i32 %i_val10, 1
  store i32 %add2, i32* %i11
  br label %while_cond2
while_after2:
  store i32 0, i32* %i11
  br label %while_cond3
while_cond3:
  %i_val11 = load i32, i32* %i11
  %icmp3 = icmp slt i32 %i_val11, 10000
  br i1 %icmp3, label %while_body3, label %while_after3
while_body3:
  %i_val12 = load i32, i32* %i11
  %gep5 = getelementptr [10000 x i32], [10000 x i32]* %a211, i32 0, i32 %i_val12
  %load3 = load i32, i32* %gep5
  %i_val13 = load i32, i32* %i11
  %gep6 = getelementptr [10000 x i32], [10000 x i32]* %a211, i32 0, i32 %i_val13
  %load4 = load i32, i32* %gep6
  %mul3 = mul i32 %load3, %load4
  %srem3 = srem i32 %mul3, 100
  %i_val14 = load i32, i32* %i11
  %gep7 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %i_val14
  %load5 = load i32, i32* %gep7
  %add3 = add i32 %srem3, %load5
  %i_val15 = load i32, i32* %i11
  %gep8 = getelementptr [10000 x i32], [10000 x i32]* %a311, i32 0, i32 %i_val15
  store i32 %add3, i32* %gep8
  %i_val16 = load i32, i32* %i11
  %add4 = add i32 %i_val16, 1
  store i32 %add4, i32* %i11
  br label %while_cond3
while_after3:
  store i32 0, i32* %ans11
  store i32 0, i32* %i11
  br label %while_cond4
while_cond4:
  %i_val17 = load i32, i32* %i11
  %icmp4 = icmp slt i32 %i_val17, 10000
  br i1 %icmp4, label %while_body4, label %while_after4
while_body4:
  %i_val18 = load i32, i32* %i11
  %icmp5 = icmp slt i32 %i_val18, 10
  br i1 %icmp5, label %then1, label %else1
while_after4:
  %ans_val9 = load i32, i32* %ans11
  ret i32 %ans_val9
then1:
  %ans_val1 = load i32, i32* %ans11
  %i_val19 = load i32, i32* %i11
  %gep9 = getelementptr [10000 x i32], [10000 x i32]* %a311, i32 0, i32 %i_val19
  %load6 = load i32, i32* %gep9
  %add5 = add i32 %ans_val1, %load6
  %srem4 = srem i32 %add5, 1333
  store i32 %srem4, i32* %ans11
  %ans_val2 = load i32, i32* %ans11
  call void @putint(i32 %ans_val2)
  br label %merge1
else1:
  %i_val20 = load i32, i32* %i11
  %icmp6 = icmp slt i32 %i_val20, 20
  br i1 %icmp6, label %then2, label %else2
merge1:
  %i_val26 = load i32, i32* %i11
  %add14 = add i32 %i_val26, 1
  store i32 %add14, i32* %i11
  br label %while_cond4
then2:
  %sdiv1 = sdiv i32 10000, 2
  store i32 %sdiv1, i32* %j11
  br label %while_cond5
else2:
  %i_val22 = load i32, i32* %i11
  %icmp8 = icmp slt i32 %i_val22, 30
  br i1 %icmp8, label %then3, label %else3
merge2:
  br label %merge1
while_cond5:
  %j_val1 = load i32, i32* %j11
  %icmp7 = icmp slt i32 %j_val1, 10000
  br i1 %icmp7, label %while_body5, label %while_after5
while_body5:
  %ans_val3 = load i32, i32* %ans11
  %i_val21 = load i32, i32* %i11
  %gep10 = getelementptr [10000 x i32], [10000 x i32]* %a311, i32 0, i32 %i_val21
  %load7 = load i32, i32* %gep10
  %add6 = add i32 %ans_val3, %load7
  %j_val2 = load i32, i32* %j11
  %gep11 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %j_val2
  %load8 = load i32, i32* %gep11
  %sub1 = sub i32 %add6, %load8
  store i32 %sub1, i32* %ans11
  %j_val3 = load i32, i32* %j11
  %add7 = add i32 %j_val3, 1
  store i32 %add7, i32* %j11
  br label %while_cond5
while_after5:
  %ans_val4 = load i32, i32* %ans11
  call void @putint(i32 %ans_val4)
  br label %merge2
then3:
  %sdiv2 = sdiv i32 10000, 2
  store i32 %sdiv2, i32* %j21
  br label %while_cond6
else3:
  %ans_val8 = load i32, i32* %ans11
  %i_val25 = load i32, i32* %i11
  %gep16 = getelementptr [10000 x i32], [10000 x i32]* %a311, i32 0, i32 %i_val25
  %load13 = load i32, i32* %gep16
  %k_val1 = load i32, i32* %k11
  %mul4 = mul i32 %load13, %k_val1
  %add13 = add i32 %ans_val8, %mul4
  %srem6 = srem i32 %add13, 99988
  store i32 %srem6, i32* %ans11
  br label %merge3
merge3:
  br label %merge2
while_cond6:
  %j_val4 = load i32, i32* %j21
  %icmp9 = icmp slt i32 %j_val4, 10000
  br i1 %icmp9, label %while_body6, label %while_after6
while_body6:
  %j_val5 = load i32, i32* %j21
  %icmp10 = icmp sgt i32 %j_val5, 2233
  br i1 %icmp10, label %then4, label %else4
while_after6:
  %ans_val7 = load i32, i32* %ans11
  call void @putint(i32 %ans_val7)
  br label %merge3
then4:
  %ans_val5 = load i32, i32* %ans11
  %i_val23 = load i32, i32* %i11
  %gep12 = getelementptr [10000 x i32], [10000 x i32]* %a211, i32 0, i32 %i_val23
  %load9 = load i32, i32* %gep12
  %add8 = add i32 %ans_val5, %load9
  %j_val6 = load i32, i32* %j21
  %gep13 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %j_val6
  %load10 = load i32, i32* %gep13
  %sub2 = sub i32 %add8, %load10
  store i32 %sub2, i32* %ans11
  %j_val7 = load i32, i32* %j21
  %add9 = add i32 %j_val7, 1
  store i32 %add9, i32* %j21
  br label %merge4
else4:
  %ans_val6 = load i32, i32* %ans11
  %i_val24 = load i32, i32* %i11
  %gep14 = getelementptr [10000 x i32], [10000 x i32]* %a111, i32 0, i32 %i_val24
  %load11 = load i32, i32* %gep14
  %add10 = add i32 %ans_val6, %load11
  %j_val8 = load i32, i32* %j21
  %gep15 = getelementptr [10000 x i32], [10000 x i32]* %a311, i32 0, i32 %j_val8
  %load12 = load i32, i32* %gep15
  %add11 = add i32 %add10, %load12
  %srem5 = srem i32 %add11, 13333
  store i32 %srem5, i32* %ans11
  %j_val9 = load i32, i32* %j21
  %add12 = add i32 %j_val9, 2
  store i32 %add12, i32* %j21
  br label %merge4
merge4:
  br label %while_cond6
}

declare void @putint(i32 %arg0)
define i32 @main() {
entry:
  %call1 = call i32 @long_array(i32 9)
  ret i32 %call1
}

