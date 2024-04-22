#include "libasm.h"

int main()
{
    printf("=== ft_strlen ===\n");

    printf("%lu\n", ft_strlen("Bonjour"));
    printf("%lu\n", ft_strlen(""));
    printf("%lu\n", ft_strlen("A"));
    printf("%lu\n", ft_strlen("!@#$%^&*()"));
    printf("%lu\n", ft_strlen("Cinq mots ici"));

    printf("=== strlen ===\n");

    printf("%lu\n", strlen("Bonjour"));
    printf("%lu\n", strlen(""));
    printf("%lu\n", strlen("A"));
    printf("%lu\n", strlen("!@#$%^&*()"));
    printf("%lu\n", strlen("Cinq mots ici"));

    char str1[20];
    char str2[20];
    char str3[20];
    char str4[20];
    char str5[20];

    printf("=== ft_strcpy ===\n");

    printf("%s\n", ft_strcpy(str1, "Bonjour"));
    printf("%s\n", ft_strcpy(str2, ""));
    printf("%s\n", ft_strcpy(str3, "A"));
    printf("%s\n", ft_strcpy(str4, "!@#$%^&*()"));
    printf("%s\n", ft_strcpy(str5, "Cinq mots ici"));

    printf("=== strcpy ===\n");

    printf("%s\n", strcpy(str1, "Bonjour"));
    printf("%s\n", strcpy(str2, ""));
    printf("%s\n", strcpy(str3, "A"));
    printf("%s\n", strcpy(str4, "!@#$%^&*()"));
    printf("%s\n", strcpy(str5, "Cinq mots ici"));

    printf("=== ft_strcmp ===\n");

    printf("%d\n", ft_strcmp("Bonjour", "Bonjour"));
    printf("%d\n", ft_strcmp("Bonjour", "Arbre"));
    printf("%d\n", ft_strcmp("", ""));
    printf("%d\n", ft_strcmp("Ab", "Ac"));
    printf("%d\n", ft_strcmp("!@#$%^&*()", "!@#$%^&*()"));

    printf("=== strcmp ===\n");

    printf("%d\n", strcmp("Bonjour", "Bonjour"));
    printf("%d\n", strcmp("Bonjour", "Arbre"));
    printf("%d\n", strcmp("", ""));
    printf("%d\n", strcmp("Ab", "Ac"));
    printf("%d\n", strcmp("!@#$%^&*()", "!@#$%^&*()"));

    printf("=== ft_write ===\n");

    ft_write(1, "Bonjour\n", 8);
    ft_write(1, "test\n", 7);
    ft_write(1, "1234567890\n", 11);
    ft_write(1, "", 0);
    ft_write(1, "Cinq mots ici\n", 14);

    printf("=== write ===\n");

    write(1, "Bonjour\n", 8);
    write(1, "test\n", 7);
    write(1, "1234567890\n", 11);
    write(1, "", 0);
    write(1, "Cinq mots ici\n", 14);

    printf("=== read and ft_read ===\n");


    int fd = open("ft_read.txt", O_RDWR);
    int fd1 = open("ft_read.txt", O_RDWR);


    char buffer1[1024];
    char buffer2[1024];
    ssize_t bytes_ft_read = ft_read(fd, buffer1, sizeof(buffer1));
    ssize_t bytes_read = read(fd1, buffer2, sizeof(buffer2));

    if (bytes_read == -1) {
        perror("read");
        return 1;
    }
    else if (bytes_ft_read == -1) {
        perror("ft_read");
        return 1;
    }
    
    printf("Bytes ft_read: %zd\n", bytes_ft_read);
    printf("Bytes read: %zd\n", bytes_read);

    printf("=== ft_strdup ===\n");

    printf("Test 1: %s\n", ft_strdup("Bonjour, monde!"));
    printf("Test 2: %s\n", ft_strdup(""));
    printf("Test 4: %s\n", ft_strdup("hello      world     !"));
    printf("Test 5: %s\n", ft_strdup("!@#$%^&*()"));
    printf("Test 6: %s\n", ft_strdup("   Espaces   "));
    printf("Test 7: %s\n", ft_strdup("1234567890"));
    printf("Test 8: %s\n", ft_strdup("AbCdEfGhIjK!@#$%^&*()"));
    printf("Test 9: %s\n", ft_strdup("Unicode: \u00E9\u00E0\u00E8\u00FC"));
    printf("Test 10: %s\n", ft_strdup("\tTabulation\nNouvelle ligne"));

    printf("=== strdup ===\n");

    printf("Test 1: %s\n", strdup("Bonjour, monde!"));
    printf("Test 2: %s\n", strdup(""));
    printf("Test 4: %s\n", strdup("hello      world     !"));
    printf("Test 5: %s\n", strdup("!@#$%^&*()"));
    printf("Test 6: %s\n", strdup("   Espaces   "));
    printf("Test 7: %s\n", strdup("1234567890"));
    printf("Test 8: %s\n", strdup("AbCdEfGhIjK!@#$%^&*()"));
    printf("Test 9: %s\n", strdup("Unicode: \u00E9\u00E0\u00E8\u00FC"));
    printf("Test 10: %s\n", strdup("\tTabulation\nNouvelle ligne"));

    return (0);
}