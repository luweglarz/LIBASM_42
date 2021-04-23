/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:48:27 by user42            #+#    #+#             */
/*   Updated: 2021/04/18 22:28:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

typedef	struct s_write_params
{
	char 	*str;
	size_t 	size;

}				t_write_params;

void				ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}

#define buff_sizeplus 32
#define buff_sizeminus -32

int main(void)
{
	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_strlen  ||\n");
	printf("||_____________||\n\n");
	printf("string:    |%s|\n", "test");
    printf("ft_strlen: %lu\n", ft_strlen("test"));
	printf("strlen:    %lu\n\n", strlen("test"));
	printf("string:    |%s|\n", "");
    printf("ft_strlen: %lu\n", ft_strlen(""));
	printf("strlen:    %lu\n\n", strlen(""));
	printf("string:    |%s|\n", "hello world");
    printf("ft_strlen: %lu\n", ft_strlen("hello world"));
	printf("strlen:    %lu\n\n", strlen("hello world"));
	printf("string:    |%s|\n", "bla");
    printf("ft_strlen: %lu\n", ft_strlen("bla"));
	printf("strlen:    %lu\n\n", strlen("bla"));

	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_strcpy  ||\n");
	printf("||_____________||\n\n");

	char dst1[] = "";
	char dst2[] = "Hello world";
	char dst3[] = "Lorem Ipsum";
	char dst4[] = "1&é'&47#~";

	char src1[] = "test";
	char src2[] = "";
	char src3[] = "Hello world";
	char src4[] = "14{21#~¹";

	printf("dst: 		|%s|\n", dst1);
	printf("src: 		|%s|\n", src1);
	printf("ft_strcpy: 	|%s|\n", ft_strcpy(dst1, src1));
	printf("strcpy:  	|%s|\n\n", strcpy(dst1, src1));

	printf("dst: 		|%s|\n", dst2);
	printf("src: 		|%s|\n", src2);
    printf("ft_strcpy:  	|%s|\n", ft_strcpy(dst2, src2));
	printf("strcpy:  	|%s|\n\n", strcpy(dst2, src2));
	
	printf("dst: 		|%s|\n", dst3);
	printf("src: 		|%s|\n", src3);
    printf("ft_strcpy:  	|%s|\n", ft_strcpy(dst3, src3));
	printf("strcpy:  	|%s|\n\n", strcpy(dst3, src3));

	printf("dst: 		|%s|\n", dst4);
	printf("src: 		|%s|\n", src4);
	printf("ft_strcpy:  	|%s|\n", ft_strcpy(dst4, src4));
	printf("strcpy:  	|%s|\n\n", strcpy(dst4, src4));

	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_strcmp  ||\n");
	printf("||_____________||\n\n");

	char *str1 = "test";
	char *str2 = "";
	char *str3 = "&ù²*";
	char *str4 = "Hello World";
	char *str5 = "1312";
	char *str6 = "^^^^^";

	printf("string1: 	|%s| string2: |%s|\n", str1, str2);
	printf("ft_strcmp: 	 %d\n", ft_strcmp(str1, str2));
	printf("strcmp: 	 %d\n\n", strcmp(str1, str2));

	printf("string1: 	|%s| string2: |%s|\n", str3, str4);
    printf("ft_strcmp: 	 %d\n", ft_strcmp(str3, str4));
	printf("strcmp: 	 %d\n\n", strcmp(str3, str4));

	printf("string1: 	|%s| string2: |%s|\n", str5, str6);
    printf("ft_strcmp: 	 %d\n", ft_strcmp(str5, str6));
 	printf("strcmp: 	 %d\n\n", strcmp(str5, str6));

	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_write   ||\n");
	printf("||_____________||\n\n");

	t_write_params w_p;
	
	w_p.str = "test";
	w_p.size = 5;

	printf("str: |%s| size : |%ld|\n\n", w_p.str, w_p.size );
	printf("ft_write:\n");
	ft_write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);
	printf("\n");
	printf("write:\n");
	write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);

	printf("_______________________\n\n");

	w_p.str = "salut";
	w_p.size = 6;

	printf("str: |%s| size : |%ld|\n\n", w_p.str, w_p.size );
	printf("ft_write:\n");
	ft_write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);
	printf("\n");
	printf("write:\n");
	write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);

	printf("_______________________\n\n");

	w_p.str = "hello world";
	w_p.size = 12;

	printf("str: |%s| size : |%ld|\n\n", w_p.str, w_p.size);	
	printf("ft_write:\n");
	ft_write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);
	printf("\n");
	printf("write:\n");
	write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);

	printf("_______________________\n\n");

	w_p.str = "abla";
	w_p.size = 5;

	printf("str: |%s| size : |%ld|\n\n", w_p.str, w_p.size);
	printf("ft_write:");
	ft_write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);
	printf("\n");
	printf("write:\n");
	write(1,w_p.str, w_p.size);
	printf("\n");
	printf("errno: %d\n", errno);

	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_read    ||\n");
	printf("||_____________||\n\n");

	char			buff[buff_sizeplus];
	int 			fd;
	ssize_t 		ret;

	fd = open("test", O_RDONLY);
	ret = ft_read(fd, buff, buff_sizeplus);
	buff[ret] = '\0';
	printf("ft_read1:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	close(fd);
	ft_bzero(buff, buff_sizeplus);
	printf("\n");

	fd = open("test", O_RDONLY);
	ret = read(fd, buff, buff_sizeplus);
	buff[ret] = '\0';
	printf("read1:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	ft_bzero(buff, buff_sizeplus);
	printf("\n");
/*
	ret = ft_read(-1, buff, buff_sizeplus);
	buff[ret] = '\0';
	printf("ft_read2:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	ft_bzero(buff, buff_sizeplus);
	printf("\n");

	ret = read(-1, buff, buff_sizeplus);
	buff[ret] = '\0';
	printf("read2:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	ft_bzero(buff, buff_sizeplus);
	printf("\n");

	ret = ft_read(fd, buff, -32);
	buff[ret] = '\0';
	printf("ft_read3:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	printf("\n");

	ret = read(fd, buff, buff_sizeminus);
	buff[ret] = '\0';
	printf("read3:\n");
	printf("errno: %d\n", errno);
	printf("ret: %ld\n", ret);
	printf("buff: |%s|\n", buff);
	close(fd);
	printf("\n");
*/
	printf("  _____________\n");
	printf("//             \\\\\n");
	printf("||  ft_strdup  ||\n");
	printf("||_____________||\n\n");

	printf("ft_strdup: |%s|\n", ft_strdup("test"));
	printf("strdup:    |%s|\n", strdup("test"));

	printf("ft_strdup: |%s|\n", ft_strdup(""));
	printf("strdup:    |%s|\n", strdup(""));
	
	printf("ft_strdup: |%s|\n", ft_strdup("Hello world"));
	printf("strdup:    |%s|\n", strdup("Hello world"));

	printf("ft_strdup: |%s|\n", ft_strdup("21421412"));
	printf("strdup:    |%s|\n", strdup("21421412"));

	printf("ft_strdup: |%s|\n", ft_strdup("ù$=)"));
	printf("strdup:    |%s|\n", strdup("ù$=)"));

    return 0;
}
