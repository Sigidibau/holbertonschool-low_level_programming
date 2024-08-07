#include <stddef.h>
#ifndef F_P
#define F_P

int _putchar(char c);

void print_name(char *name, void (*f)(char *));


int int_index(int *array, int size, int (*cmp)(int));

int (*get_op_func(char *s))(int, int);

void array_iterator(int *array, size_t size, void (*action)(int));
#endif
