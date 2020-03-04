#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes 2d array
 *
 * @width: grid width
 * @height: grid height
 *
 * Return: grid (2d array)
 */
int **alloc_grid(int width, int height)
{
	int column;
	int row;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * (height));
	if (grid == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			while (row >= 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	}
	return (grid);
}
