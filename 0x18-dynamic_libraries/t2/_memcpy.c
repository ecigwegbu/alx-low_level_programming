/*****************************************************************************/
#include "main.h"

/**
 * _memcpy - copy n chars to a buffer
 * @dest: the dest buffer
 * @src: the source of character to copy
 * @n: the number of chars to copy b
 *
 * Return: the resulting string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
