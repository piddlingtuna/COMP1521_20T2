# i in register $t0
main:

# i = 1
loop2:
# while (i < 10) {

#
#
#   $t3 = &numbers[i]
#   $t5 = numbers[i]


#   if (numbers([i]) < 0) {
#     numbers[i] += 42
#
#   }
skip2:
#   i++;
# }
end2:

        # i is stored in $t0

        li      $t0, 0           # i = 0
        la      $t2, numbers     # $t2 = &numbers
loop3:
        bge     $t0, 10, end3   # while (i < 10) {

        mul     $t1, $t0, 4     #
        add     $t1, $t1, $t2   #   $t1 = &numbers[i]
        lw      $a0, ($t1)       #   x = numbers[i]

        # jump and link
        # $ra = PC
        # j function
        move $s0, $ra
        jal function
        jump back here


    li $v0, 1           #
    syscall             #   printf("%d", x);

    li $a0, 10          #   10 == '\n
    li $v0, 11          #
    syscall             #   printf("%c", '\n);

    add $t0, $t0, 1     #   i++;
    b loop3             # }
end3:

        move $ra, $s0
        jr $ra

# return

.data

numbers:
    .word 0 1 2 -3 4 -5 6 -7 8 9  # int numbers[10] = {0,1,2,-3,4,-5,6,-7,8,9};
