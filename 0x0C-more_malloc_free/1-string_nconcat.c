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
	unsigned int lens2, lens1, sum_t, cont, y;

	lens2 = _strlen(s2);
	lens1 = _strlen(s1);
	sum_t = (lens1 + lens2);
	if (s1 == NULL)
		s2 = ("");
	if (s2 == NULL)
		s2 = ("");
	if (n < lens2)
		string = malloc(sizeof(char) * (lens1 + n));
	else if (n >= lens2)
		string = malloc(sizeof(char) * sum_t);
	for (cont = 0; cont < lens1; cont++)
	{
		string[cont] = s1[cont];
	}
	if (n < lens2)
	{
		(void)sum_t;
		for (y = 0, cont = lens1; y < n; y++, cont++)
		{
			string[cont] = s2[y];
		}
	}
	if (n >= lens2)
	{
		(void)n;
		for (y = 0, cont = lens1; y < lens2 ; y++, cont++)
		{
			string[cont] = s2[y];
		}
	}
	string[cont] = '\0';
	return (string);
}
