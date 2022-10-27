/*****************************************************************************/
#include <stdio.h>
#include "main.h"

/*#define VAR_SIZE ((unsigned long int) (sizeof(unsigned long int) * 8))  */
#define VAR_SIZE 32
/**
 * print_binary - print the binary representation of a number
 * uses _putchar()
 *
 * @n: the uint number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, leftIndex = 0;

	if (n == 0)	/* trivial case */
	{
		_putchar('0');
		return;
	}

	/*	iprintb(n);   */
	/* skip leading zeros */
	while (!((1 << (VAR_SIZE - leftIndex - 1)) & n))
	{
		leftIndex++;
	}
	/*	printf("leftIndex at Start: %lu\n", leftIndex); */
	/* print bits */
	for (i = leftIndex; i < VAR_SIZE; i++)
	{
		if ((1 << (VAR_SIZE - i - 1)) & n)
			_putchar('1');
		else
			_putchar('0');
	}
}

