/*****************************************************************************/
#include "main.h"
/**
 * leet - leet a string
 *
 * @str: the string to leet
 *
 * Return: the resulting string
 */
char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];

		if (c == 'a' || c == 'A')
			str[i] = '4';
		else if (c == 'e' || c == 'E')
			str[i] = '3';
		else if (c == 'o' || c == 'O')
			str[i] = '0';
		else if (c == 't' || c == 'T')
			str[i] = '7';
		else if (c == '1' || c == 'L')
			str[i] = '1';
		i++;
	}
	return (str);
}

/**
 * _strlen - determines the length of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
