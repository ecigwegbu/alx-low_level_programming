#include "search_algos.h"

/**
 * interpolation_search - find an elt in an array using interp search algorithm
 * @array: a pointer to the first element of the array
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = (high - low) / 2;
	int key = array[mid];

	(void) value;

	while ((array[high] != array[low]) && (key >= array[low]) &&
		(key <= array[high]))
	{
		mid = low + ((key - array[low]) * (high - low) / (array[high]
		- array[low]));

		if (array[mid] < key)
			low = mid + 1;
		else if (key < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	/* printf("Value checked array[%lu] = [%d]\n", i, array[key]);*/
	if (key == array[low])
		return (low);
	else
		return (-1);
}
