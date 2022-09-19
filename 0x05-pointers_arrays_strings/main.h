#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* Return: char printed */
/* @c: input char */
int _putchar(char c);

/* @n: integer parameter pointer that will be updated */
void reset_to_98(int *n);

/* @a: value to swap with another */
/* @b: value to swap with another */
void swap_int(int *a, int *b);

/* @s: the string to get its length */
/* Return: the length of the string excluding the null terminator. */
int _strlen(char *s);

/* @str: the string to print */
void _puts(char *str);

/* @s: the string to print in reverse */
void print_rev(char *s);
#endif

