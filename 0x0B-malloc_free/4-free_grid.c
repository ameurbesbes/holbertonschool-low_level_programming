#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2D array
 * 
 * 
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
