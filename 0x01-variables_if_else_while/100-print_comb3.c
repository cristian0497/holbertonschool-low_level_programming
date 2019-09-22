#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a, b;
<<<<<<< HEAD
	int c = 49;

	for (a = 48; a < 57; a++)
	{
		for (b = c; b <= 57; b++)
	{
	putchar (a);
	putchar (b);
	if (a != 56)
	{
		putchar (',');
		putchar (32);
	}
	}
	c++;
=======

	for (a = 48; a < 57; a++)
	{
	for (b = 49; b < 58; b++)
	{
	putchar (a);
	putchar (b);
	putchar (',');
	putchar (32);
	}
>>>>>>> 3b905450020ca06a6f491115eae49f8368c355d7
	}
	putchar ('\n');
return (0);
}
