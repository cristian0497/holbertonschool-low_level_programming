#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a = 48, b = 48, c = 48;

	while (a < 57)
	{
		b = c + 1;
		while (b < 58)
		{
			putchar (a);
			putchar (b);
			if (a != 56)
			{
				putchar (',');
				putchar (32);
			}
			b++;
		}
		c++;
		a++;
	}
	putchar ('\n');
return (0);
}
