define i32 @whileIf() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 0, i32* %a11
  store i32 0, i32* %b11
  br label %while_cond1
while_cond1:
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp slt i32 %a_val1, 100
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %a_val2 = load i32, i32* %a11
  %icmp2 = icmp eq i32 %a_val2, 5
  br i1 %icmp2, label %then1, label %else1
while_after1:
  %b_val1 = load i32, i32* %b11
  ret i32 %b_val1
then1:
  store i32 25, i32* %b11
  br label %merge1
else1:
  %a_val3 = load i32, i32* %a11
  %icmp3 = icmp eq i32 %a_val3, 10
  br i1 %icmp3, label %then2, label %else2
merge1:
  %a_val5 = load i32, i32* %a11
  %add1 = add i32 %a_val5, 1
  store i32 %add1, i32* %a11
  br label %while_cond1
then2:
  store i32 42, i32* %b11
  br label %merge2
else2:
  %a_val4 = load i32, i32* %a11
  %mul1 = mul i32 %a_val4, 2
  store i32 %mul1, i32* %b11
  br label %merge2
merge2:
  br label %merge1
}

define i32 @main() {
entry:
  %call1 = call i32 @whileIf()
  ret i32 %call1
}

