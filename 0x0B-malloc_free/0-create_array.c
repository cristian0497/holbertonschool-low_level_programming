#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *assign;
	unsigned int cont;

	assign = malloc(sizeof(char) * size);
	for(cont = 0; cont < size; cont++)
		assign[cont] = c;
	assign[cont] = 0;
	if (size < 1)
		return(0);
	else
		return (assign);
}
