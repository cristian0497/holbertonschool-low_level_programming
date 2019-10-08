#include "holberton.h"

/**
 * *_strstr - funtion prin
 * @haystack : var
 * @needle : var string
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int cont = 0;

	for (i = 0; needle[i] != '\0'; )
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				cont++;
				i++;
				break;
			}
		}
	}
	return (haystack + (j - (cont - 1)));
}
