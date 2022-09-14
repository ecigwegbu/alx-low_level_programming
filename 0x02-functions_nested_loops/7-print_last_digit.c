/*****************************************************************************/
#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * Return: last digit
 * @n: the input number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}

