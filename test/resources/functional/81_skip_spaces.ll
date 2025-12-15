define i32 @main() {
entry:
  %arr = alloca i32
  %i = alloca i32
  store i32 0, i32* %i
  %sum = alloca i32
  store i32 0, i32* %sum
  br label %while_cond
while_cond:
  br i1 0, label %while_body, label %while_after
while_body:
  store i32 0, i32* %arr
  %i_val = load i32, i32* %i
  %add = add i32 %i_val, 1
  store i32 %add, i32* %i
  br label %while_cond
while_after:
  br label %while_cond1
while_cond1:
  %i_val1 = load i32, i32* %i
  br i1 %i_val1, label %while_body1, label %while_after1
while_body1:
  %i_val2 = load i32, i32* %i
  %sub = sub i32 %i_val2, 1
  store i32 %sub, i32* %i
  %sum_val = load i32, i32* %sum
  %arr_val = load i32, i32* %arr
  %add1 = add i32 %sum_val, %arr_val
  store i32 %add1, i32* %sum
  br label %while_cond1
while_after1:
  %sum_val1 = load i32, i32* %sum
  %srem = srem i32 %sum_val1, 79
  ret i32 %srem
}

