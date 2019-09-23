#include <stdio.h>
/**
 * main - The body of the program
 *
 * Return: Always is 0 (succes)
 */
int main(void)
{
        int a, b, c;
        int x = 49;
	int y = 50;

        for (a = 48; a < 56; a++ )
	{
                for (b = x; b <= 57; )
		{
			for (c = y; c <= 57; c++)
			{
				putchar (a);
				putchar (b);
				putchar (c);
				if (a != 56)
				 {
				 putchar (',');
				 putchar (32);
				 }
			}
		}
		x++;
	}
        putchar ('\n');
	return (0);
}
