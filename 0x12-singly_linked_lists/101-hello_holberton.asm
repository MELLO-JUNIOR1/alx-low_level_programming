section .data
    hello db 'Hello, Holberton', 0
    fmt db '%s', 10, 0

section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp
    mov esi, hello
    mov edi, fmt
    xor eax, eax
    call printf
    mov eax, 0
    pop rbp
    ret
