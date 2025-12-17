define i32 @if_if_Else() {
entry:
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 5, i32* %a11
  store i32 10, i32* %b11
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %a_val1, 5
  br i1 %icmp1, label %then1, label %else1
then1:
  %b_val1 = load i32, i32* %b11
  %icmp2 = icmp eq i32 %b_val1, 10
  br i1 %icmp2, label %then2, label %merge2
else1:
  %a_val2 = load i32, i32* %a11
  %add1 = add i32 %a_val2, 15
  store i32 %add1, i32* %a11
  br label %merge1
merge1:
  %a_val3 = load i32, i32* %a11
  ret i32 %a_val3
then2:
  store i32 25, i32* %a11
  br label %merge2
merge2:
  br label %merge1
}

define i32 @main() {
entry:
  %call1 = call i32 @if_if_Else()
  ret i32 %call1
}

