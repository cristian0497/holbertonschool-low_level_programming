#include "holberton.h"

/**
 * *_strcat - concatenation
 * @dest : det of char
 * @src : source
 * Return: dest the var
 */
char *_strcat(char *dest, char *src)
{
	char *b;
	char *a;

	for (a = dest; *a != '\0'; a++)
		;
	for (b = src; *b != '\0'; b++, a++)
		*a = *b;
	*a = '\0';

	return (dest);
}
