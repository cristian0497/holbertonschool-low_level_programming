#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
        int a, b, c;
        int x = 49;
	int y = 49;

        for (a = 48; a < 57; a++)
        {
                for (b = x; b <= 57; b++)
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
			y++;
		}
		x++;
        }
        putchar ('\n');
	return (0);
}
