#include "search_algos.h"
/**
 * linear_search - algorith to search an specific value in a array
 * @array: array to search a value
 * @size: size of a array
 * @value: value to find in array
 * Return: The num index if a value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%d] = [%i]\n", (int)idx, array[idx]);
			if (array[idx] == value)
				return (idx);
		}
		return (-1);
	}
	else
		return (-1);
}
