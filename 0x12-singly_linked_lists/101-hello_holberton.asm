section .data
    hello db "Hello, Holberton", 10

section .text
    extern printf

global main

main:
    push rbp
    mov rbp, rsp

    mov rdi, hello
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
