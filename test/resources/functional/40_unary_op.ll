define i32 @main() {
entry:
  %a11 = alloca i32
  store i32 10, i32* %a11
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %a_val1, 0
  %zext1 = zext i1 %icmp1 to i32
  %icmp2 = icmp eq i32 %zext1, 0
  %zext2 = zext i1 %icmp2 to i32
  %icmp3 = icmp eq i32 %zext2, 0
  %zext3 = zext i1 %icmp3 to i32
  %sub1 = sub i32 0, %zext3
  %icmp4 = icmp ne i32 %sub1, 0
  br i1 %icmp4, label %then1, label %else1
then1:
  %sub2 = sub i32 0, 1
  %sub3 = sub i32 0, %sub2
  %sub4 = sub i32 0, %sub3
  store i32 %sub4, i32* %a11
  br label %merge1
else1:
  store i32 0, i32* %a11
  br label %merge1
merge1:
  %a_val2 = load i32, i32* %a11
  ret i32 %a_val2
}

