/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"
#include "0-strcat.c"
/**
 * str_concat - returns the length of a string
 *
 * @s: the string
 * Return: the length of the string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	str = (char *) malloc(_strlen(s1) + _strlen(s2) + 1);
	if (!str)
	{
		return (NULL);
	}
	else
	{
		_strcat(str, s1);
		_strcat(str, s2);
	}
	return (str);
}
