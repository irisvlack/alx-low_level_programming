section .data
    hello_msg db 'Hello, Holberton', 0    ; Null-terminated string

section .text
    global print_hello
    extern printf

print_hello:
    ; Call printf to print the hello_msg
    mov rdi, hello_msg      ; Set the first argument (format string) to hello_msg
    xor rax, rax            ; Clear rax to indicate no floating-point arguments
    call printf             ; Call printf function
    ret                     ; Return from the function
