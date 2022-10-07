/*****************************************************************************/
#include <stdlib.h>
#include "main.h"

void cleanup(void);

/**
 * malloc_checked - allocates memory using malloc and exits normally
 *
 * @b: the number of bytes to allocate
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b * sizeof(char));
	if (c == NULL)
	{
		atexit(cleanup);
	}

	return (c);
}


/**
 * cleanup - cleans up the mess at exit
 *
 */
void cleanup(void)
{
	exit(98);
}
