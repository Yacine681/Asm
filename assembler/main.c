#include "libasm.h"

int main()
{
    char str1[] = "xyz";
    char str2[] = "xy";

    char str3[] = "hello";
    char str4[] = "world";

    printf("ft_strlen==%ld\n", ft_strlen("hello world!"));
    printf("ft_strcpy==%s\n", ft_strcpy(str1, str2));
    printf("ft_strcpy==%s\n", strcpy(str1, str2));
    printf("ft_strcmp==%d\n", ft_strcmp(str3, str4));
    printf("strcmp==%d\n", strcmp(str3, str4));
    ft_write(1, "ft_write = Hello World!\n", 24);
    write(1, "write = Hello World!\n", 21);
    
    int fd = open("ft_read.txt", O_RDWR);
    int fd1 = open("ft_read.txt", O_RDWR);


    char buffer[1024];
    char buffer2[1024];
    ssize_t bytes_ft_read = ft_read(fd, buffer, sizeof(buffer));
    ssize_t bytes_read = read(fd1, buffer2, sizeof(buffer));

    if (bytes_read == -1) {
        perror("read");
        return 1;
    }
    else if (bytes_ft_read == -1) {
        perror("ft_read");
        return 1;
    }
    
    printf("===ft_read.txt===\n===%s===\n", buffer2);

    printf("Bytes ft_read: %zd\n", bytes_ft_read);
    printf("Bytes read: %zd\n", bytes_read);

    printf("ft_strdup====%s\n", ft_strdup("Bonjour!!!!"));
}