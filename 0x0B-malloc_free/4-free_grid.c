#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Function that frees a 2 dimensional grid
 * @grid: Input
 * @height: Input
 * Description: Frees memory of grid
 * Return: Free grid
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
