#include "holberton.h"

/**
 * print_alphabet - Show the alphabet in lowercase
 *
 * Return: alphabeth.
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
