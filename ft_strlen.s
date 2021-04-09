global ft_strlen

ft_strlen:
	xor rcx, rcx
	jmp	count


count : 
	cmp BYTE [rdi], 0
	je ret;
	inc rdi
	inc rcx
	jmp count

ret :
	mov rax, rcx
	ret
