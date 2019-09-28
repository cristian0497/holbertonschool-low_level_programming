#include "holberton.h"

/**
 * print_triangle - imp triangle
 * @size: size of triangle
 * Return: Succes
 */

void print_triangle(int size)
{
	int ejex, ejey;

	for (ejex = 1; ejex <= size; ejex++)
	{
		for (ejey = 0; ejey < size; ejey++)
		{
			if ((ejex + ejey) < size)
				_putchar(32);
			if ((ejex + ejey) >= size)
				_putchar(35);
		}
		_putchar('\n');
		}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
