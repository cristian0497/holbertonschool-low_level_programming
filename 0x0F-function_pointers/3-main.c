#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - funtion main
 * @ac: cont arguments
 * @av: array arguments
 * Return: (0) Succes
 */
int main(int ac, char **av)
{
	int num1, num2;

	if (ac > 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	printf("%d\n", (*get_op_func((char *)av[2]))(num1, num2));
	return (0);
}
