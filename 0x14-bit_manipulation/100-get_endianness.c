#include "holberton.h"

/**
 * get_endianness - funtion check the endianness process
 * Return: 1 succes, 0 fail
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
