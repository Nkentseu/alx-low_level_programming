#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: array of array
 * @height: first dimension
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == 0 || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != 0)
		{
			free(grid[i]);
			grid[i] = 0;
		}
	}
	free(grid);
}
