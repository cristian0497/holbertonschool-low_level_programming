#include "holberton.h"

/**
 * *_strcpy - funtion copu
 * @dest : var dest
 * @src : var source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
		dest[x] = '\0';
		return (dest);
}
