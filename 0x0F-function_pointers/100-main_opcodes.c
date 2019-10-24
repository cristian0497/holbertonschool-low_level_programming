#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion main
 * @ac: int cont
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int arg;
	int cont;

	arg = atoi(av[1]);
	if (arg < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (cont = 0; cont < arg; cont++)
	{
		printf("%x", ((unsigned char *)main)[cont]);
		if (cont < arg - 1)
		{
			printf("%c", ' ');
		}
		else
			printf("%c", '\n');
	}
	return (0);
}
