define void @reverse(i32 %arg0) {
entry:
  %next11 = alloca i32
  %n11 = alloca i32
  store i32 %arg0, i32* %n11
  %n_val1 = load i32, i32* %n11
  %icmp1 = icmp sle i32 %n_val1, 1
  br i1 %icmp1, label %then1, label %else1
then1:
  %call1 = call i32 @getint()
  store i32 %call1, i32* %next11
  %next_val1 = load i32, i32* %next11
  call void @putint(i32 %next_val1)
  br label %merge1
else1:
  %call2 = call i32 @getint()
  store i32 %call2, i32* %next11
  %n_val2 = load i32, i32* %n11
  %sub1 = sub i32 %n_val2, 1
  call void @reverse(i32 %sub1)
  %next_val2 = load i32, i32* %next11
  call void @putint(i32 %next_val2)
  br label %merge1
merge1:
  ret void
}

declare i32 @getint()
declare void @putint(i32 %arg0)
define i32 @main() {
entry:
  %i11 = alloca i32
  store i32 200, i32* %i11
  %i_val1 = load i32, i32* %i11
  call void @reverse(i32 %i_val1)
  ret i32 0
}

