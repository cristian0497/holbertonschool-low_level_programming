#include <stdio.h>
#include <stdlib.h>
/**
 * main - funtion print argv
 * @argc: argc
 * @argv: argv
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int x, y;

	(void)argc;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", (x * y));
	return (0);
}
