/*****************************************************************************/
#include "main.h"

/**
 * _strstr - locate a string
 * @haystack: where to find it
 * @needle: what to find
 *
 * Return: the pointer to the found string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, ln, lh, range;
	char temp;

	/* get string lengths */
	ln = _strlen(needle);
	lh = _strlen(haystack);

	/* return NULL if needle larger than jaystack */
	if (ln > lh)
		return ((char *)'\0');

	range = lh - ln;
	for (i = 0; i <= range; i++)
	{
		/* save the haystack char at null-byte loc */
		temp = haystack[ln + i];
		haystack[ln + i] = '\0';

		/*now compare strings */
		if (!_strcmp(needle, haystack + i))
		{
			haystack[ln + i] = temp;
			return (&haystack[i]);
		}
		else
		{
			haystack[ln + i] = temp;
		}
	}

	return ((char *)'\0');
}

/**
 * _strchr - locate char in buffer
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


/*****************************************************************************/
/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -15 if s1 < s2, 0 if s1 == s2 and 15 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, shorter, s1_sz, s2_sz, sm_sz;

	/* get the string sizes */
	s1_sz = _strlen(s1);
	s2_sz = _strlen(s2);

	/* Note the shorter string */
	if (s1_sz < s2_sz)
		shorter = 1;
	else if (s1_sz == s2_sz)
		shorter = 0;
	else
		shorter = 2;

	/* note the smaller size */
	sm_sz = (s1_sz <= s2_sz) ? s1_sz : s2_sz;

	/* scan each byte */
	for (i = 0; i < sm_sz; i++)
	{
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	}

	/* in case of equal scan, use shorter one */
	if (shorter == 1)
		return (-s2[i]);
	else if (shorter == 0)
		return (0);
	else if (shorter == 2)
		return (s1[i]);
	return (999);
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
