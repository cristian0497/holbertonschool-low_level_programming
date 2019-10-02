#include "holberton.h"

/**
 * puts_half - no return
 * @str: var
 * Return: 0
 */

void puts_half(char *str)
{
	int cont, n;
	cont = 0;

	while (str[cont] != 0)
	{
		cont++;
	}
	if (cont % 2 == 0)
	{
		for (n = cont / 2; n <= cont; n++)
		{
			_putchar(str[n]);
		}
	}
	if (cont % 2 != 0)
	{
		for (n = (cont - 1) / 2; n <= cont; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
