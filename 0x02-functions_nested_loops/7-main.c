/*****************************************************************************/
#include "main.h"

/**
 * main - print last digit
 * uses _putchar.c include file
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

