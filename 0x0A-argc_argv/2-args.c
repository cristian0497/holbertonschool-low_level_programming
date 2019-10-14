#include <stdio.h>

/**
 * main - funtion print argv
 * @argc: argc
 * @argv: argv
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
