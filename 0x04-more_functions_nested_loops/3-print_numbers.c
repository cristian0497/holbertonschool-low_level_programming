#include "holberton.h"

/**
 * print_numbers - print numbers
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
