#include "holberton.h"

/**
 * print_line - Print _ n times
 * @n : var
 * Return : _ n times
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
