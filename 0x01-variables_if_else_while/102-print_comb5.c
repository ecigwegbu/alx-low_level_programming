#include <stdio.h>

/**
 * main - prints 00 01, 00 02, .. , 98 99 using putchar only 8 times max
 *
 * n starts each cycle from col 0 except when starting a fresh m
 * in chich case it starts at j+1
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i, j, m, n;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (m = i; m < 58; m++)
			{
				for (n = (m == i ? j + 1 : 48); n < 58; n++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (!(i == 57 && j == 56 && m == 57 && n == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

