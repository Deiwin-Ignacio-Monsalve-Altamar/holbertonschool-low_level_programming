section .text
    global _start

_start:

        mov     edx,txtlong
        mov     ecx,texto
	mov     ebx,1
        mov     eax,4
        int     0x80

        mov     eax,1
        int     0x80

section .data
texto   db      'Hola, Holberton', 0xa
txtlong equ     $ - texto
