/*****************************************************************************/
#include "main.h"

/**
 * jack_bauer - prints the time in 00:00 format
 *
 */
void jack_bauer(void)
{
	int i, j, m, n;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; i == '2' ? (j <= '3') : (j <= '9'); j++)
		{
			for (m = '0'; m <= '5'; m++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}
			}
		}
	}
}

