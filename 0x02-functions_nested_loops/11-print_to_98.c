/*****************************************************************************/
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 *
 * @n: the starting number
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			if (i == n)
				printf("%d", i);
			else
				printf(", %d", i);
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
			if (i == n)
				printf("%d", i);
			else
				printf(", %d", i);
		printf("\n");
	}
}

