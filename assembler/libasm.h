#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int     ft_strcmp(const char *, const char *);
char    *ft_strdup(const char *);
char    *ft_strcpy(char *, const char *);
ssize_t ft_read(int, void *, size_t );
ssize_t ft_write(int, const void *, size_t);
size_t  ft_strlen(char *);

#endif