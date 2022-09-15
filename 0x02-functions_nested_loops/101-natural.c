/*****************************************************************************/
#include <stdio.h>

/**
 * main - compute and print sum of multiples of 3 and 5 below 1024
 * Return: 0 if all ok
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	printf("%d\n", sum);

	return (0);
}

