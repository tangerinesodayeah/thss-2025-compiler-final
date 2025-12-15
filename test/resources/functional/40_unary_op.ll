define i32 @main() {
entry:
  %a = alloca i32
  store i32 10, i32* %a
  %a_val = load i32, i32* %a
  %icmp = icmp eq i32 %a_val, 0
  %icmp1 = icmp eq i1 %icmp, 0
  %icmp2 = icmp eq i1 %icmp1, 0
  %sub = sub i32 0, %icmp2
  br i1 %sub, label %then, label %else
then:
  %sub1 = sub i32 0, 1
  %sub2 = sub i32 0, %sub1
  %sub3 = sub i32 0, %sub2
  store i32 %sub3, i32* %a
  br label %merge
else:
  store i32 0, i32* %a
  br label %merge
merge:
  %a_val1 = load i32, i32* %a
  ret i32 %a_val1
}

