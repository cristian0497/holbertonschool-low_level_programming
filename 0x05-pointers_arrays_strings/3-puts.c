#include "holberton.h"

/**
 * _puts - show a string char by char
 * @str : String
 * Return: 0
 */

void _puts(char *str)
{
	int contchar = 0;

	while (str[contchar] != 0)
	{
		_putchar(str[contchar]);
		contchar++;
	}
	_putchar('\n');
}
