/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:27:46 by user42            #+#    #+#             */
/*   Updated: 2021/04/13 22:55:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_strcmp(char*, char *);
void	ft_write(int, char*, int);

#endif