#include "holberton.h"
#include <stdio.h>

/**
 * print_array - array to show
 * @a : Var1
 * @n : size of array
 * Return: 0
 */

void print_array(int *a, int n)
{

	int cont = 0;

	while (cont < n)
	{
			printf("%d", a[cont]);

			if (cont != n - 1)
			{
				printf(", ");
			}
			cont++;
	}
	printf("\n");
}
