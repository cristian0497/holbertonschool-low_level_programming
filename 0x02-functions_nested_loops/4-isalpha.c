#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - Determine if C is a letter, lowercase or uppercase
 * @c : letter
 * Return: 0 (Succes)
 */


int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
