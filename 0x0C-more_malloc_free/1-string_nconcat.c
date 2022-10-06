/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
#include "_strlen.c"
#include "_strcpy.c"
#include "_strncat.c"
#include "_strcat.c"

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

	_set_n(s2, &n);
	if (!s1 && s2)    /* only s1 empty */
	{
		str = (char *) malloc(_strlen(s2) + 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (_strncat(str, s2, n));
	}
	else if (s1 && !s2)    /* only s2 empty */
	{
		str = (char *) malloc(_strlen(s1) + 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (_strcat(str, s1));
	}
	else if (!s1 && !s2)    /* both s1 & s2 empty */
	{
		str = (char *) malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	else if (s1 && s2)    /* neither s1 nor s2 empty */
	{
		str = (char *) malloc(_strlen(s1) + _strlen(s2) + 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		_strcpy(str, s1);
		_strncat(str, s2, n);
	}
	return (str);
}



/**
 * _set_n - sets the number of chars to concatenate from s2
 *
 * @s2: the concat string
 * @n: pointer to the number of characters to concat
 */
void _set_n(char *s2, unsigned int *n)
{
	if (s2)
	{
		unsigned int l2 = _strlen(s2);

		*n = (*n > l2) ? l2 : *n;
	}
}

