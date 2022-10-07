/*****************************************************************************/
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: the minimum number in the array
 * @max: the maximum number in the array
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = i + min;
	}

	return (array);
}

