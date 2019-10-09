#include "holberton.h"

/**
 * factorial - factorial of n
 * @n: num
 * Return: factorial n
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
