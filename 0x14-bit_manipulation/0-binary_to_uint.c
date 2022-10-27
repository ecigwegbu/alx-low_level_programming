/*****************************************************************************/
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * uses _putchar()
 *
 * @b: pointer the string of binary characters
 * Return: the uint result or zero on error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len = 0;

	if (!b)   /* check for null argument */
		return (0);
	len = _strlen((char *)b);

	for (i = len - 1; i >= 0; i--)
	{
		/* only accept 0's and 1's */
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		/* pick each char and left shift to its posn then set bit */
		n |= ((b[i] - 48) << (len - i - 1));
	}

	return (n);
}

/**
 * _strlen - returns the length of a string
 * uses _putchar()
 *
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

