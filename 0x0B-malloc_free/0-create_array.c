#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - funtion create array
 * @size: var int
 * @c: char
 * Return: exit(assign)  fail(0);
 */

char *create_array(unsigned int size, char c)
{
	char *assign;
	unsigned int cont;

	assign = malloc(sizeof(char) * size);
	for (cont = 0; cont < size; cont++)
		assign[cont] = c;
	assign[cont] = 0;
	if (size < 1)
		return (0);
	return (assign);
}
