#include <stdio.h>
#include <math.h>

/**
 * lprime - return the lowest prime factor
 * @num: the long integer for which lowest prime is required
 * Return: the lowest prime number else 1
 */
long lprime(long num)
{
	long i, lim;

	lim = (long) sqrt(num) + 1;
	for (i = 2; i <= lim; i++)
	{
		if (num % i == 0)
			return (i);
	}
	return (1);
}

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: 0 always
 *
 */
int main(void)
{
	long num = 612852475143, lp, tnum;

	tnum = num;

	do {
		lp = lprime(tnum);
		if (lp == 1)
			printf("%ld\n", tnum / lp);
		tnum = tnum / lp;
	} while (lp != 1);

	return (0);
}

