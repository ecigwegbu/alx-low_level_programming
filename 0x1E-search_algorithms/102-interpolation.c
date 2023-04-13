#include "search_algos.h"

void print_array(int *array, size_t size);

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

	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(array + L, R + 1 - L);

		m = (L + R) / 2;
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

/**
 * print_array - print an integer array
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to print
 */

void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");
}



