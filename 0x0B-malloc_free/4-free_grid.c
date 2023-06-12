#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the  2D grid created before by alloc_grid
 * @grid:  address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
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
