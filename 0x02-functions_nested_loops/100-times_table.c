#include "holberton.h"
/**
 * print_times_table - sum
 * @n: can of prints
 * Return: 0 (Succes)
 */
void print_times_table(int n)
{
	int contver, conthor;
	int numero, centena, decena, unidad, res;

	if (n < 0 || n > 15)
		return;
	if (n > 0 && n < 15)
	{
		for (contver = 0; contver <= n; contver++)
		{
			for (conthor = 0; conthor <= n; conthor++)
			{
				numero = (contver * conthor), centena = numero / 100;
				res = numero % 100, decena = res / 10;
				unidad = res % 10;
				if (conthor != 0)
				{
					if (centena == 0)
						_putchar (32);
					else
						_putchar (centena + '0');
					if ((decena == 0) && (centena != 1))
						_putchar (32);
					else
						_putchar (decena + '0');
				}
					_putchar (unidad + '0');
				if (conthor < n)
				{
					_putchar (',');
					_putchar (32);
				}
				else if (conthor > n)
					conthor = 0;
			}
			_putchar ('\n');
		}
	}
	else if (n <= 0 || n >= 15)
		_putchar('\n');
}
