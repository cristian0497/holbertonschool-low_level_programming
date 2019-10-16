#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - funtion freed space
 * @grid: array to will free
 * @height: size of array
 * Retur: void
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
