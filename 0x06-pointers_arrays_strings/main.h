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

#endif

