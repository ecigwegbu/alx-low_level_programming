/*****************************************************************************/
#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: char pointer array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	_putchar('\n');
	_putchar('\n');
	_putchar('\n');
	_putchar('\n');

	for (i = 6; i < 8; i++)
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
}
