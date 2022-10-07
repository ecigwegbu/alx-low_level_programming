/*****************************************************************************/
#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc
 *
 * @ptr: the pointer to initial memory block
 * @old_size: the old number of bytes
 * @new_size: the new number of bytes
 * Return: the pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, range;
	char *src, *dest;
	void *newblock;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			newblock = malloc(1);
			if (newblock == NULL)
				return (NULL);
			return (newblock);
		}
		newblock = malloc(new_size);
		if (newblock == NULL)
			return (NULL);
		return (newblock);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newblock = malloc(new_size);
	if (newblock == NULL)
		return (NULL);
	/* now copy data */
	range = (new_size > old_size) ? old_size : new_size;
	dest = (char *) newblock;
	src = (char *) ptr;

	for (i = 0; i < range; i++)
		dest[i] = src[i];
	free(ptr);
	return (newblock);
}

