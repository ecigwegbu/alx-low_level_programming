/*****************************************************************************/
#include "main.h"

#define VAR_SIZE ((int) (sizeof(unsigned long int) * 8))
/**
 * print_binary - print the binary representation of a number
 * uses _putchar()
 *
 * @n: the uint number
 */
void print_binary(unsigned long int n)
{
	int leftIndex = 0;

	if (n == 0)	/* trivial case */
	{
		_putchar('0');
		return;
	}

	/* leftShift = (VAR_SIZE - leftIndex - 1);  */
	/* skip leading zeros */
	while (!((1UL << (VAR_SIZE - leftIndex - 1)) & n))
	{
		leftIndex++;
	}

	/* print bits */
	for (; leftIndex < VAR_SIZE; leftIndex++)
	{
		if ((1UL << (VAR_SIZE - leftIndex - 1)) & n)
			_putchar('1');
		else
			_putchar('0');
	}
}

