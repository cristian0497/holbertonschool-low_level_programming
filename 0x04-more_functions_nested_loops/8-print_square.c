#include "holberton.h"

/**
 * print_square - print diagonalprint square
 * @size : var
 * Return : No return
 */

void print_square(int size)
{
	int colum, pila;

if (size > 0)
{
	for (colum = 0; colum < size; colum++)
	{
		for (pila = 0; pila < size; pila++)
		{
			_putchar(35);
		}
		_putchar ('\n');
	}
}
else
{
	_putchar ('\n');
}
}
