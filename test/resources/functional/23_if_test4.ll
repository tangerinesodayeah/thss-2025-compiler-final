define i32 @if_ifElse_() {
entry:
  %a = alloca i32
  store i32 5, i32* %a
  %b = alloca i32
  store i32 10, i32* %b
  %a_val = load i32, i32* %a
  %icmp = icmp eq i32 %a_val, 5
  br i1 %icmp, label %then, label %merge
then:
  %b_val = load i32, i32* %b
  %icmp1 = icmp eq i32 %b_val, 10
  br i1 %icmp1, label %then1, label %else
merge:
  %a_val2 = load i32, i32* %a
  ret i32 %a_val2
then1:
  store i32 25, i32* %a
  br label %merge1
else:
  %a_val1 = load i32, i32* %a
  %add = add i32 %a_val1, 15
  store i32 %add, i32* %a
  br label %merge1
merge1:
  br label %merge
}

define i32 @main() {
entry:
  ret i32 %a_val2
}

