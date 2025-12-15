define i32 @main() {
entry:
  %i = alloca i32
  store i32 0, i32* %i
  %sum = alloca i32
  store i32 0, i32* %sum
  br label %while_cond
while_cond:
  %i_val = load i32, i32* %i
  %icmp = icmp slt i32 %i_val, 100
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %i_val1 = load i32, i32* %i
  %icmp1 = icmp eq i32 %i_val1, 50
  br i1 %icmp1, label %then, label %merge
while_after:
  %sum_val1 = load i32, i32* %sum
  ret i32 %sum_val1
then:
  %i_val2 = load i32, i32* %i
  %add = add i32 %i_val2, 1
  store i32 %add, i32* %i
  br label %while_cond
merge:
  %sum_val = load i32, i32* %sum
  %i_val3 = load i32, i32* %i
  %add1 = add i32 %sum_val, %i_val3
  store i32 %add1, i32* %sum
  %i_val4 = load i32, i32* %i
  %add2 = add i32 %i_val4, 1
  store i32 %add2, i32* %i
  br label %while_cond
}

