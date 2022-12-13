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

	/* get string lengths */
	ln = _strlen(needle);
	lh = _strlen(haystack);

	/* return NULL if needle larger than jaystack */
	if (ln > lh)
		return ((char *)'\0');

	range = lh - ln;
	for (i = 0; i <= range; i++)
	{

		/*now compare strings */
		if (!_strncmp(needle, haystack + i, ln))
			return (&haystack[i]);
	}

	return ((char *)'\0');
}

