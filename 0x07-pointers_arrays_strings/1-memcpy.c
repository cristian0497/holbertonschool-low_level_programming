#include "holberton.h"

/**
 * *_memcpy - funtion to ins srcin dest n times
 * @dest: buffer + 50
 * @src: buffer2
 * @n: n times
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
