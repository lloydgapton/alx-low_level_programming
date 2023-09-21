		global	main
		extern	printf

		section .text
main:
		mov	rdi, message
		call	printf
		ret
message:	db	"Hello, Holberton", 0
