/*****************************************************************************/
#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to go from n to m
 *
 * @n: one of the integers
 * @m: the other integer
 * Return: required number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, size = (int) sizeof(unsigned long int) * 8;
	unsigned int total = 0;

	for (i = 0; i < size; i++)
	{
		if ((n & (1UL << i)) ^ (m & (1UL << i)))
			total++;
	}
	return (total);
}

