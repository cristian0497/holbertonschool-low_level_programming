#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 57; a++)
	{
	for (b = 49; b < 58; b++)
	{
	putchar (a);
	putchar (b);
	putchar (',');
	putchar (32);
	}
	}
	putchar ('\n');
return (0);
}
