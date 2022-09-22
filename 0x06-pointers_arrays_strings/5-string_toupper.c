/*****************************************************************************/
#include "main.h"
/**
 * string_toupper - concatenates n characters from src to dest strings
 *
 * @str: the string to change its lower case characters to upper case
 *
 * Return: the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0, len;

	len = _strlen(str);

	/* change lower letters to upper */
	for (i = 0; i < len; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('z' - 'Z');

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
