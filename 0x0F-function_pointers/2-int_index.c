/*****************************************************************************/
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an index
 * @size: the number of elements of the array
 * @cmp: the function to use to search
 * @array: the array to search
 * Return: indx of the first elt for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(*array))
			return (i);
		array++;
		i++;
	}
	return (-1);
}

