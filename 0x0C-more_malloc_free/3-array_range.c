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
	int i, j;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; )
		i++;
	numbers = malloc(sizeof(int) * i);

	if (numbers == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		numbers[j] = i;
	return (numbers);
}
