/*****************************************************************************/
#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the resulting string
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
		return (-15);
	else if (s1[i] > s2[i])
		return (15);
	}

	/* in case of equal scan, use shorter one */
	if (shorter == 1)
		return (-15);
	else if (shorter == 0)
		return (0);
	else if (shorter == 2)
		return (15);

	return (0);
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
