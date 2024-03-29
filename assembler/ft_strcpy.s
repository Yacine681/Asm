section .text
    global ft_strcpy

ft_strcpy:
    mov rdx, 0
    jmp cpy

cpy:
    movzx r8, byte [rsi + rdx]
    mov [rdi + rdx], r8
    cmp r8, 0
    je  exit
    inc rdx
    jmp cpy

exit:
    mov rax, rdi
    ret
