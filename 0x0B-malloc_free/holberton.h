#ifndef HOLBRTON_H
#define HOLBERTON_H
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
#endif
