/*****************************************************************************/
#include "main.h"
/**
 * print_sign - returns the sign of a number
 * uses _putchar.c include file
 * Return: 1 (+ve), 0 (zero), -1 (-ve)
 * @n: the input number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

