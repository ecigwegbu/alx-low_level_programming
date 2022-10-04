/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns  a pointer to a 2 dimensional array of integers
 *
 * @width: the no of rows
 * @height: the no of cols
 * Return: the array result
 */
int **alloc_grid(int width, int height)
{
	int **mat, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* create the int *'s; there are 'height' of them */
	mat = (int **) malloc(height * sizeof(int *));
	if (!mat)
		return (NULL);

	/* create the int's there are 'width' of them per int * */
	for (i = 0; i < height; i++)
	{
		mat[i] = (int *) malloc(width * sizeof(int));
		if (!mat[i])
			return (NULL);
	}

	return (mat);
}
