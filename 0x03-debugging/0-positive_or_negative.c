#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * print value of n followed by the sign +/-/0
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}

