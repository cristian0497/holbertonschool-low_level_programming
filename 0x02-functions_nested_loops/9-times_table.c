#include "holberton.h"

/**
 * times_table - sum
 *
 * Return: 0 (Succes)
 */

void times_table(void)
{
	int contver, conthor;
	int numero, decena, unidad;

	for (contver = 0; contver <= 9; contver++)
	{
		for (conthor = 0; conthor < 10; conthor++)
		{
			numero = (contver * conthor);
			decena = numero / 10;
			unidad = numero % 10;

			if (conthor != 0)
			{
				if (decena == 0)
				{
					_putchar (32);
				}
				else
				{
					_putchar (decena + '0');
				}
			}

			_putchar (unidad + '0');

			if (conthor < 9)
			{
				_putchar (',');
				_putchar (32);
			}
		}
		_putchar ('\n');
	}
}
