#include "holberton.h"
#include <string.h>

/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int contchar = 0;

	while(s[contchar] != 0)
	{
		contchar++;
	}
	return (contchar);

}
