    .section .text
    .globl _start
_start:
    lui   x30, 0x10000

    addi  x31, x0, 1
    addi  x1, x0, 5
    addi  x2, x0, -3
    add   x3, x1, x2
    addi  x4, x0, 2
    bne   x3, x4, fail
    sub   x3, x1, x2
    addi  x4, x0, 8
    bne   x3, x4, fail
    addi  x3, x1, -2047
    addi  x4, x0, -2042
    bne   x3, x4, fail

    addi  x31, x0, 2
    addi  x1, x0, 0xf0
    addi  x2, x0, 0xff
    xor   x3, x1, x2
    addi  x4, x0, 0x0f
    bne   x3, x4, fail
    or    x3, x1, x2
    addi  x4, x0, 0xff
    bne   x3, x4, fail
    and   x3, x1, x2
    addi  x4, x0, 0xf0
    bne   x3, x4, fail
    xori  x3, x1, -1
    addi  x4, x0, -241
    bne   x3, x4, fail
    ori   x3, x1, 0x0f
    addi  x4, x0, 0xff
    bne   x3, x4, fail
    andi  x3, x2, 0xf0
    addi  x4, x0, 0xf0
    bne   x3, x4, fail

    addi  x31, x0, 3
    lui   x1, 0x80000
    srli  x3, x1, 4
    lui   x4, 0x08000
    bne   x3, x4, fail
    srai  x3, x1, 4
    lui   x4, 0xf8000
    bne   x3, x4, fail
    addi  x2, x0, 4
    srl   x3, x1, x2
    lui   x4, 0x08000
    bne   x3, x4, fail
    sra   x3, x1, x2
    lui   x4, 0xf8000
    bne   x3, x4, fail
    addi  x1, x0, 1
    slli  x3, x1, 31
    lui   x4, 0x80000
    bne   x3, x4, fail
    sll   x3, x1, x2
    addi  x4, x0, 16
    bne   x3, x4, fail
    addi  x2, x0, 33
    sll   x3, x1, x2
    addi  x4, x0, 2
    bne   x3, x4, fail

    addi  x31, x0, 4
    addi  x1, x0, -1
    addi  x2, x0, 1
    addi  x4, x0, 1
    slt   x3, x1, x2
    bne   x3, x4, fail
    sltu  x3, x1, x2
    bne   x3, x0, fail
    slti  x3, x1, 0
    bne   x3, x4, fail
    sltiu x3, x2, -1
    bne   x3, x4, fail
    sltiu x3, x1, 1
    bne   x3, x0, fail

    addi  x31, x0, 5
    lui   x1, 0x12345
    srli  x3, x1, 12
    lui   x4, 0x12
    addi  x4, x4, 0x345
    bne   x3, x4, fail
    auipc x1, 0
    auipc x2, 0
    sub   x3, x2, x1
    addi  x4, x0, 4
    bne   x3, x4, fail
    auipc x1, 1
    auipc x2, 0
    sub   x3, x1, x2
    lui   x4, 1
    addi  x4, x4, -4
    bne   x3, x4, fail

    addi  x31, x0, 6
    addi  x7, x0, 0
    auipc x5, 0
    jal   x1, jal_target
    addi  x6, x5, 8
    bne   x1, x6, fail
    addi  x4, x0, 7
    bne   x7, x4, fail
    auipc x8, 0
    jalr  x9, 13(x8)
    jal   x0, fail
    auipc x11, 0
    addi  x6, x8, 12
    bne   x11, x6, fail
    addi  x6, x8, 8
    bne   x9, x6, fail
    auipc x10, 0
    addi  x1, x10, 0
    jalr  x1, 16(x1)
    jal   x0, fail
    addi  x6, x10, 12
    bne   x1, x6, fail
    jal   x0, branch_tests

jal_target:
    addi  x7, x0, 7
    jalr  x0, 0(x1)

branch_tests:
    addi  x31, x0, 7
    addi  x1, x0, -1
    addi  x2, x0, 1
    beq   x1, x1, b1
    jal   x0, fail
b1: beq   x1, x2, fail
    bne   x1, x2, b2
    jal   x0, fail
b2: bne   x1, x1, fail
    blt   x1, x2, b3
    jal   x0, fail
b3: blt   x2, x1, fail
    bge   x2, x1, b4
    jal   x0, fail
b4: bge   x1, x2, fail
    bge   x1, x1, b5
    jal   x0, fail
b5: bltu  x2, x1, b6
    jal   x0, fail
b6: bltu  x1, x2, fail
    bgeu  x1, x2, b7
    jal   x0, fail
b7: bgeu  x2, x1, fail
    addi  x3, x0, 0
    addi  x4, x0, 5
loop:
    addi  x3, x3, 1
    bne   x3, x4, loop

    addi  x31, x0, 8
    lui   x1, 0x8
    lui   x2, 0x12345
    addi  x2, x2, 0x678
    sw    x2, 0(x1)
    lw    x3, 0(x1)
    bne   x3, x2, fail
    lbu   x3, 0(x1)
    addi  x4, x0, 0x78
    bne   x3, x4, fail
    lbu   x3, 3(x1)
    addi  x4, x0, 0x12
    bne   x3, x4, fail
    lhu   x3, 2(x1)
    lui   x4, 0x1
    addi  x4, x4, 0x234
    bne   x3, x4, fail
    sw    x0, 4(x1)
    addi  x2, x0, -128
    sb    x2, 4(x1)
    lb    x3, 4(x1)
    bne   x3, x2, fail
    lbu   x3, 4(x1)
    addi  x4, x0, 0x80
    bne   x3, x4, fail
    addi  x2, x0, -2
    sh    x2, 6(x1)
    lh    x3, 6(x1)
    bne   x3, x2, fail
    lhu   x3, 6(x1)
    lui   x4, 0x10
    addi  x4, x4, -2
    bne   x3, x4, fail
    lw    x3, 4(x1)
    lui   x4, 0xfffe0
    addi  x4, x4, 0x080
    bne   x3, x4, fail
    sw    x0, 8(x1)
    addi  x2, x0, 0x55
    sb    x2, 9(x1)
    lw    x3, 8(x1)
    lui   x4, 0x5
    addi  x4, x4, 0x500
    bne   x3, x4, fail
    addi  x5, x1, 16
    sw    x2, -4(x5)
    lw    x3, 12(x1)
    bne   x3, x2, fail

    addi  x31, x0, 9
    addi  x0, x0, 5
    fence
    add   x3, x0, x0
    sub   x6, x5, x5
    bne   x3, x6, fail
    jal   x0, far_tests

fail:
    slli  x1, x31, 1
    ori   x1, x1, 1
    sw    x1, 0(x30)
fail_loop:
    jal   x0, fail_loop

far_tests:
    addi  x31, x0, 10
    beq   x0, x0, far_branch
    jal   x0, fail
    .rept 600
    jal   x0, fail
    .endr
far_branch:
    jal   x0, far_jump
    jal   x0, fail
    .rept 1540
    jal   x0, fail
    .endr
far_jump:

pass:
    addi  x1, x0, 1
    sw    x1, 0(x30)
pass_loop:
    jal   x0, pass_loop
