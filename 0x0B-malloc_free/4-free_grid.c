#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	int y;

		for (y = 0; y < height; y++)
		{
			free(grid[y]);
		}
		free(grid);
}
