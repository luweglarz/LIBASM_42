#include <stdio.h>

long unsigned ft_strlen(const char *s);

int main() {
    printf("length: %lu\n", ft_strlen("test"));
    printf("length: %lu\n", ft_strlen(""));
    printf("length: %lu\n", ft_strlen("hello world"));
    printf("length: %lu\n", ft_strlen("bla"));

    return 0;
}
