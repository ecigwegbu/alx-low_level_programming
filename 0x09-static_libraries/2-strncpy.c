/*****************************************************************************/
#include "main.h"
/**
 * _strncpy - copies n characters from src to dest strings
 *
 * @dest: the destination string
 * @src: the src string
 * @n: the number of characters to consider
 *
 * Return: the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
