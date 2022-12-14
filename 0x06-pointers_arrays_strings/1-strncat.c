/*****************************************************************************/
#include "main.h"
/**
 * _strncat - concatenates n characters from src to dest strings
 *
 * @dest: the destination string
 * @src: the src string
 * @n: the number of characters to consider
 *
 * Return: the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_sz;

	dest_sz = _strlen(dest);
	/* src_sz = _strlen(src); */

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_sz + i] = src[i];
	dest[dest_sz + i] = '\0';

	return (dest);
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
