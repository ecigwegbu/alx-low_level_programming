#include "search_algos.h"

int binary_search_exp(int *array, size_t size, int value);
void print_array(int *array, size_t size);

/**
 * exponential_search - find an element in a sorted int array
 * using exponential search algorithm
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t L, R = 1;
	int result = -1;  /* default: not found */

	if (array == NULL || size == 0)
		return (-1);

	while ((size > R) && (array[R] < value))
	{
		printf("Value checked array[%lu] = [%d]\n", R, array[R]);
		R *= 2;
	}
	L = R / 2;
	/*R = (R + 1) > size ? size : (R + 1); */
	R = R > (size - 1) ? (size - 1) : R;
	printf("Value found between indexes [%lu] and [%lu]\n", L, R);

	result = binary_search_exp(array + L, R - L + 1, value);
	if (result == -1)
		return (-1);
	else
		return (result + L);
}

/**
 * binary_search_exp - find an element in a sorted int array
 * using binary search algorithm
 * @array: a pointer to the first element of the array; sorted in asc order
 * @size: the size of the array to search
 * @value: the value to search for
 * Return: the first index where value is found
 */
int binary_search_exp(int *array, size_t size, int value)
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
			while (m != 0)
			{
				if (array[m - 1] == value)
					m--;
				else
					break;
			};
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
