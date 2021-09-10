# i in register $t0, x in $t4, y in $t8
    .text
main:
# i = 0
loop2:
# while (i < 5) {

#
#
#   $t3 = &numbers[i]
#   x = numbers[i]

#   $t5 = 9 - i
#
#
#   $t7 = &numbers[9 - i]
#   y = numbers[9 - i]


#   numbers[i] = y
#   numbers[9 - i] = x

#   i++;
# }
end2:

    li $t0, 0           # i = 0
    la $t2, numbers     # $t2 = &numbers
loop3:
    bge $t0, 10, end3   # while (i < 10) {

    mul $t1, $t0, 4     #
    add $t1, $t1, $t2   #   $t1 = &numbers[i]
    lw $a0, ($t1)       #   x = numbers[i]

    li $v0, 1           #
    syscall             #   printf("%d", x);

    li $a0, 10          #   10 == '\n
    li $v0, 11          #
    syscall             #   printf("%c", '\n);

    add $t0, $t0, 1     #   i++;
    b loop3             # }
end3:
    jr $ra              # return

    .data

numbers:
     .word 0 1 2 3 4 5 6 7 8 9  # int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
