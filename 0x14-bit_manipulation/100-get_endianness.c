#include "holberton.h"

/**
 * get_endianness - funtion check the endianness process
 * Return: 1 succes, 0 fail
 */
int get_endianness(void)
{
	unsigned int i;
	char *val;

	val= (char *)&i;
	i = 1;
	if (*val)
		return (1);
	else
		return (0);
}
