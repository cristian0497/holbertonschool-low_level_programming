#include "holberton.h"

/**
 * *_strchr - main to mem copy
 * @s: string
 * @c: char to find
 * Return: null or s + i
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = (s + i);
			goto salir;
		}
		i++;
	}
	if (s[i] == '\0')
	{
		s = 0;
		goto salir;
	}
salir: return (s);
}
