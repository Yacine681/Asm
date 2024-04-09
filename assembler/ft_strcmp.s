section .text
    global ft_strcmp

ft_strcmp:
    xor rcx, 0
    xor rbx, 0

    loop:
    mov al, byte [rdi + rcx]
    mov bl, byte [rsi + rcx]
    cmp al, 0
    je endloop
    cmp bl, 0
    je endloop
    cmp al, bl
    jne endloop
    inc rcx
    jmp loop

    endloop:
    movzx rax, al
    movzx r8, bl
    sub rax, r8
    ret