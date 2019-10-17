#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - funtion alocate malloc
 * @nmeb: size
 * @size: size of pointer
 * Return: string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	string = malloc(size * nmemb);
	if (string == NULL)
		return (NULL);
	if (nmemb >= UINT_MAX / size)
		return (NULL);
	else if (size >= UINT_MAX / nmemb)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		string[i] = 0;
	return ((void *)string);
}
