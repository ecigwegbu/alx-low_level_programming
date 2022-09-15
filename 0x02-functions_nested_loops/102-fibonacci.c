/*****************************************************************************/
#include <stdio.h>

/**
 * main - compute  the fibonacci numbers from 1, 2 to 50
 * Return: 0 if all ok
 */
int main(void)
{
	int i = 1, j = 2, temp;

	printf("%d, %d", i, j);
	do {
		temp = j;
		j += i;
		i = temp;
		printf(", %d", j);

	} while (i + j < 50);

	printf("\n");

	return (0);
}

