/*****************************************************************************/
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - assigns memory
 *
 * @nmemb: the number of array elements
 * @size: the size of each array element
 * Return: the pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *cp;
	unsigned int nb, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nb = nmemb * size;
	array = malloc(nb);

	if (array == NULL)
		return (NULL);

	cp = (char *) array;
	for (i = 0; i < nb; i++)
	{
		cp[i] = 0;
	}

	return (array);
}

