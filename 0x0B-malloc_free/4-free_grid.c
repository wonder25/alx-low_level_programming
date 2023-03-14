#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a two -dimensional
 * grid previously created your alloc_grid function
 * @grid: the address
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
