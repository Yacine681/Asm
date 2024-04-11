section .text
    global ft_strcmp

ft_strcmp:
    mov rcx, 0
    mov rbx, 0

loop:
    mov al, [rdi + rcx]
    mov bl, [rsi + rcx]
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