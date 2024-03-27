section .text
    global ft_strlen

ft_strlen:
    mov rax, 0
    jmp loop_count

loop_count:
    cmp byte [rdi + rax], 0
    je  exit
    inc rax
    jmp loop_count

exit:
    ret