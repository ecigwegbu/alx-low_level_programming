#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* Return: char printed */
/* @c: input char */
int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

/* Return: 1 or 0 */
/* @c: input char */
int _islower(int c);

/* Return: 1 or 0 */
/* @c: input char */
int _isalpha(int c);

/* Return: 1, 0 or -1 */
/* @n: input number */
int print_sign(int n);

/* Return: absolute value of number */
/* @n: input number */
int _abs(int n);

/* Return: last digit */
/* @n: input number */
int print_last_digit(int n);

void jack_bauer(void);

void times_table(void);

/* Return: result of a + b */
/* @a: input integer 1 */
/* @b: input integer 2 */
int add(int a, int b);

/* @n: starting number */
void print_to_98(int n);

/* @n: table number */
void print_times_table(int n);

#endif
