define i32 @main() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 56, i32* %a11
  store i32 4, i32* %b11
  %a_val1 = load i32, i32* %a11
  %sub1 = sub i32 0, 4
  %sub2 = sub i32 %a_val1, %sub1
  %b_val1 = load i32, i32* %b11
  %add1 = add i32 %sub2, %b_val1
  store i32 %add1, i32* %a11
  %a_val2 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %a_val2, 0
  %zext1 = zext i1 %icmp1 to i32
  %icmp2 = icmp eq i32 %zext1, 0
  %zext2 = zext i1 %icmp2 to i32
  %icmp3 = icmp eq i32 %zext2, 0
  %zext3 = zext i1 %icmp3 to i32
  %sub3 = sub i32 0, %zext3
  %icmp4 = icmp ne i32 %sub3, 0
  br i1 %icmp4, label %then1, label %else1
then1:
  %sub4 = sub i32 0, 1
  %sub5 = sub i32 0, %sub4
  %sub6 = sub i32 0, %sub5
  store i32 %sub6, i32* %a11
  br label %merge1
else1:
  %b_val2 = load i32, i32* %b11
  %add2 = add i32 0, %b_val2
  store i32 %add2, i32* %a11
  br label %merge1
merge1:
  %a_val3 = load i32, i32* %a11
  call void @putint(i32 %a_val3)
  ret i32 0
}

declare void @putint(i32 %arg0)
