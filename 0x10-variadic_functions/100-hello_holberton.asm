section .data
	str db "Hello, Holberton",0xa

section .text
	global_start

_start:
	mov edx,17
	mov ecx,str
	mov ebx,1
	mov eax,4
	int 0x80
	mov eax,0
	int 0x80
