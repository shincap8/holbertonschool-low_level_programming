section .data
	str db "Hello, Holberton",10,0
	len equ $ - str

section .text
	global_start

_start:
	mov edx,len
	mov ecx,str
	mov ebx,1
	mov eax,4
	int 0x80

	mov ebx,0
	mov eax,1
	int 0x80
