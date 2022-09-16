/*****************************************************************************/
#include "main.h"
/**
 * print_triangle - prints a triangle
 * uses _putchar()
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size - i; j++)
				_putchar(' ');

			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

