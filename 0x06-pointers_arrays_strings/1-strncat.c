#include "holberton.h"

/**
 * *_strncat - funtion
 * @dest : Var s1
 * @src : Var s2
 * @n : n times
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int largo_dest;
	int i;

	for (largo_dest = 0; dest[largo_dest]; largo_dest++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[largo_dest + i] = src[i];
	}
	dest[largo_dest + i] = '\0';
	return (dest);
}
