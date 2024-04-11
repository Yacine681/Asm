section .text
    global ft_strcpy

ft_strcpy:
    mov rax, 0

cpy:
    cmp byte [rsi + rax],0
    je  exit
    mov cl, [rsi + rax]
    mov [rdi + rax], cl
    inc rax
    jmp cpy

exit:
    mov cl, 0
    mov [rdi + rax], cl
    mov rax, rdi
    ret
