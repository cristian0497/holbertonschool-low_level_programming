#include <stdio.h>
/**
 * main - The body of the program
 *
 * Return: Always is 0 (succes)
 */
int main(void)
{
int dato;
	for (dato = 48; dato < 58; dato++)
	{
		putchar(dato);
	if (dato < 57)
	{
		putchar(',');
		putchar(32);
	}
	}
	putchar('\n');
return (0);
}
