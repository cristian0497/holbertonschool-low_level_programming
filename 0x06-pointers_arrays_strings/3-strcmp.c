#include "holberton.h"

/**
 * _strcmp - funtion to compare
 * @s1 : var 1
 * @s2 : var 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{

	int x;

	for (x = 0; s1[x] != 0 && s2[x] != 0; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
