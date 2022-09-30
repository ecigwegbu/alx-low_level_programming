/*****************************************************************************/
#include "main.h"
/**
 * wildcmp - compare strings including wildcard * 
 * s1 - string 1
 * s2 - string 2
 *
 * Return: 1 if equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
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

