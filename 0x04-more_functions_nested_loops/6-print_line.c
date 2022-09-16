/*****************************************************************************/
#include "main.h"
/**
 * print_line - prints a line using _
 * uses _putchar()
 *
 * @n: number of times to draw _
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

