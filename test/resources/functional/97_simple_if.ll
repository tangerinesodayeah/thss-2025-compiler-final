define i32 @main() {
entry:
  %a = alloca i32
  store i32 2, i32* %a
  %b = alloca i32
  store i32 10, i32* %b
  %c = alloca i32
  %a_val = load i32, i32* %a
  %b_val = load i32, i32* %b
  %icmp = icmp slt i32 %a_val, %b_val
  br i1 %icmp, label %then, label %else
then:
  store i32 30, i32* %c
  br label %merge
else:
  %a_val1 = load i32, i32* %a
  %b_val1 = load i32, i32* %b
  %sub = sub i32 %a_val1, %b_val1
  %mul = mul i32 %sub, 10
  %add = add i32 %mul, 30
  store i32 %add, i32* %c
  br label %merge
merge:
  %c_val = load i32, i32* %c
  %icmp1 = icmp sgt i32 %c_val, 1000
  br i1 %icmp1, label %then1, label %merge1
then1:
  store i32 1000, i32* %c
  br label %merge1
merge1:
  %c_val1 = load i32, i32* %c
  ret i32 %c_val1
}

