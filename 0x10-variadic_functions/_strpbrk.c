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

