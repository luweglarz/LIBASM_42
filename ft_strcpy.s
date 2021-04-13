# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 16:48:18 by user42            #+#    #+#              #
#    Updated: 2021/04/12 17:52:03 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcpy

ft_strcpy:
	cmp byte [rsi], 0
	je ret
	mov cl, byte [rsi]
	mov byte [rdi], cl
	inc rdi
	inc rsi
	jmp ft_strcpy

ret:
	mov byte [rdi], 0
	ret