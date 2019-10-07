#include "holberton.h"

/**
 ** _memset - variable to set
 * @s : char to recieve
 * @b : string to change
 * @n : N times to add b in s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
