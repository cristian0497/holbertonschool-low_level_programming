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
		return (NULL);
	var = malloc(sizeof(int *) * height);
	if (var == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		*(var + x) = malloc(sizeof(int) * width);
		if (*(var + x) == NULL)
		{
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			var[x][y] = 0;
		}
	}
	return (var);
}
