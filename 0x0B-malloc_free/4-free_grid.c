#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - freeing a 2-d grid
 * previously created by your alloc_grid function
 * @grid: pointer to 2-d array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
