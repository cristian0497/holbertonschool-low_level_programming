#include "holberton.h"

/**
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int var, cont;
	int x = n;

	x -= 1;
	for (cont = 0; cont < n / 2; cont++, x--)
	{
		var = a[cont], a[cont] = a[x], a[x] = var;
	}
}
