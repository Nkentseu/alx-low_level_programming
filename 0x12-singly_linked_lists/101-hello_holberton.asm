section .data
	hello db "Hello, Holberton", 10

section .text
	global main
	extern printf

main:
	push hello
	call printf
	add rsp, 8
	xor eax, eax
	ret
