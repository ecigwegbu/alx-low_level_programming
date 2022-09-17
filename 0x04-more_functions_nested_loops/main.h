#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* Return: char printed */
/* @c: input char */
int _putchar(char c);

/* Return: 1 or 0 */
/* @c: input char */
int _isupper(int c);

/* Return: 1 or 0 */
/* @c: input char */
int _isdigit(int c);

/* Return: 1 or 0 */
/* @a: first number */
/* @b: second number */
int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

/* @n: the number of times to draw _ */
void print_line(int n);

/* @n: the number of times to draw \ */
void print_diagonal(int n);

/* @size: the size of square */
void print_square(int size);

/* @size: the size of the triangle */
void print_triangle(int size);

/* @n: the integer to print */
void print_number(int n);

#endif

