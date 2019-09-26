#include "holberton.h"

/**
 * main - check the code for Holberton School students.
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
	return;
}
