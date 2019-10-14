#include "holberton.h"
#include <stdio.h>

/**
 * main - print the n positions
 * @argc: cont command line
 * @argv: command line arguments
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
