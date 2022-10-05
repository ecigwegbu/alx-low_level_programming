/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fres a 2 dimensional array of integers
 *
 * @grid: the two dim array to free
 * @height: the no of rows
 */
void free_grid(int **grid, int height)
{
	int a;

	if (height <= 0)
		return;

	/* free the ints */
	for (a = 0; a < height; a++)
		free(grid[a]);

	/* next free the int *'s */
	free(grid);
}
