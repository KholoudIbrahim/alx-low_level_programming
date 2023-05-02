#ifndef M_H
#define M_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
int _putchar(char ch);
char **strtow(char *str);

#endif
