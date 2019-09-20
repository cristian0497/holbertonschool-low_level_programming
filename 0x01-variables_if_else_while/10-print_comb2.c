#include <stdio.h>
/**
 * main - The body of the program
 * Return: Always is 0 (succes)
 */
int main(void)
{
int xx;
int yy;

yy = 48;
while (yy < 58)
{
xx = 48;
while (xx < 58)
{
putchar(yy);
putchar(xx);
if (yy != 57 || xx != 57)
{
putchar(',');
putchar(32);
}
xx++;
}
yy++;
}
putchar('\n');
return (0);
}
