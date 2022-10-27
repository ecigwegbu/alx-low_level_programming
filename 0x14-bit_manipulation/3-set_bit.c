/*****************************************************************************/
#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 *
 * @n: pointer to the integer to work with
 * @index: the index of the bit to set
 * Return: the bit at the given index or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if out-of-range index */
	if (index > (unsigned int) (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n |= (1UL << index);

	/* verify bit set */
	if (*n | (0UL << index))
		return (1);
	else
		return (0);
}

