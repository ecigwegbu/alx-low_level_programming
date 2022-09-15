/*****************************************************************************/
#include <stdio.h>

/**
 * main - compute  the fibonacci numbers to 98
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
	} while (count < 98);

	printf("\n");

	return (0);
}

