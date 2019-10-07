#include "holberton.h"

/**
 * *_strpbrk - Funtion to print
 * @s: car type char
 * @accept: funtion to compare
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x] && s[i] != '\0')
			{
				s = (s + i);
				goto salir;
			}
		}
	}
	if (s[i] == '\0')
	{
		s = 0;
		goto salir;
	}
salir: return (s);
}
