#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - funtion concatenate strings
 * @s1: char string 1
 * @s2: char string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int x, y, z, m, n, o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	z = (x + y);
	string = malloc(sizeof(char) * z);
	if (string == NULL)
		return NULL;

	for (m = 0; m <= x; m++)
		string[m] = s1[m];
	for (n = 0, o = x; n < y; n++, o++)
		string[o] = s2[n];
	string[o] = '\0';
	return (string);
}
