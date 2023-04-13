#include "search_algos.h"

int advanced_binary_helper(int *array, size_t L, size_t R, int value);
void print_array(int *array, size_t size);

/**
 * advanced_binary - find an element in a sorted int array
 * using advanced binary search algorithm (with recursion)
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;

	if (array == NULL || (long int)size < 0)
		return (-1);

	return (advanced_binary_helper(array, L, R, value));
}

/**
 * advanced_binary_helper - helper for recursion - find elt in sorted int array
 * using advanced binary search algorithm (with recursion)
 * @array: a pointer to the first element of the array; sorted in asc order
 * @L: the index of the first elt of the (sub) array
 * @R: the index of the last elt of the (sub) array
 * @value: the value to search for
 * Return: the first? index where value is found
 */
int advanced_binary_helper(int *array, size_t L, size_t R, int value)
{
	int m = 0;

	if (R >= L)
	{
		m = L + (R - L) / 2;

		printf("Searching in array: ");
		print_array(array + L, R - L + 1);

		/* exit condition */
		if (array[m] == value)
			return (m);

		/* enter recursion */
		if (array[m] > value)
			return (advanced_binary_helper(array, L, m - 1, value));
		else
			return (advanced_binary_helper(array, m + 1, R, value));
	}

	/* value not found */
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



