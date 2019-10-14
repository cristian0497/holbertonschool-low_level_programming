#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry Point
 * @argc: number of args
 * @argv: pointer to args
 * Return: 1 for error, 0 not
 */
int main(int argc, char *argv[])
{
	int x, num;

	for (x = 0; x < argc; x++)
	{
		if (num == '\n')
		{
			printf("Error\n");
			return (1);
		}
		num += atoi(argv[x]);
	}
	printf("%d\n", num);
	return (0);
}
