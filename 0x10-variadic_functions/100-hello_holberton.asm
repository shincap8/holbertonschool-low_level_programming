section .data
	str db "Hello, Holberton",0xa
	len equ $ - str

section .text
	global_start

_start:
	mov edx,len
	mov ecx,str
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,0
	int 0x80
