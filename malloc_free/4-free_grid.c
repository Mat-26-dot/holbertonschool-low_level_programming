#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by alloc_grid
 * @grid: The 2D array to be freed
 * @height: height of the grid
 *Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

		free(grid);
}
