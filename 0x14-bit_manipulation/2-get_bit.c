/*****************************************************************************/
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * uses _putchar()
 *
 * @n: the integer to work with
 * @index: the index of the bit to get
 * Return: the bit at the given index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (unsigned int) (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if ((1UL << index) & n)
		return (1);
	else
		return (0);
}

