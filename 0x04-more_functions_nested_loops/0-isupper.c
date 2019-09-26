#include "holberton.h"

/**
 * _isupper - show if the letter is Upper or Lower
 *
 * Return: Always 0 if lower, always 1 if Upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
