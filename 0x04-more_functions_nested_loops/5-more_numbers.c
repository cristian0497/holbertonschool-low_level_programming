#include "holberton.h"

/**
 * more_numbers - print numbers except 2 and 4
 *
 * Return: Numbers
 */

void more_numbers(void)
{
	int a = 48, b, x;

for (x = 0; x < 10; x++)
{
	while (a < 50)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != 48)
			{
				_putchar(a);
			}
			_putchar(b);
			if (a == 49 && b > 51)
			{
				break;
			}
		}
		a++;
	}
	_putchar('\n');
	a = 48;
	b = 48;
}
}
