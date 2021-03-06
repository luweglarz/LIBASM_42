# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:22:02 by user42            #+#    #+#              #
#    Updated: 2021/04/16 17:44:21 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcmp

ft_strcmp:
	xor rcx, rcx
loop:
	mov al, byte [rdi + rcx]
	mov bl, byte [rsi + rcx]
	cmp al, 0
	jz comp
	cmp bl, 0
	jz comp
	cmp al, bl
	jnz comp
	inc rcx
	jmp loop

comp:
	movzx rax, al
	movzx rbx, bl
	sub rax, rbx
	ret
	