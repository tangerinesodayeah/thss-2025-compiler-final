@a = global i32 7
define i32 @func() {
entry:
  %a11 = alloca i32
  %b11 = alloca i32
  %a_val1 = load i32, i32* @a
  store i32 %a_val1, i32* %b11
  store i32 1, i32* %a11
  %a_val2 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %icmp1 = icmp eq i32 %a_val2, %b_val1
  br i1 %icmp1, label %then1, label %else1
then1:
  %a_val3 = load i32, i32* %a11
  %add1 = add i32 %a_val3, 1
  store i32 %add1, i32* %a11
  ret i32 1
else1:
  ret i32 0
merge1:
  ret i32 0
}

define i32 @main() {
entry:
  %i11 = alloca i32
  %result11 = alloca i32
  store i32 0, i32* %result11
  store i32 0, i32* %i11
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i11
  %icmp1 = icmp slt i32 %i_val1, 100
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call1 = call i32 @func()
  %icmp2 = icmp eq i32 %call1, 1
  br i1 %icmp2, label %then1, label %merge1
while_after1:
  %result_val2 = load i32, i32* %result11
  %icmp3 = icmp slt i32 %result_val2, 100
  br i1 %icmp3, label %then2, label %else1
then1:
  %result_val1 = load i32, i32* %result11
  %add1 = add i32 %result_val1, 1
  store i32 %add1, i32* %result11
  br label %merge1
merge1:
  %i_val2 = load i32, i32* %i11
  %add2 = add i32 %i_val2, 1
  store i32 %add2, i32* %i11
  br label %while_cond1
then2:
  call void @putint(i32 1)
  br label %merge2
else1:
  call void @putint(i32 0)
  br label %merge2
merge2:
  ret i32 0
}

declare void @putint(i32 %arg0)
