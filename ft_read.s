# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 23:00:22 by user42            #+#    #+#              #
#    Updated: 2021/04/18 22:17:32 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_read
extern __errno_location

ft_read:
    cmp rbx, 0
    jl buff_error
	mov rax, 0
	syscall
	cmp rax, 0
	jl error
	ret

buff_error:
	mov rax, -1
	ret

error:
	neg rax
	mov r9, rax
	call __errno_location wrt ..plt	
    mov [rax], r9
	mov rax, -1 
	ret
