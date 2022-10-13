/*****************************************************************************/
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - print each element of the array using a fun arg
 * @size: the number of elements of the array
 * @action: the function to use to print the array elements
 * @array: the array to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || !array || !size)
		return;

	while (i < size)
	{
		action(*array);
		array++;
		i++;
	}
}

