define i32 @ifElseIf() {
entry:
  %and_res21 = alloca i32
  %and_res11 = alloca i32
  %or_res11 = alloca i32
  %b11 = alloca i32
  %a11 = alloca i32
  store i32 5, i32* %a11
  store i32 10, i32* %b11
  %a_val1 = load i32, i32* %a11
  %icmp1 = icmp eq i32 %a_val1, 6
  br i1 %icmp1, label %or_true1, label %or_rhs1
then1:
  %a_val2 = load i32, i32* %a11
  ret i32 %a_val2
else1:
  %b_val2 = load i32, i32* %b11
  %icmp4 = icmp eq i32 %b_val2, 10
  br i1 %icmp4, label %and_rhs1, label %and_false1
merge1:
  %a_val7 = load i32, i32* %a11
  ret i32 %a_val7
or_true1:
  store i32 1, i32* %or_res11
  br label %or_merge1
or_rhs1:
  %b_val1 = load i32, i32* %b11
  %icmp2 = icmp eq i32 %b_val1, 11
  %zext1 = zext i1 %icmp2 to i32
  store i32 %zext1, i32* %or_res11
  br label %or_merge1
or_merge1:
  %or_res_val1 = load i32, i32* %or_res11
  %icmp3 = icmp ne i32 %or_res_val1, 0
  br i1 %icmp3, label %then1, label %else1
then2:
  store i32 25, i32* %a11
  br label %merge2
else2:
  %b_val3 = load i32, i32* %b11
  %icmp7 = icmp eq i32 %b_val3, 10
  br i1 %icmp7, label %and_rhs2, label %and_false2
merge2:
  br label %merge1
and_rhs1:
  %a_val3 = load i32, i32* %a11
  %icmp5 = icmp eq i32 %a_val3, 1
  %zext2 = zext i1 %icmp5 to i32
  store i32 %zext2, i32* %and_res11
  br label %and_merge1
and_false1:
  store i32 0, i32* %and_res11
  br label %and_merge1
and_merge1:
  %and_res_val1 = load i32, i32* %and_res11
  %icmp6 = icmp ne i32 %and_res_val1, 0
  br i1 %icmp6, label %then2, label %else2
then3:
  %a_val5 = load i32, i32* %a11
  %add1 = add i32 %a_val5, 15
  store i32 %add1, i32* %a11
  br label %merge3
else3:
  %a_val6 = load i32, i32* %a11
  %sub2 = sub i32 0, %a_val6
  store i32 %sub2, i32* %a11
  br label %merge3
merge3:
  br label %merge2
and_rhs2:
  %a_val4 = load i32, i32* %a11
  %sub1 = sub i32 0, 5
  %icmp8 = icmp eq i32 %a_val4, %sub1
  %zext3 = zext i1 %icmp8 to i32
  store i32 %zext3, i32* %and_res21
  br label %and_merge2
and_false2:
  store i32 0, i32* %and_res21
  br label %and_merge2
and_merge2:
  %and_res_val2 = load i32, i32* %and_res21
  %icmp9 = icmp ne i32 %and_res_val2, 0
  br i1 %icmp9, label %then3, label %else3
}

define i32 @main() {
entry:
  %call1 = call i32 @ifElseIf()
  call void @putint(i32 %call1)
  ret i32 0
}

declare void @putint(i32 %arg0)
