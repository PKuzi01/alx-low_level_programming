#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid previously created
 * by alloc_grid function
 *
 * @grid: pointer
 * @height: variable
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);

}
