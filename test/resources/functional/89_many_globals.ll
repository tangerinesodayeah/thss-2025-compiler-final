define i32 @testParam8() {
entry:
  %a0_val = load i32, i32* %a0
  %a1_val = load i32, i32* %a1
  %add = add i32 %a0_val, %a1_val
  %a2_val = load i32, i32* %a2
  %add1 = add i32 %add, %a2_val
  %a3_val = load i32, i32* %a3
  %add2 = add i32 %add1, %a3_val
  %a4_val = load i32, i32* %a4
  %add3 = add i32 %add2, %a4_val
  %a5_val = load i32, i32* %a5
  %add4 = add i32 %add3, %a5_val
  %a6_val = load i32, i32* %a6
  %add5 = add i32 %add4, %a6_val
  %a7_val = load i32, i32* %a7
  %add6 = add i32 %add5, %a7_val
  ret i32 %add6
}

define i32 @testParam16() {
entry:
  %a0_val = load i32, i32* %a0
  %a1_val = load i32, i32* %a1
  %add = add i32 %a0_val, %a1_val
  %a2_val = load i32, i32* %a2
  %add1 = add i32 %add, %a2_val
  %a3_val = load i32, i32* %a3
  %sub = sub i32 %add1, %a3_val
  %a4_val = load i32, i32* %a4
  %sub1 = sub i32 %sub, %a4_val
  %a5_val = load i32, i32* %a5
  %sub2 = sub i32 %sub1, %a5_val
  %a6_val = load i32, i32* %a6
  %sub3 = sub i32 %sub2, %a6_val
  %a7_val = load i32, i32* %a7
  %sub4 = sub i32 %sub3, %a7_val
  %a8_val = load i32, i32* %a8
  %add2 = add i32 %sub4, %a8_val
  %a9_val = load i32, i32* %a9
  %add3 = add i32 %add2, %a9_val
  %a10_val = load i32, i32* %a10
  %add4 = add i32 %add3, %a10_val
  %a11_val = load i32, i32* %a11
  %add5 = add i32 %add4, %a11_val
  %a12_val = load i32, i32* %a12
  %add6 = add i32 %add5, %a12_val
  %a13_val = load i32, i32* %a13
  %add7 = add i32 %add6, %a13_val
  %a14_val = load i32, i32* %a14
  %add8 = add i32 %add7, %a14_val
  %a15_val = load i32, i32* %a15
  %add9 = add i32 %add8, %a15_val
  ret i32 %add9
}

define i32 @testParam32() {
entry:
  %a0_val = load i32, i32* %a0
  %a1_val = load i32, i32* %a1
  %add = add i32 %a0_val, %a1_val
  %a2_val = load i32, i32* %a2
  %add1 = add i32 %add, %a2_val
  %a3_val = load i32, i32* %a3
  %add2 = add i32 %add1, %a3_val
  %a4_val = load i32, i32* %a4
  %add3 = add i32 %add2, %a4_val
  %a5_val = load i32, i32* %a5
  %add4 = add i32 %add3, %a5_val
  %a6_val = load i32, i32* %a6
  %add5 = add i32 %add4, %a6_val
  %a7_val = load i32, i32* %a7
  %add6 = add i32 %add5, %a7_val
  %a8_val = load i32, i32* %a8
  %add7 = add i32 %add6, %a8_val
  %a9_val = load i32, i32* %a9
  %add8 = add i32 %add7, %a9_val
  %a10_val = load i32, i32* %a10
  %add9 = add i32 %add8, %a10_val
  %a11_val = load i32, i32* %a11
  %add10 = add i32 %add9, %a11_val
  %a12_val = load i32, i32* %a12
  %add11 = add i32 %add10, %a12_val
  %a13_val = load i32, i32* %a13
  %add12 = add i32 %add11, %a13_val
  %a14_val = load i32, i32* %a14
  %add13 = add i32 %add12, %a14_val
  %a15_val = load i32, i32* %a15
  %add14 = add i32 %add13, %a15_val
  %a16_val = load i32, i32* %a16
  %add15 = add i32 %add14, %a16_val
  %a17_val = load i32, i32* %a17
  %add16 = add i32 %add15, %a17_val
  %a18_val = load i32, i32* %a18
  %sub = sub i32 %add16, %a18_val
  %a19_val = load i32, i32* %a19
  %sub1 = sub i32 %sub, %a19_val
  %a20_val = load i32, i32* %a20
  %sub2 = sub i32 %sub1, %a20_val
  %a21_val = load i32, i32* %a21
  %sub3 = sub i32 %sub2, %a21_val
  %a22_val = load i32, i32* %a22
  %sub4 = sub i32 %sub3, %a22_val
  %a23_val = load i32, i32* %a23
  %add17 = add i32 %sub4, %a23_val
  %a24_val = load i32, i32* %a24
  %add18 = add i32 %add17, %a24_val
  %a25_val = load i32, i32* %a25
  %add19 = add i32 %add18, %a25_val
  %a26_val = load i32, i32* %a26
  %add20 = add i32 %add19, %a26_val
  %a27_val = load i32, i32* %a27
  %add21 = add i32 %add20, %a27_val
  %a28_val = load i32, i32* %a28
  %add22 = add i32 %add21, %a28_val
  %a29_val = load i32, i32* %a29
  %add23 = add i32 %add22, %a29_val
  %a30_val = load i32, i32* %a30
  %add24 = add i32 %add23, %a30_val
  %a31_val = load i32, i32* %a31
  %add25 = add i32 %add24, %a31_val
  ret i32 %add25
}

define i32 @main() {
entry:
  store i32 0, i32* %a0
  store i32 1, i32* %a1
  store i32 2, i32* %a2
  store i32 3, i32* %a3
  store i32 4, i32* %a4
  store i32 5, i32* %a5
  store i32 6, i32* %a6
  store i32 7, i32* %a7
  store i32 8, i32* %a8
  store i32 9, i32* %a9
  store i32 0, i32* %a10
  store i32 1, i32* %a11
  store i32 2, i32* %a12
  store i32 3, i32* %a13
  store i32 4, i32* %a14
  store i32 5, i32* %a15
  store i32 6, i32* %a16
  store i32 7, i32* %a17
  store i32 8, i32* %a18
  store i32 9, i32* %a19
  store i32 0, i32* %a20
  store i32 1, i32* %a21
  store i32 2, i32* %a22
  store i32 3, i32* %a23
  store i32 4, i32* %a24
  store i32 5, i32* %a25
  store i32 6, i32* %a26
  store i32 7, i32* %a27
  store i32 8, i32* %a28
  store i32 9, i32* %a29
  store i32 0, i32* %a30
  store i32 1, i32* %a31
  store i32 4, i32* %a32
  store i32 5, i32* %a33
  store i32 6, i32* %a34
  store i32 7, i32* %a35
  store i32 8, i32* %a36
  store i32 9, i32* %a37
  store i32 0, i32* %a38
  store i32 1, i32* %a39
  store i32 1, i32* %a0
  store i32 1, i32* %a0
  store i32 1, i32* %a0
  ret i32 0
}

