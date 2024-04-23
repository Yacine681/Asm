global ft_strcmp
ft_strcmp:
    mov rcx, 0
loop:
    mov al, [rdi + rcx]
    mov bl, [rsi + rcx]
    test al, al
    jz exit 
    test bl, bl
    jz exit
    cmp al, bl
    jne endloop
    inc rcx
    jmp loop
    
exit:
    mov rax, -1
    ret
endloop:
    movzx rax, al
    movzx r8, bl
    sub rax, r8
    ret