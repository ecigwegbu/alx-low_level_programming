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
	long m;

	m = (long)n;
	m = m < 0 ? -m : m;
	m = m % 10;
	_putchar('0' + m);
	return (m);
}

