#include "holberton.h"

/**
 * _funtion_check - searcj and define the square root
 * @num: number to find the square root
 * @y: the times that repeat
 * Return: square root
 */
int _funtion_check(int num, int y)
{
	int mult = y * y;

	if (mult > num)
	{
		return (-1);
	}
	else if (mult == num)
	{
		return (y);
	}
	return (_funtion_check(num, y + 1));
}
/**
 * _sqrt_recursion - funtion
 * @n: number to find.
 * Return: Square root of the n.
 */

int _sqrt_recursion(int n)
{
	if (n < 4)
	{
		return (-1);
	}
	return (_funtion_check(n, 1));

}
