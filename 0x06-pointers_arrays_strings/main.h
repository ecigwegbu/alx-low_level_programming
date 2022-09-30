#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* @dest: destination buffer */
/* @src: source string */
char *_strcat(char *dest, char *src);

/**
 * _strlen - determines the length of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str);

/* @dest: destination buffer */
/* @src: source string */
/* @n: the number of characters to copy */
char *_strncat(char *dest, char *src, int n);

/* @dest: destination buffer */
/* @src: source string */
/* @n: the number of characters to copy */
char *_strncpy(char *dest, char *src, int n);

/* @s1: string 1 */
/* @s2: string 2 */
int _strcmp(char *s1, char *s2);

/* @a: the array to reverse */
/* @n: the size of the array */
void reverse_array(int *a, int n);

/* @str: the string to convert it's lower case to upper case */
char *string_toupper(char *str);

/* @str: the string to apitalise all its words */
char *cap_string(char *str);

/* @ch: character to test */
/* Return: 1 if it is, zero if not */
int _isSeparator(char ch);

/* @str: the string to LEET  */
/* Return: the leet-ed string */
char *leet(char *str);

/* @str: the string to rot13  */
/* Return: the rot13'd string */
char *rot13(char *str);

/* @b: the buffer to print  */
/* @size: the size of the buffer */
void print_buffer(char *b, int size);


void tidyEnd(int j, char *tp);

#endif

