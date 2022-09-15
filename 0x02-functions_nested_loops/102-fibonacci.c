/*****************************************************************************/
#include <stdio.h>

/**
 * main - compute  the fibonacci numbers from 1, 2 to 50
 * Return: 0 if all ok
 */
int main(void)
{
	long i = 1, j = 2, temp;
	int count;

	printf("%ld, %ld", i, j);
	count = 2;
	do {
		temp = j;
		j += i;
		i = temp;
		printf(", %ld", j);
		count++;
	} while (count < 50);

	printf("\n");

	return (0);
}

