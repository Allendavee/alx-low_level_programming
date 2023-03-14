#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int strlen(char *s);
void strcpy(char *dst, char *src);
int strcmp(const char *s1, char *s2);
char **strtow(char *str);



#endif
