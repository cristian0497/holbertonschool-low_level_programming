#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter[9] = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
	{
	_putchar (letter[i]);
	}
	_putchar ('\n');
	return (0);
}
