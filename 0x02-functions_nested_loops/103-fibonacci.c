/*****************************************************************************/
#include <stdio.h>

/**
 * main - compute  the even-numbered fibonacci numbers < 4 mln
 * Return: 0 if all ok
 */
int main(void)
{
	long i = 1, j = 2, temp;
	long sum;

	sum = 2;
	do {
		temp = j;
		j += i;
		i = temp;
		if ((j % 2) == 0 && j <= 4000000)
			sum += j;
	} while (j < 4000000);

	printf("%ld\n", sum);

	return (0);
}

