/*****************************************************************************/
#include "main.h"
/**
 * reverse_array - reverse an array
 *
 * @a: the array to reverse
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, len, tmp;

	len = n;

	for (i = 0; i <= len / 2 - 1; i++)
	{
		tmp = a[i];
		a[i] = a[len - 1 - i];
		a[len - i - 1] = tmp;
	}
}

