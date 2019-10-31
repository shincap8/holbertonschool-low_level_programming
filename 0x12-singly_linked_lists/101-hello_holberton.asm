section .data
	text db 'Hello, Holberton',0xa
section .text
	global main 
main:
	mov ebx,1
	mov ecx,text
	mov edx,17
	mov eax,4
	syscall
	mov eax,0
	syscall
