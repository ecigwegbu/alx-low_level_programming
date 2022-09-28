/*****************************************************************************/
#include "main.h"
/**
 * _pow_recursion - raise x to power y
 * @x: raised to power y
 * @y: the power
 *
 * Return: the result of x raised to power y, -1 if y negative
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

