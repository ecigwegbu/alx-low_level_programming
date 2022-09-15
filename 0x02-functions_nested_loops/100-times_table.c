/*****************************************************************************/
#include "main.h"

/**
 * print_times_table - print n times table
 * uses _putchar.c include file
 *
 * @n: the table number
 */
void print_times_table(int n)
{
	char i, j, p, q, r;
	int I, J, IJ;

	if (n > 15 || n < 0)
		return;

	for (i = '0'; i <= (48 + n); i++)
	{
		I = i - 48;
		for (j = '0'; j <= (48 + n); j++)
		{
			J = j - 48;
			IJ = I * J;

			p = IJ / 100 + 48;
			if (p == '0')
				p = ' ';
			q = ((IJ / 10) % 10) + 48;
			if (p == ' ' && q == '0')
				q = ' ';
			r = IJ % 10 + 48;

			if (j == '0')
			{
				if (i != '0')
					_putchar('\n');
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p);
				_putchar(q);
				_putchar(r);
			}

		}
	}
	_putchar('\n');
}

