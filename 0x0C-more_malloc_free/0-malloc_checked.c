/*****************************************************************************/
#include <stdlib.h>
#include "main.h"

void exit_98(void);
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
	{
		atexit(exit_98);
		return (NULL);
	}

	return (c);
}


/**
 * exit_98 - allocates memory using malloc and exits normally
 *
 */
void exit_98(void)
{
	exit(98);
}
