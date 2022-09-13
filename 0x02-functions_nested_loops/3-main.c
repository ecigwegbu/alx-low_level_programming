/*****************************************************************************/
#include "main.h"

/**
 * main - checks for lowercase
 * user _putchar.c include file
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

