section .data
    hello: db "Hello, Holberton", 0
    format: db "%s\n", 0

section .text
    global main

main:
    ; Call printf with the hello string as an argument
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Exit the program with status code 0
    xor rdi, rdi
    mov rax, 60 ; Syscall number for exit
    syscall

