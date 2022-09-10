#include <stdio.h>

/**
 * main - prints 00 01, 00 02, .. , 98 99 using putchar only 8 times max
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
				for (n = j + 1; n < 58; n++)
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

