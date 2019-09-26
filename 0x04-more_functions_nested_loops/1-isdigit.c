#include "holberton.h"

/**
 * _isdigit - show if c is digit or not
 *
 * Return: Always 0 if lower, always 1 if Upper
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
