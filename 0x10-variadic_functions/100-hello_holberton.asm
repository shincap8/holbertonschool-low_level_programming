section .text
	global _start

_start:
	mov edx,17
	mov ecx,text
	mov ebx,1
	mov eax,4
	int 0x80
	mov eax,0
	int 0x80

section.data
	text db 'Hello, Holberton',0xa
