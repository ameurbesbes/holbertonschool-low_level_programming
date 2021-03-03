#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2D array
 * @grid: 2d array
 * @height: len array
 * Return:void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
		}
		free(grid);
}
