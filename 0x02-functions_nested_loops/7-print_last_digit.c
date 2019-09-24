#include "holberton.h"

/**
 * print_last_digit - determine the last digit of x
 * @x : Var
 * Return: Always 0.
 */

int print_last_digit(int x)
{

	int y = x % 10;

	if (y < 0)
	{
		y = 0 - y;
	}
	_putchar(y + '0');
return (y);
}
