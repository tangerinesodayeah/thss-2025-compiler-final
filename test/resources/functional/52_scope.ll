define i32 @func() {
entry:
  %b = alloca i32
  %a_val = load i32, i32* %a
  store i32 %a_val, i32* %b
  %a = alloca i32
  store i32 1, i32* %a
  %a_val1 = load i32, i32* %a
  %b_val = load i32, i32* %b
  %icmp = icmp eq i32 %a_val1, %b_val
  br i1 %icmp, label %then, label %else
then:
  %a_val2 = load i32, i32* %a
  %add = add i32 %a_val2, 1
  store i32 %add, i32* %a
  ret i32 1
else:
  ret i32 0
merge:
}

define i32 @main() {
entry:
  %result = alloca i32
  store i32 0, i32* %result
  %i = alloca i32
  store i32 0, i32* %i
  br label %while_cond
while_cond:
  %i_val = load i32, i32* %i
  %icmp = icmp slt i32 %i_val, 100
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %icmp1 = icmp eq i1 %icmp, 1
  br i1 %icmp1, label %then, label %merge
while_after:
  %result_val1 = load i32, i32* %result
  %icmp2 = icmp slt i32 %result_val1, 100
  br i1 %icmp2, label %then1, label %else
then:
  %result_val = load i32, i32* %result
  %add = add i32 %result_val, 1
  store i32 %add, i32* %result
  br label %merge
merge:
  %i_val1 = load i32, i32* %i
  %add1 = add i32 %i_val1, 1
  store i32 %add1, i32* %i
  br label %while_cond
then1:
  br label %merge1
else:
  br label %merge1
merge1:
  ret i32 0
}

