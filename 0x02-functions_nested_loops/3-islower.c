#include "holberton.h"
#include <ctype.h>

/**
 * _islower - Determine if C is a lowercase
 * @c : check
 * Return: Always 0 (Succes)
 */


int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
