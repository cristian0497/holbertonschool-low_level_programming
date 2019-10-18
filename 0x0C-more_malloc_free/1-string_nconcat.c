#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - lenght of s
 * @s: string
 * Return: contchar
 */
unsigned int _strlen(char *s)
{
	unsigned int contchar = 0;

	while (s[contchar] != 0)
	{
		contchar++;
	}
	return (contchar);
}
/**
 * string_nconcat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: int
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int lens2, lens1, x, y;
	unsigned int z;

	lens2 = _strlen(s2);
	lens1 = _strlen(s1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
		return (NULL);
	if (n >= lens2)
	{
		z = lens1 + lens2;
		n = lens2;
		string = malloc(sizeof(char) * z + 1);
		if (string == NULL)
			return (NULL);
		for (x = 0; x < lens1; x++)
			string[x] = s1[x];
		for (y = 0; x < z; y++, x++)
			string[x] = s2[y];
		string[x] = '\0';
	}
	else if (n < lens2)
	{
		z = lens1 + n;
		string = malloc(sizeof(char) * z + 1);
		if (string == NULL)
			return (NULL);
		for (x = 0; x < lens1; x++)
			string[x] = s1[x];
		for (y = 0; x < z; y++, x++)
			string[x] = s2[y];
		string[x] = '\0';

		}
	return (string);
}
