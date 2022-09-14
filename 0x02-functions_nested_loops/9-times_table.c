/*****************************************************************************/
#include "main.h"

/**
 * times_table - print 9 times table
 * uses _putchar.c include file
 *
 */
void times_table(void)
{
	char i, j, m, n;
	int I, J, IJ;

	for (i = '0'; i <= '9'; i++)
	{
		I = i - 48;
		for (j = '0'; j <= '9'; j++)
		{
			J = j - 48;
			IJ = I * J;
			m = IJ / 10 + 48;
			if (m == '0')
				m = ' ';
			n = IJ % 10 + 48;

			if (j == '0')
			{
				if (i != '0')
					_putchar('\n');
				_putchar('0');
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (m);
				_putchar (n);
			}

		}
	}
	_putchar('\n');
}

