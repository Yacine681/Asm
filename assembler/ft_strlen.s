global ft_strlen

ft_strlen:
    mov rax, 0

loop_count:
    cmp byte [rdi + rax], 0
    jz  exit
    inc rax
    jmp loop_count

exit:
    ret