global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy
ft_strdup:
    push rdi
    call ft_strlen

    inc rax
    mov rdi, rax
    call malloc
    cmp rax, 0
    jz fail

    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret
fail:
    ret