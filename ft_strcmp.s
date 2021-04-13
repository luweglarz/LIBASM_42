# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:22:02 by user42            #+#    #+#              #
#    Updated: 2021/04/13 17:15:03 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcmp

ft_strcmp:
	mov al, byte [rdi]
	mov cl, byte [rsi]
	cmp al, 0
	je comp
	cmp cl, 0
	je comp
	cmp al, cl
	je comp
	inc rsi
	inc rdi
	jmp ft_strcmp

comp:
	sub al, cl

ret :
	ret