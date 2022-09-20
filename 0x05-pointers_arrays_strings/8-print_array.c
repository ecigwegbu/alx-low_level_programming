/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of n integers
 * @a: the array to print
 * @n: the number of elements
 */
void print_array(int *a, int n)
{

	int i;

	if (n > 0)
	{

		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		printf(", %d", a[i]);
		printf("\n");
	}
}

