section .data
        malloc_msg db "malloc", 0

extern malloc 

extern ft_strlen
extern ft_strcpy

global ft_strdup

section .text 
ft_strdup:
        call ft_strlen
        add rax, 1  ; add 1 byte in rax for the end of the str 
        push rdi  ; push  rdi into the stack  
        mov rdi, rax  ; move the lenght into rdi 

        call malloc

        test rax, rax  ; test if malloc succeful
        je fail ; if malloc failed jump until fail loop 

        pop rdi ; pop rdi into the stack 
        mov r9, rdi  ; move the value rdi into r9 
        mov rdi, rax ;  dest in ft_strcpy 
        mov rsi, r9 ; src in ft_strcpy 
        call ft_strcpy 

        ret  ; ret the result 

        fail:
        xor rax, rax ; if malloc failed rax = 0;
        pop rdi ; pop rdi into the stack 
        ret  ; ret the result if malloc failed 