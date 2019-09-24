#include "holberton.h"

/**
 * jack_bauer - hour from 00:00 to 24:00
 * @ : Var
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hora, minutos;

	hora = 0;
	while (hora < 24)
	{
		minutos = 0;
		while (minutos < 60)
		{
			_putchar(hora / 10 + '0');
			_putchar(hora % 10 + '0');
			_putchar(':');
			_putchar(minutos / 10 + '0');
			_putchar(minutos % 10 + '0');
			_putchar('\n');
			minutos++;
		}
		hora++;
	}
}
