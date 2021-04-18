# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 16:48:18 by user42            #+#    #+#              #
#    Updated: 2021/04/16 20:17:20 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcpy

ft_strcpy:
	xor		rax, rax			

loop:
	cmp		byte [rsi + rax], 0
	jz		return
	mov		dl, [rsi + rax]
	mov		[rdi + rax], dl
	inc		rax
	jmp		loop

return:
	mov		byte [rdi + rax], 0
	mov		rax, rdi
	ret
