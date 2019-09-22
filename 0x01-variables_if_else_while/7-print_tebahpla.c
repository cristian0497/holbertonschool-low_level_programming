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

	for (character = 122; character >= 97; character--)
	{
		putchar (character);
	}
	putchar ('\n');
	return (0);
}
