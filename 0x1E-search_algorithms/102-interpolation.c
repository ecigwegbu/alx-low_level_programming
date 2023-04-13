#include "search_algos.h"

/**
 * interpolation_search - find an element in a sorted int array
 * using interpolation search algorithm
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, m = 0;

	if (array == NULL || (long int)size < 0)
		return (-1);
	/* pos = lo + [ { (x - arr[lo]) / (arr[hi] - arr[lo]) } */
	/*    *(hi - lo) ] */
	/* m = (L + R) / 2; => binary search */
	/* m is the variable for pos  in this code */
	m = L + ((double)(value - array[L]) / (array[R] - array[L])
		* (R - L));
	if (m < L || m > R)
	{
		printf("Value checked array[%lu] is out of range\n", m);
		return (-1);
	}
	while (L <= R)
	{
		m = L + ((double)(value - array[L]) / (array[R] - array[L])
				* (R - L));
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			return (m);
		}

	}
	return (-1);
}
