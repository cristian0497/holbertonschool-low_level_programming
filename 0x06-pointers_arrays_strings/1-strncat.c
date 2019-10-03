#include "holberton.h"
#include <string.h>

/**
 * *_strncat - funtion
 * @dest : Var s1
 * @src : Var s2
 * @n : n times
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int largo_dest = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[largo_dest + i] = src[i];
	}
	dest[largo_dest + i] = '\0';
	return (dest);
}
