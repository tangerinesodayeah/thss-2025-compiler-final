define i32 @doubleWhile() {
entry:
  %i = alloca i32
  store i32 5, i32* %i
  %j = alloca i32
  store i32 7, i32* %j
  br label %while_cond
while_cond:
  %i_val = load i32, i32* %i
  %icmp = icmp slt i32 %i_val, 100
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %i_val1 = load i32, i32* %i
  %add = add i32 %i_val1, 30
  store i32 %add, i32* %i
  br label %while_cond1
while_after:
  %j_val3 = load i32, i32* %j
  ret i32 %j_val3
while_cond1:
  %j_val = load i32, i32* %j
  %icmp1 = icmp slt i32 %j_val, 100
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %j_val1 = load i32, i32* %j
  %add1 = add i32 %j_val1, 6
  store i32 %add1, i32* %j
  br label %while_cond1
while_after1:
  %j_val2 = load i32, i32* %j
  %sub = sub i32 %j_val2, 100
  store i32 %sub, i32* %j
  br label %while_cond
}

define i32 @main() {
entry:
  ret i32 %j_val3
}

