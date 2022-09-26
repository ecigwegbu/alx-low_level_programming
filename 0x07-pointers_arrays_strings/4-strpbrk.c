/*****************************************************************************/
#include "main.h"


/**
 * _strpbrk - first to match any char of accept in buffer
 * @s: the buffer to scan
 * @accept: the character list to accept from
 *
 * Return: the number of matched characters
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] && !_strchr(accept, s[i]))
		i++;
	if (!s[i])
		return ((char *)'\0');
	else
		return (s + i);
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
