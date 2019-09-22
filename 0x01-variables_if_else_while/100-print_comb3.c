#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a, b;
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
	}
	putchar ('\n');
return (0);
}
