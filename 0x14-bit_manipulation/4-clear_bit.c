/*****************************************************************************/
#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 *
 * @n: pointer to the integer to work with
 * @index: the index of the bit to clear
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if out-of-range index */
	if (index > (unsigned int) (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	(*n) &= (~(1UL << (int) index));

	/* verify bit set */
	if ((*n) ^ (1UL << (int) index))
		return (1);
	else
		return (0);
}

