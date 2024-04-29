global ft_write
extern	__errno_location
ft_write:
    cmp rsi, 0
    je bad_buff
    mov eax, 1
    syscall
    test rax, rax
    js error
    ret

bad_buff:
    mov rdx, 22
    call __errno_location
    mov [rax], rdx
    mov rax, -1
    ret

error:
	mov		rdx, rax		
	call	__errno_location	
    neg		rdx			
	mov		[rax], 	rdx
	mov		rax, -1			
	ret	