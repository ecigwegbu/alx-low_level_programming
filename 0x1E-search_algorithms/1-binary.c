#include "search_algos.h"

/**
 * binary_search - find an element in a sorted int array
 * using binary search algorithm
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || (long int)size < 0)
		return (-1);

	for (i = 0UL; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
