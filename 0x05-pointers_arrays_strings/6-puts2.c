#include "holberton.h"

/**
 * puts2 - if par
 * @str: var
 * Return: 0
 */

void puts2(char *str)
{
	int contchar = 0;

	while (str[contchar] != 0)
	{
		if (contchar % 2 == 0)
		{
			_putchar(str[contchar]);
		}
		contchar++;
	}
	_putchar('\n');

}
