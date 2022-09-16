/*****************************************************************************/
#include "main.h"
/**
 * print_square - prints a diagonal line using
 * uses _putchar()
 *
 * @size: size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

