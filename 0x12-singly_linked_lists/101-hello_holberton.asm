global  main
	extern  printf

;main
main:
	mov		edi, m
	xor		eax, eax
	call		printf
	mov		eax, 0
	ret

;m
m: db 'Hello, Holberton', 0
