/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"
#include "0-strcat.c"
#include "9-strcpy.c"
/**
 * str_concat - returns the length of a string
 *
 * @s1: the base string
 * @s2: the concat string
 * Return: the string result
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 && !s2)
	{
		str = (char *) malloc(_strlen(s1) + 1);
		if (!str)
			return (NULL);
		else
			return (_strcpy(str, s1));
	}
	else if (!s1 && s2)
	{
		str = (char *) malloc(_strlen(s2) + 1);
		if (!str)
			return (NULL);
		else
			return (_strcpy(str, s2));
	}
	else if (!s1 && !s2)
	{
		str = (char *) malloc(1);
		if (!str)
		{
			return (NULL);
		}
		else
		{
			str[0] = '\0';
			return (str);
		}
	}
	else
	{
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
	}
	return (str);
}
