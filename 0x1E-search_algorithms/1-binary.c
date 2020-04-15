#include "search_algos.h"
/**
 * binary_search - algorith to search a value
 * @array: list of values, array
 * @size: size of array
 * @value: value to find
 * Return: the index of value finded or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m, cont;

	if (array)
	{
		while (l < r)
		{
			m = (l + r) / 2;

			printf("Searching in array: ");
			for (cont = l ; cont <= r; cont++)
				printf("%i%s", array[cont], cont < r ? ", " : "\n");

			if (array[m] == value)
				return (m);
			if (array[m] < value)
				l = m + 1;
			else
				r = m - 1;

		}
	}
	return (-1);
}
