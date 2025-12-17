define i32 @doubleWhile() {
entry:
  %j11 = alloca i32
  %i11 = alloca i32
  store i32 5, i32* %i11
  store i32 7, i32* %j11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp slt i32 %i_val1, 100
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i11
  %add1 = add i32 %i_val2, 30
  store i32 %add1, i32* %i11
  br label %while_cond2
while_after1:
  %j_val4 = load i32, i32* %j11
  ret i32 %j_val4
while_cond2:
  %j_val1 = load i32, i32* %j11
  %icmp2 = icmp slt i32 %j_val1, 100
  br i1 %icmp2, label %while_body2, label %while_after2
while_body2:
  %j_val2 = load i32, i32* %j11
  %add2 = add i32 %j_val2, 6
  store i32 %add2, i32* %j11
  br label %while_cond2
while_after2:
  %j_val3 = load i32, i32* %j11
  %sub1 = sub i32 %j_val3, 100
  store i32 %sub1, i32* %j11
  br label %while_cond1
}

define i32 @main() {
entry:
  %call1 = call i32 @doubleWhile()
  ret i32 %call1
}

