/*****************************************************************************/
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and exits normally
 *
 * @b: the number of bytes to allocate
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);

	return (c);
}

