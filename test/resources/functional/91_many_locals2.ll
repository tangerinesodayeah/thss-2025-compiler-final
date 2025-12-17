@n = global i32 0
define i32 @main() {
entry:
  %newline11 = alloca i32
  %t11 = alloca i32
  %b11 = alloca i32
  %a2911 = alloca i32
  %a2811 = alloca i32
  %a2711 = alloca i32
  %a2611 = alloca i32
  %a2511 = alloca i32
  %a2411 = alloca i32
  %a2311 = alloca i32
  %a2211 = alloca i32
  %a2121 = alloca i32
  %a2011 = alloca i32
  %a1911 = alloca i32
  %a1811 = alloca i32
  %a1711 = alloca i32
  %a1611 = alloca i32
  %a1511 = alloca i32
  %a1411 = alloca i32
  %a1311 = alloca i32
  %a1211 = alloca i32
  %a1121 = alloca i32
  %a1011 = alloca i32
  %a911 = alloca i32
  %a811 = alloca i32
  %a711 = alloca i32
  %a611 = alloca i32
  %a511 = alloca i32
  %a411 = alloca i32
  %a311 = alloca i32
  %a211 = alloca i32
  %a111 = alloca i32
  %a011 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* %b11
  br label %while_cond1
while_cond1:
  %b_val1 = load i32, i32* %b11
  %icmp1 = icmp eq i32 %b_val1, 5
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %b_val2 = load i32, i32* %b11
  %add1 = add i32 %b_val2, 1
  store i32 %add1, i32* %b11
  br label %while_cond1
while_after1:
  store i32 0, i32* %a011
  %a0_val1 = load i32, i32* %a011
  %add2 = add i32 %a0_val1, 1
  store i32 %add2, i32* %a111
  %a1_val1 = load i32, i32* %a111
  %add3 = add i32 %a1_val1, 1
  store i32 %add3, i32* %a211
  %a2_val1 = load i32, i32* %a211
  %add4 = add i32 %a2_val1, 1
  store i32 %add4, i32* %a311
  %a3_val1 = load i32, i32* %a311
  %add5 = add i32 %a3_val1, 1
  store i32 %add5, i32* %a411
  %a4_val1 = load i32, i32* %a411
  %add6 = add i32 %a4_val1, 1
  store i32 %add6, i32* %a511
  %a5_val1 = load i32, i32* %a511
  %add7 = add i32 %a5_val1, 1
  store i32 %add7, i32* %a611
  %a6_val1 = load i32, i32* %a611
  %add8 = add i32 %a6_val1, 1
  store i32 %add8, i32* %a711
  %a7_val1 = load i32, i32* %a711
  %add9 = add i32 %a7_val1, 1
  store i32 %add9, i32* %a811
  %a8_val1 = load i32, i32* %a811
  %add10 = add i32 %a8_val1, 1
  store i32 %add10, i32* %a911
  %a9_val1 = load i32, i32* %a911
  %add11 = add i32 %a9_val1, 1
  store i32 %add11, i32* %a1011
  %a10_val1 = load i32, i32* %a1011
  %add12 = add i32 %a10_val1, 1
  store i32 %add12, i32* %a1121
  %a11_val1 = load i32, i32* %a1121
  %add13 = add i32 %a11_val1, 1
  store i32 %add13, i32* %a1211
  %a12_val1 = load i32, i32* %a1211
  %add14 = add i32 %a12_val1, 1
  store i32 %add14, i32* %a1311
  %a13_val1 = load i32, i32* %a1311
  %add15 = add i32 %a13_val1, 1
  store i32 %add15, i32* %a1411
  %a14_val1 = load i32, i32* %a1411
  %add16 = add i32 %a14_val1, 1
  store i32 %add16, i32* %a1511
  %a15_val1 = load i32, i32* %a1511
  %add17 = add i32 %a15_val1, 1
  store i32 %add17, i32* %a1611
  %a16_val1 = load i32, i32* %a1611
  %add18 = add i32 %a16_val1, 1
  store i32 %add18, i32* %a1711
  %a17_val1 = load i32, i32* %a1711
  %add19 = add i32 %a17_val1, 1
  store i32 %add19, i32* %a1811
  %a18_val1 = load i32, i32* %a1811
  %add20 = add i32 %a18_val1, 1
  store i32 %add20, i32* %a1911
  %a19_val1 = load i32, i32* %a1911
  %add21 = add i32 %a19_val1, 1
  store i32 %add21, i32* %a2011
  %a20_val1 = load i32, i32* %a2011
  %add22 = add i32 %a20_val1, 1
  store i32 %add22, i32* %a2121
  %a21_val1 = load i32, i32* %a2121
  %add23 = add i32 %a21_val1, 1
  store i32 %add23, i32* %a2211
  %a22_val1 = load i32, i32* %a2211
  %add24 = add i32 %a22_val1, 1
  store i32 %add24, i32* %a2311
  %a23_val1 = load i32, i32* %a2311
  %add25 = add i32 %a23_val1, 1
  store i32 %add25, i32* %a2411
  %a24_val1 = load i32, i32* %a2411
  %add26 = add i32 %a24_val1, 1
  store i32 %add26, i32* %a2511
  %a25_val1 = load i32, i32* %a2511
  %add27 = add i32 %a25_val1, 1
  store i32 %add27, i32* %a2611
  %a26_val1 = load i32, i32* %a2611
  %add28 = add i32 %a26_val1, 1
  store i32 %add28, i32* %a2711
  %a27_val1 = load i32, i32* %a2711
  %add29 = add i32 %a27_val1, 1
  store i32 %add29, i32* %a2811
  %a28_val1 = load i32, i32* %a2811
  %add30 = add i32 %a28_val1, 1
  store i32 %add30, i32* %a2911
  %a0_val2 = load i32, i32* %a011
  call void @putint(i32 %a0_val2)
  %a1_val2 = load i32, i32* %a111
  call void @putint(i32 %a1_val2)
  %a2_val2 = load i32, i32* %a211
  call void @putint(i32 %a2_val2)
  %a3_val2 = load i32, i32* %a311
  call void @putint(i32 %a3_val2)
  %a4_val2 = load i32, i32* %a411
  call void @putint(i32 %a4_val2)
  %a5_val2 = load i32, i32* %a511
  call void @putint(i32 %a5_val2)
  %a6_val2 = load i32, i32* %a611
  call void @putint(i32 %a6_val2)
  %a7_val2 = load i32, i32* %a711
  call void @putint(i32 %a7_val2)
  %a8_val2 = load i32, i32* %a811
  call void @putint(i32 %a8_val2)
  %a9_val2 = load i32, i32* %a911
  call void @putint(i32 %a9_val2)
  %a10_val2 = load i32, i32* %a1011
  call void @putint(i32 %a10_val2)
  %a11_val2 = load i32, i32* %a1121
  call void @putint(i32 %a11_val2)
  %a12_val2 = load i32, i32* %a1211
  call void @putint(i32 %a12_val2)
  %a13_val2 = load i32, i32* %a1311
  call void @putint(i32 %a13_val2)
  %a14_val2 = load i32, i32* %a1411
  call void @putint(i32 %a14_val2)
  %a15_val2 = load i32, i32* %a1511
  call void @putint(i32 %a15_val2)
  %a16_val2 = load i32, i32* %a1611
  call void @putint(i32 %a16_val2)
  %a17_val2 = load i32, i32* %a1711
  call void @putint(i32 %a17_val2)
  %a18_val2 = load i32, i32* %a1811
  call void @putint(i32 %a18_val2)
  %a19_val2 = load i32, i32* %a1911
  call void @putint(i32 %a19_val2)
  %a20_val2 = load i32, i32* %a2011
  call void @putint(i32 %a20_val2)
  %a21_val2 = load i32, i32* %a2121
  call void @putint(i32 %a21_val2)
  %a22_val2 = load i32, i32* %a2211
  call void @putint(i32 %a22_val2)
  %a23_val2 = load i32, i32* %a2311
  call void @putint(i32 %a23_val2)
  %a24_val2 = load i32, i32* %a2411
  call void @putint(i32 %a24_val2)
  %a25_val2 = load i32, i32* %a2511
  call void @putint(i32 %a25_val2)
  %a26_val2 = load i32, i32* %a2611
  call void @putint(i32 %a26_val2)
  %a27_val2 = load i32, i32* %a2711
  call void @putint(i32 %a27_val2)
  %a28_val2 = load i32, i32* %a2811
  call void @putint(i32 %a28_val2)
  %a29_val1 = load i32, i32* %a2911
  call void @putint(i32 %a29_val1)
  store i32 10, i32* %newline11
  %newline_val1 = load i32, i32* %newline11
  call void @putch(i32 %newline_val1)
  %b_val3 = load i32, i32* %b11
  call void @putint(i32 %b_val3)
  %newline_val2 = load i32, i32* %newline11
  call void @putch(i32 %newline_val2)
  %a25_val3 = load i32, i32* %a2511
  ret i32 %a25_val3
}

declare i32 @getint()
declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
