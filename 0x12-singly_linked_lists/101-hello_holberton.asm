		global	main
		extern	printf

		section .text
main:						;This is called by the library
		mov	rdi, message		;First integer (or pointer) argument in rdi
						 ; puts(message)
						;Return from main back into C library wrapper
		call	printf
		ret
message:	db	"Hello, Holberton", 0
