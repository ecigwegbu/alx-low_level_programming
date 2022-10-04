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
	char *str, empty[] = "", *ss1, *ss2;

	if (!s1)
		ss1 = empty;
	else
	{
		ss1 = (char *) malloc(_strlen(s1) + 1);
		if (!ss1)
			return (NULL);
		_strcpy(ss1, s1);
	}

	if (!s2)
		ss2 = empty;
	else
	{
		ss2 = (char *) malloc(_strlen(s2) + 1);
		if (!ss2)
			return (NULL);
		_strcpy(ss2, s2);
	}
/* process ss1 & ss2 */

	str = (char *) malloc(_strlen(ss1) + _strlen(ss2) + 1);
	if (!str)
		return (NULL);
	
	_strcat(str, ss1);
	_strcat(str, ss2);
	return (str);
}

	if (!s2)
		ss2 = empty;
	else
		ss2 = strcpy(ss2, s2);


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
