#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - funtion that obtain nth bit
 * @n: numbert dec to convert in bin
 * @index: index to search
 * Return: 1 -0 or -1 it fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int cont;
	unsigned long int tmp = n;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
	{
		cont = 0;
		while ((tmp >>= 1) > 0)
			cont++;
		while (cont >= 0)
		{
			if ((n >> cont--) & 1)
			{
				if (cont + 1 == (int)index)
					return (1);
			}
			else
			{
				if (cont + 1 == (int)index)
					return (0);
			}
		}
	}
	return (-1);
}
