#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - funtion that view num by num to return
 * @array: array of numbers
 * @size: size of array
 * @cmp: pointer to the funtions
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (cmp && array && size)
		while (y < size)
		{
			if (cmp(array[y]))
				return (y);
			y++;
		}
	return (-1);
}
