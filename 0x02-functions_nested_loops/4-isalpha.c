#include "holberton.h"
#include <ctype.h>

/**
 * isalpha - Determine if C is a letter, lowercase or uppercase
 *
 * return 1 for lowercase and 0 for other.
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
