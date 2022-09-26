/*****************************************************************************/
#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: the buffer to scan
 * @accept: the character list to accept from
 *
 * Return: the number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (_strchr(accept, s[i]) && s[i])
		i++;

	return (i);
}
/**
 * _strchr - copy n chars to a buffer
 * @s: the dest buffer
 * @c: the character to search
 *
 * Return: the resulting string.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
			return ((char *)'\0');
		i++;
	}

	return (s + i);
}
