#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - funtion alocate malloc
 * @nmeb: size
 * @size: size of pointer
 * Return: string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *string;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	string = malloc((size * 4) * nmemb);

	if (string == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		string[i] = '0';
	return ((void *)string);
}
