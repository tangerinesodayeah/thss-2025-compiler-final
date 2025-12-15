define i32 @ifWhile() {
entry:
  %a = alloca i32
  store i32 0, i32* %a
  %b = alloca i32
  store i32 3, i32* %b
  %a_val = load i32, i32* %a
  %icmp = icmp eq i32 %a_val, 5
  br i1 %icmp, label %then, label %else
then:
  br label %while_cond
else:
  br label %while_cond1
merge:
  %b_val4 = load i32, i32* %b
  ret i32 %b_val4
while_cond:
  %b_val = load i32, i32* %b
  %icmp1 = icmp eq i32 %b_val, 2
  br i1 %icmp1, label %while_body, label %while_after
while_body:
  %b_val1 = load i32, i32* %b
  %add = add i32 %b_val1, 2
  store i32 %add, i32* %b
  br label %while_cond
while_after:
  %b_val2 = load i32, i32* %b
  %add1 = add i32 %b_val2, 25
  store i32 %add1, i32* %b
  br label %merge
while_cond1:
  %a_val1 = load i32, i32* %a
  %icmp2 = icmp slt i32 %a_val1, 5
  br i1 %icmp2, label %while_body1, label %while_after1
while_body1:
  %b_val3 = load i32, i32* %b
  %mul = mul i32 %b_val3, 2
  store i32 %mul, i32* %b
  %a_val2 = load i32, i32* %a
  %add2 = add i32 %a_val2, 1
  store i32 %add2, i32* %a
  br label %while_cond1
while_after1:
  br label %merge
}

define i32 @main() {
entry:
  ret i32 %b_val4
}

