define void @move(i32 %arg0, i32 %arg1) {
entry:
  %y11 = alloca i32
  %x11 = alloca i32
  store i32 %arg0, i32* %x11
  store i32 %arg1, i32* %y11
  %x_val1 = load i32, i32* %x11
  call void @putint(i32 %x_val1)
  call void @putch(i32 32)
  %y_val1 = load i32, i32* %y11
  call void @putint(i32 %y_val1)
  call void @putch(i32 44)
  call void @putch(i32 32)
  ret void
}

declare void @putint(i32 %arg0)
declare void @putch(i32 %arg0)
define void @hanoi(i32 %arg0, i32 %arg1, i32 %arg2, i32 %arg3) {
entry:
  %three11 = alloca i32
  %two11 = alloca i32
  %one11 = alloca i32
  %n11 = alloca i32
  store i32 %arg0, i32* %n11
  store i32 %arg1, i32* %one11
  store i32 %arg2, i32* %two11
  store i32 %arg3, i32* %three11
  %n_val1 = load i32, i32* %n11
  %icmp1 = icmp eq i32 %n_val1, 1
  br i1 %icmp1, label %then1, label %else1
then1:
  %one_val1 = load i32, i32* %one11
  %three_val1 = load i32, i32* %three11
  call void @move(i32 %one_val1, i32 %three_val1)
  br label %merge1
else1:
  %n_val2 = load i32, i32* %n11
  %sub1 = sub i32 %n_val2, 1
  %one_val2 = load i32, i32* %one11
  %three_val2 = load i32, i32* %three11
  %two_val1 = load i32, i32* %two11
  call void @hanoi(i32 %sub1, i32 %one_val2, i32 %three_val2, i32 %two_val1)
  %one_val3 = load i32, i32* %one11
  %three_val3 = load i32, i32* %three11
  call void @move(i32 %one_val3, i32 %three_val3)
  %n_val3 = load i32, i32* %n11
  %sub2 = sub i32 %n_val3, 1
  %two_val2 = load i32, i32* %two11
  %one_val4 = load i32, i32* %one11
  %three_val4 = load i32, i32* %three11
  call void @hanoi(i32 %sub2, i32 %two_val2, i32 %one_val4, i32 %three_val4)
  br label %merge1
merge1:
  ret void
}

define i32 @main() {
entry:
  %n11 = alloca i32
  %call1 = call i32 @getint()
  store i32 %call1, i32* %n11
  br label %while_cond1
while_cond1:
  %n_val1 = load i32, i32* %n11
  %icmp1 = icmp sgt i32 %n_val1, 0
  br i1 %icmp1, label %while_body1, label %while_after1
while_body1:
  %call2 = call i32 @getint()
  call void @hanoi(i32 %call2, i32 1, i32 2, i32 3)
  call void @putch(i32 10)
  %n_val2 = load i32, i32* %n11
  %sub1 = sub i32 %n_val2, 1
  store i32 %sub1, i32* %n11
  br label %while_cond1
while_after1:
  ret i32 0
}

declare i32 @getint()
