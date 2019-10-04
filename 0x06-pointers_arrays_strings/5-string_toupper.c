#include "holberton.h"

/**
 * *string_toupper - funtion lower to upper
 * @s  : var
 * Return: s
 */

char *string_toupper(char *s)
{
	int cont;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		if (s[cont] >= 97 && s[cont] <= 122)
		{
			s[cont] -= 32;
		}
	}
	return (s);
}
