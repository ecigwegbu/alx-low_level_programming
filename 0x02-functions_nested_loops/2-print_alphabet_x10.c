/*****************************************************************************/
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase x10 without the std lib.
 * uses _putchar.c include file
 *
 * Return: void - exit status zero if all ok
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

