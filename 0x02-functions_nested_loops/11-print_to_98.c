#include "holberton.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.print 98
 * @n: number to compare
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}

	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
