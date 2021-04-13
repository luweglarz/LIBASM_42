/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:48:27 by user42            #+#    #+#             */
/*   Updated: 2021/04/13 22:42:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main() {
	printf("ft_strlen:\n");
    printf("length: %d\n", ft_strlen("test"));
    printf("length: %d\n", ft_strlen(""));
    printf("length: %d\n", ft_strlen("hello world"));
    printf("length: %d\n", ft_strlen("bla"));


	char *dst;
	dst = malloc(sizeof(char) * 100 + 1);
	printf("ft_strcpy:\n");
	printf("dst: %s\n", ft_strcpy(dst, "test"));
    printf("dst: %s\n", ft_strcpy(dst, ""));
    printf("dst: %s\n", ft_strcpy(dst, "hello world"));
    printf("dst: %s\n", ft_strcpy(dst, "bla"));
	free(dst);

	printf("ft_strcmp:\n");
	printf("dst: %d\n", ft_strcmp("test", "test"));
    printf("dst: %d\n", ft_strcmp("salut", ""));
    printf("dst: %d\n", ft_strcmp("hello p", "hello world"));
    printf("dst: %d\n", ft_strcmp("abla", "bla"));

	ft_write(1,"test\n", 5);
	ft_write(1,"salut\n", 6);
	ft_write(1,"hello world\n", 12);
	ft_write(1,"abla\n", 5);
    return 0;
}
