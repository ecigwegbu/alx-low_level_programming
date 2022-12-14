#ifndef _ECI_FUNCTION_POINTERS_H
#define _ECI_FUNCTION_POINTERS_H
#include <stdlib.h>

int _putchar(char c);

void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);

int int_index(int *array, int size, int (*cmp)(int));

#endif

