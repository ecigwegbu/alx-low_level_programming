/*****************************************************************************/
#include "main.h"
/**
 * more_numbers - prints 0 - 14 ten times
 * uses _putchar()
 *
 */
void more_numbers(void)
{
	char i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			char m, n;

			m = '\0';
			if (i > 9)
				m = '1';

			n = i % 10 + 48;

			_putchar(m);
			_putchar(n);
		}
	_putchar('\n');
	}
}

