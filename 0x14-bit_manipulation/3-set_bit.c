#include "holberton.h"

/**
 * set_bit - change n bit in the specific index
 * @n: pointer to int n
 * @index: bin to change
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int to_change;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	to_change = 1;
	to_change <<= (int)index;
	*n = *n | to_change;
	return (1);
}
