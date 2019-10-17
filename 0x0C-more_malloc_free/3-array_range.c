#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - funtion assign array
 * @min: number min
 * @max: number max
 * Return: numbers
 */

int *array_range(int min, int max)
{
	int *numbers;
	int i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		numbers = malloc(sizeof(int));
		numbers[0] = min;
	}
	numbers = malloc(sizeof(int) * (max - min) + 1);
	if (numbers == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		numbers[i] = min;
	return (numbers);
}
