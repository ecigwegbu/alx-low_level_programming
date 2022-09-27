/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals
 * @a: array
 * @size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += a[i * size + j];
			}
		}
	}


	for (i = size - 1; i >= 0 ; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (size - i == j + 1)
			{
				d2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", d1, d2);
}
