/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
char *_strncatu(char *dest, char *src, unsigned int n);
unsigned int _strlenu(char *s);
char *_strcpyu(char *dest, char *src);


/**
 * string_nconcat - concatenates n chars from string s2 to s1
 * and returns a new string
 *
 * @s1: the base string
 * @s2: the concat string
 * @n: the number of characters to concat
 * Return: the string result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l2 = (unsigned int) _strlenu(s2);
	n = (n > l2) ? l2 : n;

	str = (char *) malloc(_strlenu(s1) + _strlenu(s2) + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	_strcpyu(str, s1);
	_strncatu(str, s2, n);
	str[_strlenu(s1) + _strlenu(s2)] = '\0';

	return (str);
}

/**
 * _strncatu - concatenates n characters from src to dest strings
 *
 * @dest: the destination string
 * @src: the src string
 * @n: the number of characters to consider
 *
 * Return: the resulting string
 */
char *_strncatu(char *dest, char *src, unsigned int n)
{
	 unsigned int i = 0, dest_sz;

	dest_sz = _strlenu(dest);
	/* src_sz = _strlen(src); */

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_sz + i] = src[i];
	dest[dest_sz + i] = '\0';

	return (dest);
}

/**
 * _strlenu - returns the length of a string
 * uses _putchar()
 *
 * @s: the string
 * Return: the length of the string
 */
unsigned int _strlenu(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
	s++;
	i++;
	}
	return (i);
}

/**
 * _strcpyu - prints an array of n integers
 * @src: the string to copy
 * @dest: the destination buffer
 * Return: pointer to dest
 */
char *_strcpyu(char *dest, char *src)
{
	unsigned int i = 0;

	while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
	}
	dest[i] = src[i];
	return (dest);
}

