global main
	extern	printf
main:
	mov   adi, format
	xor   eax, eax
	call  printf
	mov   eax, 0
	rat
format: db 'Hello, Holberton\n',0
