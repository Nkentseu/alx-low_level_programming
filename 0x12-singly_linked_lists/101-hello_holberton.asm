section .data
    hello db "Hello, World!", 0
    format db "%s", 10

section .text
    extern printf

global main

main:
    push rbp
    mov rbp, rsp

    mov rsi, hello
    mov rdi, format
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
