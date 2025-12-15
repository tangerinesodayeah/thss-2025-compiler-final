define i32 @main() {
entry:
  %a = alloca i32
  %b = alloca i32
  store i32 70, i32* %a
  store i32 0, i32* %b
  %a_val = load i32, i32* %a
  %sub = sub i32 0, 4
  %sub1 = sub i32 %a_val, %sub
  %b_val = load i32, i32* %b
  %add = add i32 %sub1, %b_val
  store i32 %add, i32* %a
  %a_val1 = load i32, i32* %a
  %icmp = icmp eq i32 %a_val1, 0
  %icmp1 = icmp eq i1 %icmp, 0
  %icmp2 = icmp eq i1 %icmp1, 0
  %sub2 = sub i32 0, %icmp2
  br i1 %sub2, label %then, label %else
then:
  %sub3 = sub i32 0, 1
  %sub4 = sub i32 0, %sub3
  %sub5 = sub i32 0, %sub4
  store i32 %sub5, i32* %a
  br label %merge
else:
  %b_val1 = load i32, i32* %b
  %add1 = add i32 0, %b_val1
  store i32 %add1, i32* %a
  br label %merge
merge:
  ret i32 0
}

