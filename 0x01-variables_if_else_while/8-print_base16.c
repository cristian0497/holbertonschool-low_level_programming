#include <stdlib.h>
#include <stdio.h>
/**
 * main - alphabeth
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int character;

	for (character = 48; character <= 57; character++)
	{
		putchar (character);
	}
	for (character = 97; character <= 102; character++)
	{
		putchar (character);
	}
	putchar ('\n');
	return (0);
}
