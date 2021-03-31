
ft_strlen:
	mov rax, 0
	jmp	count


count : 
	cmp rdi, 0
	je ret;
	inc rdi
	inc rax
	jmp ret

ret :
	ret
