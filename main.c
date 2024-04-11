#include "libasm.h"

int main()
{
    char str1[] = "xyz";
    char str2[] = "xy";

    char str3[] = "test";
    char str4[] = "hello";

    printf("ft_strlen==%ld\n", ft_strlen("hello world!"));
    printf("ft_strcpy==%s\n", ft_strcpy(str1, str2));
    printf("ft_strcpy==%s\n", strcpy(str1, str2));
    printf("ft_strcmp==%d\n", ft_strcmp(str3, str4));
    printf("strcmp==%d\n", strcmp(str3, str4));
}