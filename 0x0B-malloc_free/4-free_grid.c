#include "mai.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers
 * @grid: integer to be freed
 * @height: height of grid
 *
 * Return:
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
