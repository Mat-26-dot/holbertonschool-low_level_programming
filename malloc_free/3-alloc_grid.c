#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Check the code
 * @width: width of the grid
 * @height: The height of the grid
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)

		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
			free(grid[j]);

		free(grid);
		return (NULL);
	}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
			return (grid);
}

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: The height of the grid
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
