ft_strlen:
	mov rax, 0
	mov rbx, rdi
	jmp	count

count : 
	cmp rax, rbx
	je ret;
	inc rax
	jmp count

ret :
	ret
