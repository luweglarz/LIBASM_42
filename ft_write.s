# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 14:39:37 by user42            #+#    #+#              #
#    Updated: 2021/04/24 20:54:11 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_write
extern __errno_location

ft_write:
	mov rax, 1
	syscall
	cmp rax, 0
	jl error
	ret

count_error:
    mov rax, -1
    ret

error:
	neg rax
	mov r9, rax
	call __errno_location wrt ..plt
	mov [rax], r9
	mov rax, -1
	ret
