#include "holberton.h"

/**
 * print_diagonal - print diagonal
 * @n : var
 * Return : No return
 */

void print_diagonal(int n)
{
	int contespacio = 0, contlinea;

if (n > 0)
{
	for (contlinea = 0; contlinea < n; contlinea++)
	{
		for (contespacio = 0; contespacio <= contlinea; )
		{
			if (contespacio != 0)
			{
				_putchar(32);
			}
			contespacio++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}

else
{
	_putchar ('\n');
}
}
