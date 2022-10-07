/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
#include "_strlen.c"
#include "_strcat.c"
#include "_strncat.c"

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
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = (unsigned int) _strlen(s1);
	l2 = (unsigned int) _strlen(s2);
	n = (n > l2) ? l2 : n;

	str = malloc(l1 + n + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	_strcat(str, s1);
	_strncat(str, s2, n);
	str[l1 + n] = '\0';

	return (str);
}

