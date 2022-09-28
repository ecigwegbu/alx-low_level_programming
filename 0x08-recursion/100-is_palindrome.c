/*****************************************************************************/
#include "main.h"
/**
 * is_palindrome - checks if a string is symetrical
 *
 * @s: the string to check
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *p1, *p2;
	int sl, lim;

	sl = _strlen_recursion(s);
	p1 = s;
	p2 = s + sl - 1;
	lim = sl / 2;

	if (sl <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(p1, p2, lim));

	return (0);
}

/**
 * is_palindrome_helper - helper function
 *
 * @p1: pointer
 * @p2: pointer two
 * @lim: how many steps to try
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome_helper(char *p1, char *p2, int lim)
{
	if (*p1 != *p2)
	{
		return (0);
	}

	if (lim == 1)
	{
		return (1);
	}
	lim--;
	p1++;
	p2--;
	return (is_palindrome_helper(p1, p2, lim));
}

/**
 * _strlen_recursion - get string length
 *
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
