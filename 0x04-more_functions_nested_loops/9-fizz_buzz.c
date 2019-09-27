#include <stdlib.h>
#include<stdio.h>
/**
 * main - print numbers fizz Buzz
 *
 * Return: 1 Succes.
 */

int main(void)
{

	int cont = 1;

	while (cont <= 100)
	{

		if (cont % 3 == 0 && cont % 5 != 0)
		{
			printf("Fizz");
		}
		if (cont % 5 == 0 && cont % 3 != 0)
		{
			printf("Buzz");
		}
		if (cont % 3 == 0 && cont % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (cont % 3 != 0 && cont % 5 != 0)
		{
			printf("%d", cont);
		}
		printf(" ");
		cont++;
	}
	putchar('\n');
	return (0);
}
