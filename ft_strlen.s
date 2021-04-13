# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 16:48:20 by user42            #+#    #+#              #
#    Updated: 2021/04/13 17:25:52 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strlen

ft_strlen:
	xor rcx, rcx

count:
	cmp byte [rdi], 0
	je ret;
	inc rdi
	inc rcx
	jmp count

ret :
	mov rax, rcx
	ret
