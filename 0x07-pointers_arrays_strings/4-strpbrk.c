#include "holberton.h"

/**
 * *_strpbrk - Funtion to print
 * @s: car type char
 * @accept: funtion to compare
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				s = (s + i);
				goto salir;
			}
			if (s[i] == '\0')
			{
				s = "NULL";
				goto salir;
			}
		}
	}
salir: return (s);
}
