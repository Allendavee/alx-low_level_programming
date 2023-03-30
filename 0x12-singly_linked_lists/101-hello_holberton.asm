section .data
    format db "Hello, Holberton\n", 0

section .text
    global main

    extern printf

main:
    push format
    call printf
    add rsp, 8 ; clean up the stack

    xor eax, eax ; return 0
    ret

