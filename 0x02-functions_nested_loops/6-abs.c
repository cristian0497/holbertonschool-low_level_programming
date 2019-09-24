#include "holberton.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer.
 * @a : Var
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (0 - a);
	}
}
