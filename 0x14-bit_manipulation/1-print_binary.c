#include "holberton.h"

/**
 * print_binary - funtion convert number to binary
 * @n: binary
 */
void print_binary(unsigned long int n)
{
	int cont;
	unsigned long int tmp = n;

	cont = 0;
	while ((tmp >>= 1) > 0)
		cont++;
	while (cont >= 0)
	{
		if ((n >> cont--) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
