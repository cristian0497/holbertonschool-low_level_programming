#include "holberton.h"

/**
 * rev_string - funtion
 * @s : var
 * Return: 0
 */

void rev_string(char *s)
{
	int cont, n;
	char aux;

	cont = 0;
	n = 0;
	while (s[cont] != 0)
	{
		cont++;
	}
	cont -= 1;
	while (cont != n)
	{
		aux = s[n];
		s[n] = s[cont];
		s[cont] = aux;
		cont--;
		n++;
	}
}
