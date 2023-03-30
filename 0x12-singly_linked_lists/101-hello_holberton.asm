extern printf

section .data
	message db 'Hello, Holberton',0Ah
	format db '%s', 0

section .text
	global main

main:
	push rbp
	mov rbp, rsp
	sub rsp, 16

	lea rdi, [message]
	mov rsi, format
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp

	xor eax, eax
	ret
