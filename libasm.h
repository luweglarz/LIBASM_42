/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:27:46 by user42            #+#    #+#             */
/*   Updated: 2021/04/16 17:35:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>


size_t		ft_strlen(const char *);
char		*ft_strcpy(char*, const char*);
int			ft_strcmp(const char*, const char*);
ssize_t		ft_write(int, const void*, int);
ssize_t		ft_read(int, void*, size_t);
char		*ft_strdup(const char*);

#endif