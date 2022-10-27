/*****************************************************************************/
#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * uses _putchar()
 *
 * @n: the integer to work with
 * @index: the index of the bit to get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((1UL << index) & n)
		return (1);
	else
		return (0);
}

