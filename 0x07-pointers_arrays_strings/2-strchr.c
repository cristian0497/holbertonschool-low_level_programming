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
	char *a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			a = (s + i - 1);
		}
		if (s[i] == '\0')
		{
			a = "NULL";
		}
	}
	return(a);
}
