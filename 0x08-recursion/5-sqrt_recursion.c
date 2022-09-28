/*****************************************************************************/
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number whose square root you need
 * Return: the natural square root or -1 if there is none
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (_sqrt_recursion_helper(n, 46341));
}

/**
 * _sqrt_recursion_helper - helper function
 *
 * @n: the number whose square root you need
 * @m: the number you will try on each 'iteration'
 * Return: the natural square root or -1 if there is none
 */
int _sqrt_recursion_helper(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m == 1)
		return (-1);

	return (_sqrt_recursion_helper(n, m - 1));
}
