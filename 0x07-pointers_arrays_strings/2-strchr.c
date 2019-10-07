#include "holberton.h"

/**
 * *_strchr - main to mem copy
 * @s: string
 * @c: char to find
 * Return: null or s + i
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
