#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - funtion assign size to var
 * @width: var hor
 * @height: var ver
 * Return: Double pointer var[][]
 */
int **alloc_grid(int width, int height)
{

	int x, y;
	int **var;

	if ((width <= 0) || (height <= 0))
		return (0);
	var = (int **)malloc(sizeof(int) * height);
	if (var == 0)
		return (0);
	for (x = 0; x < height; x++)
	{
		*(var + x) = (int *)malloc(sizeof(int) * width);
		for (y = 0; y < width; y++)
		{
			var[x][y] = 0;
		}
	}
	return (var);
}
