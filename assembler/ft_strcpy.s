global ft_strcpy

ft_strcpy:
    mov rax, 0

cpy:
    cmp byte [rsi + rax],0
    jz  exit
    mov cl, [rsi + rax]
    mov [rdi + rax], cl
    inc rax
    jmp cpy

exit:
    mov cl, 0
    mov rax, rdi
    ret
