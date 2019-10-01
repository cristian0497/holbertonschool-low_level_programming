#include "holberton.h"

/**
 *
 *
 *
 */

void print_rev(char *s)
{
	int contchar = 0;

	while (s[contchar] != 0)
	{
		contchar++;
	}
	while (contchar >= 0)
	{
		_putchar(s[contchar]);
		contchar--;
	}
	_putchar ('\n');
}
