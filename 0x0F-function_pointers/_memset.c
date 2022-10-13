/*****************************************************************************/
#include "main.h"

/**
 * _memset - copy a char n times to a buffer
 * @s: the buffer
 * @b: the character to copy
 * @n: the number of times to copy b
 *
 * Return: the resulting string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
