# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 23:24:37 by user42            #+#    #+#              #
#    Updated: 2021/04/16 17:44:19 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global    ft_strdup
extern    malloc
extern    ft_strlen
extern    ft_strcpy

ft_strdup:
	push rdi
	call ft_strlen
	add rax, 1
	mov rdi, rax
	call malloc
	pop rsi
	mov rdi, rax
	jmp ft_strcpy
