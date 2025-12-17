@a0 = global i32 0
@a1 = global i32 0
@a2 = global i32 0
@a3 = global i32 0
@a4 = global i32 0
@a5 = global i32 0
@a6 = global i32 0
@a7 = global i32 0
@a8 = global i32 0
@a9 = global i32 0
@a10 = global i32 0
@a11 = global i32 0
@a12 = global i32 0
@a13 = global i32 0
@a14 = global i32 0
@a15 = global i32 0
@a16 = global i32 0
@a17 = global i32 0
@a18 = global i32 0
@a19 = global i32 0
@a20 = global i32 0
@a21 = global i32 0
@a22 = global i32 0
@a23 = global i32 0
@a24 = global i32 0
@a25 = global i32 0
@a26 = global i32 0
@a27 = global i32 0
@a28 = global i32 0
@a29 = global i32 0
@a30 = global i32 0
@a31 = global i32 0
@a32 = global i32 0
@a33 = global i32 0
@a34 = global i32 0
@a35 = global i32 0
@a36 = global i32 0
@a37 = global i32 0
@a38 = global i32 0
@a39 = global i32 0
define i32 @testParam8(i32 %arg0, i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7) {
entry:
  %a711 = alloca i32
  %a611 = alloca i32
  %a511 = alloca i32
  %a411 = alloca i32
  %a311 = alloca i32
  %a211 = alloca i32
  %a111 = alloca i32
  %a011 = alloca i32
  store i32 %arg0, i32* %a011
  store i32 %arg1, i32* %a111
  store i32 %arg2, i32* %a211
  store i32 %arg3, i32* %a311
  store i32 %arg4, i32* %a411
  store i32 %arg5, i32* %a511
  store i32 %arg6, i32* %a611
  store i32 %arg7, i32* %a711
  %a0_val1 = load i32, i32* %a011
  %a1_val1 = load i32, i32* %a111
  %add1 = add i32 %a0_val1, %a1_val1
  %a2_val1 = load i32, i32* %a211
  %add2 = add i32 %add1, %a2_val1
  %a3_val1 = load i32, i32* %a311
  %add3 = add i32 %add2, %a3_val1
  %a4_val1 = load i32, i32* %a411
  %add4 = add i32 %add3, %a4_val1
  %a5_val1 = load i32, i32* %a511
  %add5 = add i32 %add4, %a5_val1
  %a6_val1 = load i32, i32* %a611
  %add6 = add i32 %add5, %a6_val1
  %a7_val1 = load i32, i32* %a711
  %add7 = add i32 %add6, %a7_val1
  ret i32 %add7
}

define i32 @testParam16(i32 %arg0, i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8, i32 %arg9, i32 %arg10, i32 %arg11, i32 %arg12, i32 %arg13, i32 %arg14, i32 %arg15) {
entry:
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
  store i32 %arg0, i32* %a011
  store i32 %arg1, i32* %a111
  store i32 %arg2, i32* %a211
  store i32 %arg3, i32* %a311
  store i32 %arg4, i32* %a411
  store i32 %arg5, i32* %a511
  store i32 %arg6, i32* %a611
  store i32 %arg7, i32* %a711
  store i32 %arg8, i32* %a811
  store i32 %arg9, i32* %a911
  store i32 %arg10, i32* %a1011
  store i32 %arg11, i32* %a1121
  store i32 %arg12, i32* %a1211
  store i32 %arg13, i32* %a1311
  store i32 %arg14, i32* %a1411
  store i32 %arg15, i32* %a1511
  %a0_val1 = load i32, i32* %a011
  %a1_val1 = load i32, i32* %a111
  %add1 = add i32 %a0_val1, %a1_val1
  %a2_val1 = load i32, i32* %a211
  %add2 = add i32 %add1, %a2_val1
  %a3_val1 = load i32, i32* %a311
  %sub1 = sub i32 %add2, %a3_val1
  %a4_val1 = load i32, i32* %a411
  %sub2 = sub i32 %sub1, %a4_val1
  %a5_val1 = load i32, i32* %a511
  %sub3 = sub i32 %sub2, %a5_val1
  %a6_val1 = load i32, i32* %a611
  %sub4 = sub i32 %sub3, %a6_val1
  %a7_val1 = load i32, i32* %a711
  %sub5 = sub i32 %sub4, %a7_val1
  %a8_val1 = load i32, i32* %a811
  %add3 = add i32 %sub5, %a8_val1
  %a9_val1 = load i32, i32* %a911
  %add4 = add i32 %add3, %a9_val1
  %a10_val1 = load i32, i32* %a1011
  %add5 = add i32 %add4, %a10_val1
  %a11_val1 = load i32, i32* %a1121
  %add6 = add i32 %add5, %a11_val1
  %a12_val1 = load i32, i32* %a1211
  %add7 = add i32 %add6, %a12_val1
  %a13_val1 = load i32, i32* %a1311
  %add8 = add i32 %add7, %a13_val1
  %a14_val1 = load i32, i32* %a1411
  %add9 = add i32 %add8, %a14_val1
  %a15_val1 = load i32, i32* %a1511
  %add10 = add i32 %add9, %a15_val1
  ret i32 %add10
}

define i32 @testParam32(i32 %arg0, i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8, i32 %arg9, i32 %arg10, i32 %arg11, i32 %arg12, i32 %arg13, i32 %arg14, i32 %arg15, i32 %arg16, i32 %arg17, i32 %arg18, i32 %arg19, i32 %arg20, i32 %arg21, i32 %arg22, i32 %arg23, i32 %arg24, i32 %arg25, i32 %arg26, i32 %arg27, i32 %arg28, i32 %arg29, i32 %arg30, i32 %arg31) {
entry:
  %a3121 = alloca i32
  %a3011 = alloca i32
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
  store i32 %arg0, i32* %a011
  store i32 %arg1, i32* %a111
  store i32 %arg2, i32* %a211
  store i32 %arg3, i32* %a311
  store i32 %arg4, i32* %a411
  store i32 %arg5, i32* %a511
  store i32 %arg6, i32* %a611
  store i32 %arg7, i32* %a711
  store i32 %arg8, i32* %a811
  store i32 %arg9, i32* %a911
  store i32 %arg10, i32* %a1011
  store i32 %arg11, i32* %a1121
  store i32 %arg12, i32* %a1211
  store i32 %arg13, i32* %a1311
  store i32 %arg14, i32* %a1411
  store i32 %arg15, i32* %a1511
  store i32 %arg16, i32* %a1611
  store i32 %arg17, i32* %a1711
  store i32 %arg18, i32* %a1811
  store i32 %arg19, i32* %a1911
  store i32 %arg20, i32* %a2011
  store i32 %arg21, i32* %a2121
  store i32 %arg22, i32* %a2211
  store i32 %arg23, i32* %a2311
  store i32 %arg24, i32* %a2411
  store i32 %arg25, i32* %a2511
  store i32 %arg26, i32* %a2611
  store i32 %arg27, i32* %a2711
  store i32 %arg28, i32* %a2811
  store i32 %arg29, i32* %a2911
  store i32 %arg30, i32* %a3011
  store i32 %arg31, i32* %a3121
  %a0_val1 = load i32, i32* %a011
  %a1_val1 = load i32, i32* %a111
  %add1 = add i32 %a0_val1, %a1_val1
  %a2_val1 = load i32, i32* %a211
  %add2 = add i32 %add1, %a2_val1
  %a3_val1 = load i32, i32* %a311
  %add3 = add i32 %add2, %a3_val1
  %a4_val1 = load i32, i32* %a411
  %add4 = add i32 %add3, %a4_val1
  %a5_val1 = load i32, i32* %a511
  %add5 = add i32 %add4, %a5_val1
  %a6_val1 = load i32, i32* %a611
  %add6 = add i32 %add5, %a6_val1
  %a7_val1 = load i32, i32* %a711
  %add7 = add i32 %add6, %a7_val1
  %a8_val1 = load i32, i32* %a811
  %add8 = add i32 %add7, %a8_val1
  %a9_val1 = load i32, i32* %a911
  %add9 = add i32 %add8, %a9_val1
  %a10_val1 = load i32, i32* %a1011
  %add10 = add i32 %add9, %a10_val1
  %a11_val1 = load i32, i32* %a1121
  %add11 = add i32 %add10, %a11_val1
  %a12_val1 = load i32, i32* %a1211
  %add12 = add i32 %add11, %a12_val1
  %a13_val1 = load i32, i32* %a1311
  %add13 = add i32 %add12, %a13_val1
  %a14_val1 = load i32, i32* %a1411
  %add14 = add i32 %add13, %a14_val1
  %a15_val1 = load i32, i32* %a1511
  %add15 = add i32 %add14, %a15_val1
  %a16_val1 = load i32, i32* %a1611
  %add16 = add i32 %add15, %a16_val1
  %a17_val1 = load i32, i32* %a1711
  %add17 = add i32 %add16, %a17_val1
  %a18_val1 = load i32, i32* %a1811
  %sub1 = sub i32 %add17, %a18_val1
  %a19_val1 = load i32, i32* %a1911
  %sub2 = sub i32 %sub1, %a19_val1
  %a20_val1 = load i32, i32* %a2011
  %sub3 = sub i32 %sub2, %a20_val1
  %a21_val1 = load i32, i32* %a2121
  %sub4 = sub i32 %sub3, %a21_val1
  %a22_val1 = load i32, i32* %a2211
  %sub5 = sub i32 %sub4, %a22_val1
  %a23_val1 = load i32, i32* %a2311
  %add18 = add i32 %sub5, %a23_val1
  %a24_val1 = load i32, i32* %a2411
  %add19 = add i32 %add18, %a24_val1
  %a25_val1 = load i32, i32* %a2511
  %add20 = add i32 %add19, %a25_val1
  %a26_val1 = load i32, i32* %a2611
  %add21 = add i32 %add20, %a26_val1
  %a27_val1 = load i32, i32* %a2711
  %add22 = add i32 %add21, %a27_val1
  %a28_val1 = load i32, i32* %a2811
  %add23 = add i32 %add22, %a28_val1
  %a29_val1 = load i32, i32* %a2911
  %add24 = add i32 %add23, %a29_val1
  %a30_val1 = load i32, i32* %a3011
  %add25 = add i32 %add24, %a30_val1
  %a31_val1 = load i32, i32* %a3121
  %add26 = add i32 %add25, %a31_val1
  ret i32 %add26
}

define i32 @main() {
entry:
  store i32 0, i32* @a0
  store i32 1, i32* @a1
  store i32 2, i32* @a2
  store i32 3, i32* @a3
  store i32 4, i32* @a4
  store i32 5, i32* @a5
  store i32 6, i32* @a6
  store i32 7, i32* @a7
  store i32 8, i32* @a8
  store i32 9, i32* @a9
  store i32 0, i32* @a10
  store i32 1, i32* @a11
  store i32 2, i32* @a12
  store i32 3, i32* @a13
  store i32 4, i32* @a14
  store i32 5, i32* @a15
  store i32 6, i32* @a16
  store i32 7, i32* @a17
  store i32 8, i32* @a18
  store i32 9, i32* @a19
  store i32 0, i32* @a20
  store i32 1, i32* @a21
  store i32 2, i32* @a22
  store i32 3, i32* @a23
  store i32 4, i32* @a24
  store i32 5, i32* @a25
  store i32 6, i32* @a26
  store i32 7, i32* @a27
  store i32 8, i32* @a28
  store i32 9, i32* @a29
  store i32 0, i32* @a30
  store i32 1, i32* @a31
  store i32 4, i32* @a32
  store i32 5, i32* @a33
  store i32 6, i32* @a34
  store i32 7, i32* @a35
  store i32 8, i32* @a36
  store i32 9, i32* @a37
  store i32 0, i32* @a38
  store i32 1, i32* @a39
  %a0_val1 = load i32, i32* @a0
  %a1_val1 = load i32, i32* @a1
  %a2_val1 = load i32, i32* @a2
  %a3_val1 = load i32, i32* @a3
  %a4_val1 = load i32, i32* @a4
  %a5_val1 = load i32, i32* @a5
  %a6_val1 = load i32, i32* @a6
  %a7_val1 = load i32, i32* @a7
  %call1 = call i32 @testParam8(i32 %a0_val1, i32 %a1_val1, i32 %a2_val1, i32 %a3_val1, i32 %a4_val1, i32 %a5_val1, i32 %a6_val1, i32 %a7_val1)
  store i32 %call1, i32* @a0
  %a0_val2 = load i32, i32* @a0
  call void @putint(i32 %a0_val2)
  %a32_val1 = load i32, i32* @a32
  %a33_val1 = load i32, i32* @a33
  %a34_val1 = load i32, i32* @a34
  %a35_val1 = load i32, i32* @a35
  %a36_val1 = load i32, i32* @a36
  %a37_val1 = load i32, i32* @a37
  %a38_val1 = load i32, i32* @a38
  %a39_val1 = load i32, i32* @a39
  %a8_val1 = load i32, i32* @a8
  %a9_val1 = load i32, i32* @a9
  %a10_val1 = load i32, i32* @a10
  %a11_val1 = load i32, i32* @a11
  %a12_val1 = load i32, i32* @a12
  %a13_val1 = load i32, i32* @a13
  %a14_val1 = load i32, i32* @a14
  %a15_val1 = load i32, i32* @a15
  %call2 = call i32 @testParam16(i32 %a32_val1, i32 %a33_val1, i32 %a34_val1, i32 %a35_val1, i32 %a36_val1, i32 %a37_val1, i32 %a38_val1, i32 %a39_val1, i32 %a8_val1, i32 %a9_val1, i32 %a10_val1, i32 %a11_val1, i32 %a12_val1, i32 %a13_val1, i32 %a14_val1, i32 %a15_val1)
  store i32 %call2, i32* @a0
  %a0_val3 = load i32, i32* @a0
  call void @putint(i32 %a0_val3)
  %a0_val4 = load i32, i32* @a0
  %a1_val2 = load i32, i32* @a1
  %a2_val2 = load i32, i32* @a2
  %a3_val2 = load i32, i32* @a3
  %a4_val2 = load i32, i32* @a4
  %a5_val2 = load i32, i32* @a5
  %a6_val2 = load i32, i32* @a6
  %a7_val2 = load i32, i32* @a7
  %a8_val2 = load i32, i32* @a8
  %a9_val2 = load i32, i32* @a9
  %a10_val2 = load i32, i32* @a10
  %a11_val2 = load i32, i32* @a11
  %a12_val2 = load i32, i32* @a12
  %a13_val2 = load i32, i32* @a13
  %a14_val2 = load i32, i32* @a14
  %a15_val2 = load i32, i32* @a15
  %a16_val1 = load i32, i32* @a16
  %a17_val1 = load i32, i32* @a17
  %a18_val1 = load i32, i32* @a18
  %a19_val1 = load i32, i32* @a19
  %a20_val1 = load i32, i32* @a20
  %a21_val1 = load i32, i32* @a21
  %a22_val1 = load i32, i32* @a22
  %a23_val1 = load i32, i32* @a23
  %a24_val1 = load i32, i32* @a24
  %a25_val1 = load i32, i32* @a25
  %a26_val1 = load i32, i32* @a26
  %a27_val1 = load i32, i32* @a27
  %a28_val1 = load i32, i32* @a28
  %a29_val1 = load i32, i32* @a29
  %a30_val1 = load i32, i32* @a30
  %a31_val1 = load i32, i32* @a31
  %call3 = call i32 @testParam32(i32 %a0_val4, i32 %a1_val2, i32 %a2_val2, i32 %a3_val2, i32 %a4_val2, i32 %a5_val2, i32 %a6_val2, i32 %a7_val2, i32 %a8_val2, i32 %a9_val2, i32 %a10_val2, i32 %a11_val2, i32 %a12_val2, i32 %a13_val2, i32 %a14_val2, i32 %a15_val2, i32 %a16_val1, i32 %a17_val1, i32 %a18_val1, i32 %a19_val1, i32 %a20_val1, i32 %a21_val1, i32 %a22_val1, i32 %a23_val1, i32 %a24_val1, i32 %a25_val1, i32 %a26_val1, i32 %a27_val1, i32 %a28_val1, i32 %a29_val1, i32 %a30_val1, i32 %a31_val1)
  store i32 %call3, i32* @a0
  %a0_val5 = load i32, i32* @a0
  call void @putint(i32 %a0_val5)
  ret i32 0
}

declare void @putint(i32 %arg0)
