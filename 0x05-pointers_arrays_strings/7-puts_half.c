#include "holberton.h"

/**
 *
 *
 *
 */

void puts_half(char *str)
{
	int cont, n;

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
        if (cont % 2 == 1)
        {
                for (n = (cont - 1) / 2; n <= cont; n++)
                {
                        _putchar(str[n]);
                }
        }
	_putchar('\n');
}
