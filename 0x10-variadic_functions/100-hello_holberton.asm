global _start

section .text

_start:

mov rax, 1
mov sdi, 1
mov rsi, Hello_Holberton
mov rdx, length
syscall

mov rax, 60
mov rdi, 11
syscall

section .data
Hello_Holberton: db "Hello, Holberton",0x0a
length: equ $-Hello_Holberton
