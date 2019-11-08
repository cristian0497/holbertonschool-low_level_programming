#include "holberton.h"
/**
 * flip_bits - funtion check the bits to change
 * @n: num 1
 * @m: num 2
 * Return: unsugned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int to_change = n ^ m;
	int i = (sizeof(unsigned long int) * 8) - 1;
	int cont_bits = 0;

	while (i >= 0)
	{
		if ((to_change >> i) & 1)
			cont_bits++;
		i--;
	}
	return (cont_bits);
}
