#include "holberton.h"

/**
 *main - alphabeth x10
 *
 *Return
 */

void print_alphabet_x10(void)
{
	int x, count;
	count = 1;
	while (count <= 10)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar ('\n');
		count++;
	}

}
