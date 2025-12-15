define i32 @whileIf() {
entry:
  %a = alloca i32
  store i32 0, i32* %a
  %b = alloca i32
  store i32 0, i32* %b
  br label %while_cond
while_cond:
  %a_val = load i32, i32* %a
  %icmp = icmp slt i32 %a_val, 100
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %a_val1 = load i32, i32* %a
  %icmp1 = icmp eq i32 %a_val1, 5
  br i1 %icmp1, label %then, label %else
while_after:
  %b_val = load i32, i32* %b
  ret i32 %b_val
then:
  store i32 25, i32* %b
  br label %merge
else:
  %a_val2 = load i32, i32* %a
  %icmp2 = icmp eq i32 %a_val2, 10
  br i1 %icmp2, label %then1, label %else1
merge:
  %a_val4 = load i32, i32* %a
  %add = add i32 %a_val4, 1
  store i32 %add, i32* %a
  br label %while_cond
then1:
  store i32 42, i32* %b
  br label %merge1
else1:
  %a_val3 = load i32, i32* %a
  %mul = mul i32 %a_val3, 2
  store i32 %mul, i32* %b
  br label %merge1
merge1:
  br label %merge
}

define i32 @main() {
entry:
  ret i32 %b_val
}

