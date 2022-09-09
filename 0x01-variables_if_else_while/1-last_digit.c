#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the last digit based on given criteria
 * print value of n followed by the sign +/-/0
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int n;
	char buff[20];
	int strSize;
	char lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	strSize = sprintf(buff, "%d", n);
	lastDigit = buff[strSize - 1];
	if (lastDigit > '5')
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == '0')
	{
		printf("Last digit of %d is %c and is zero\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %c", n, lastDigit);
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

