/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:48:27 by user42            #+#    #+#             */
/*   Updated: 2021/04/09 17:25:02 by user42           ###   ########.fr       */
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
    return 0;
}
