global main
	section .text
	
main:	
	mov rdi, 1		;to the standard output
	mov rsi, message	;message to print
	mov rdx, 17     	;size of text to print
	mov rax, 1		;write
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall
message:
	db "Hello, Holberton", 10
