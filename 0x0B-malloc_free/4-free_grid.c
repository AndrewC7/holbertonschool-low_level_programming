#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free an array
 *
 * @grid: input to free
 * @height: size of grid
 *
 *Return: Void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; ++x)
		free(grid[x]);
	free(grid);
}
