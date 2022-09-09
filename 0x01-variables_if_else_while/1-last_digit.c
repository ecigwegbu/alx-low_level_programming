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
	int lastDigit;
	char lastDigitStr[2];
	int numSign;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		numSign = -1;
	else
		numSign = 1;

	strSize = sprintf(buff, "%d", n);
	lastDigitStr[0] = buff[strSize - 1];
	lastDigitStr[1] = '\0';
	lastDigit = atoi(lastDigitStr) * numSign;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

