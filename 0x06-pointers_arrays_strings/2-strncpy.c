#include "holberton.h"

/**
 * *_strncpy - copy de src to dest
 * @dest : dest
 * @src : source
 * @n : size of var
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
