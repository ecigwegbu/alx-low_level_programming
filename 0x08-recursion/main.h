#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* @s: the buffer  */
/* @b: the char to copy  */
/* @n: the number of characters  */
char *_memset(char *s, char b, unsigned int n);
/* @dest: the dest buffer  */
/* @src: the src to copy  */
/* @n: the number of characters to copy */
/* Return: the new dest */
char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

int _strlen(char *s);

int _strcmp(char *s1, char *s2);

void print_chessboard(char (*a)[8]);

int _putchar(char c);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

int _strncmp(char *s1, char *s2, int n);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int _sqrt_recursion_helper(int n, int m);

int is_prime_number(int n);

int is_prime_number_helper(int n, int m);

int is_palindrome(char *s);

int is_palindrome_helper(char *p1, char *p2, int lim);

int wildcmp(char *s1, char *s2);

#endif

