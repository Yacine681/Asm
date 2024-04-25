global ft_strcmp
ft_strcmp:
    mov rcx, 0
check:
    mov al, [rdi]
    mov bl, [rsi]
    ; cmp al, bl 
    ; je empty_both
    ; cmp al, 0
    ; je check_first_string
    ; cmp bl, 0
    ; je check_second_string
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
check_first_string:
    mov rax, -1
    ret
check_second_string:
    mov rax, 1
    ret
; empty_both:
;     mov rax, 0
;     ret 