#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function run a function
 * @array: array with the numbers to print
 * @size: size of array
 * @action: pointer to addres of a funtion
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
