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

#endif

