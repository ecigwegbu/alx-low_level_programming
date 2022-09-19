/*****************************************************************************/
#include "main.h"
/**
 * swap_int - swaps two numbers
 * uses _putchar()
 *
 * @a: the pointer to the number to swap
 * @b: the pointer to the second number to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

