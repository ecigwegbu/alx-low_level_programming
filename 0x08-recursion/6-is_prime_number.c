/*****************************************************************************/
#include "main.h"
/**
 * is_prime_number - verifies if a number is a prime number
 *
 * @n: the number to verify
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, n / 2 + 1));
}

/**
 * is_prime_number_helper - helper function
 *
 * @n: the number to verify
 * @m: the divisor number you will try on each 'iteration'
 * Return: 1 if prime, else 0
 */
int is_prime_number_helper(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n % m == 0)
		return (0);
	return (is_prime_number_helper(n, m - 1));
}
