#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{
int i, j, x;
int **p;

		if (width <= 0 || height <= 0)
		{
			return (NULL);
		}
		p = malloc(height * sizeof(int *));
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
			if (p[i] == NULL)
			{
				for (x = 0; x < height; x++)
				{
					if (p[x] != NULL)
						free(p[x]);
				}
				free(p);
				return (NULL);
			}
		}
		for (j = 0; j < height; j++)
		{
			for (i = 0; i < width; i++)
				p[j][i] = 0;
		}
		return (p);
}
