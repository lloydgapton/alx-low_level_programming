section .data
    hello db "Hello, Holberton",10,0  ; The string to print, followed by a newline and null terminator

section .text
    global main

extern printf

main:
    mov rdi, hello  ; Load the address of the string into rdi (1st argument for printf)
    call printf     ; Call the printf function

    ; Exit the program
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; exit status 0
    syscall
