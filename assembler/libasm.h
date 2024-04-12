#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

size_t ft_strlen(char *);
char *ft_strcpy(char *, const char *);
int ft_strcmp(const char *, const char *);
ssize_t ft_write(int, const void *, size_t);
ssize_t ft_read(int, void *, size_t );

#endif