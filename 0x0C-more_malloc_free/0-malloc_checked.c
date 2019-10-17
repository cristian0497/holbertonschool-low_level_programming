#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - funtion allocated
 * @b: size
 * Return: str or 98
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
