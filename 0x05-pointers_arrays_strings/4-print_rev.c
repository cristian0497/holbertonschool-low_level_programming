#include "holberton.h"

/**
 * print_rev - string rev
 * @s: string
 * Return: Succes
 */

void print_rev(char *s)
{
	int contchar = 0;

	while (s[contchar] != 0)
	{
		contchar++;
	}
	while (contchar > 0)
	{
		_putchar(s[contchar - 1]);
		contchar--;
	}
	_putchar ('\n');
}
