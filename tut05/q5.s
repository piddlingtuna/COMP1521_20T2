# read 10 numbers into an array
# i in register $t0
main:

    li $t0, 0       # i = 0
loop0:
    bge $t0, 10, end0
# while (i < 10) { i >= 10

#   scanf("%d", &numbers[i]);
#

#   calculate &numbers[i]
#
#
#   store entered number in array
    li $v0, 5
    syscall
    # a0
    la $t1, numbers
    mul $t2, $t0, 4
    add $t2, $t2, $t1
    sw $a0, ($t2)




    addi $t0, $t0, 1
    b loop;
    # i = i + 1
#   i++;
# }
end0:

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
# return

.data

numbers:
    # .space 40
    .word 0 0 0 0 0 0 0 0 0 0  # int numbers[10] = {0};
    # .word 0:10
