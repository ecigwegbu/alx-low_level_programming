#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * print value of n followed by the sign +/-/0
 *
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}

