define i32 @main() {
entry:
  %i = alloca i32
  store i32 0, i32* %i
  store i32 1, i32* %k
  br label %while_cond
while_cond:
  %i_val = load i32, i32* %i
  %n_val = load i32, i32* %n
  %sub = sub i32 %n_val, 1
  %icmp = icmp sle i32 %i_val, %sub
  br i1 %icmp, label %while_body, label %while_after
while_body:
  %i_val1 = load i32, i32* %i
  %add = add i32 %i_val1, 1
  store i32 %add, i32* %i
  %k_val = load i32, i32* %k
  %add1 = add i32 %k_val, 1
  %k_val1 = load i32, i32* %k
  %k_val2 = load i32, i32* %k
  %add2 = add i32 %k_val1, %k_val2
  store i32 %add2, i32* %k
  br label %while_cond
while_after:
  %k_val3 = load i32, i32* %k
  ret i32 %k_val3
}

