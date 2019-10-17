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
	int i, y = (max - min);

	if (min > max)
		return (NULL);
	numbers = malloc(sizeof(int) * (y + 1));
	if (numbers == NULL)
		return (NULL);
	for (i = 0; i <= y; i++, min++)
		numbers[i] = min;
	return (numbers);
}
