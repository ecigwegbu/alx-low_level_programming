#include "search_algos.h"

/**
 * linear_search - find an element in an array using linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || (long int)size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
