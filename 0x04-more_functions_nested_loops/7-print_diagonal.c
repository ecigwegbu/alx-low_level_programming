/*****************************************************************************/
#include "main.h"
/**
 * print_diagonal - prints a diagonal line using
 * uses _putchar()
 *
 * @n: number of times to draw
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

