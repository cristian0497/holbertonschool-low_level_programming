#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

int main (int ac, char **av)
{
	int arg = atoi(av[1]);
	int cont;
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
