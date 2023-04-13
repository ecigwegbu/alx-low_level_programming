#include "search_algos.h"

int advanced_binary_helper(int *array, size_t L, size_t R, int value,
	size_t *indx);
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
	size_t indx = -1; /* pointer to the last found result */

	if (array == NULL || (long int)size < 0)
		return (-1);

	return (advanced_binary_helper(array, L, R, value, &indx));
}

/**
 * advanced_binary_helper - helper for recursion - find elt in sorted int array
 * using advanced binary search algorithm (with recursion)
 * @array: a pointer to the first element of the array; sorted in asc order
 * @L: the index of the first elt of the (sub) array
 * @R: the index of the last elt of the (sub) array
 * @value: the value to search for
 * @indx: pointer to the last found result
 * Return: the first? index where value is found
 */
int advanced_binary_helper(int *array, size_t L, size_t R, int value,
	size_t *indx)
{
	size_t m = 0;
	int mval = 0;

	if (R > L || ((value > array[R] && R >= L) || ((value < array[L] && R >= L))))
	{
		m = L + (R - L) / 2;
		/* printf("L: %lu, m: %lu, R: %lu\n", L, m, R); */
		mval = array[m];

		printf("Searching in array: ");
		print_array(array + L, R - L + 1);
		/* exit conditions */
		if (mval < value)
		{
			return (advanced_binary_helper(array, m + 1, R, value, indx));
		}
		if (mval > value)
		{
			/* return (advanced_binary_helper(array, L, m - 1, value)); */
			return (advanced_binary_helper(array, L, m - 1, value, indx));
		}
		if (mval == value)
		{
			*indx = m;
			/* printf("Indx: %lu\n", *indx);  debug */
			return (advanced_binary_helper(array, L, m, value, indx));
		}
	}

	/* printf("Arrived at end.\n"); */
	/* value not found */
	return (*indx);
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
