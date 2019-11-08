#include "holberton.h"

/**
 * clear_bit - change n bit in the specific index to 0
 * @n: pointer to int n
 * @index: bin to change
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int to_change;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	to_change = 1;
	to_change <<= (int)index;
	*n = *n & ~to_change;
	return (1);
}
