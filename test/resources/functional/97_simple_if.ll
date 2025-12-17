define i32 @main() {
entry:
  %c11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 2, i32* %a11
  store i32 10, i32* %b11
  %a_val1 = load i32, i32* %a11
  %b_val1 = load i32, i32* %b11
  %icmp1 = icmp slt i32 %a_val1, %b_val1
  br i1 %icmp1, label %then1, label %else1
then1:
  store i32 30, i32* %c11
  br label %merge1
else1:
  %a_val2 = load i32, i32* %a11
  %b_val2 = load i32, i32* %b11
  %sub1 = sub i32 %a_val2, %b_val2
  %mul1 = mul i32 %sub1, 10
  %add1 = add i32 %mul1, 30
  store i32 %add1, i32* %c11
  br label %merge1
merge1:
  %c_val1 = load i32, i32* %c11
  %icmp2 = icmp sgt i32 %c_val1, 1000
  br i1 %icmp2, label %then2, label %merge2
then2:
  store i32 1000, i32* %c11
  br label %merge2
merge2:
  %c_val2 = load i32, i32* %c11
  ret i32 %c_val2
}

