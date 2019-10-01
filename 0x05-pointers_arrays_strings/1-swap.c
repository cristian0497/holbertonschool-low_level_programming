#include "holberton.h"

/**
 * swap_int - change var
 * @a : Var 1
 * @b : Var 2
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a, *a = *b, *b = var;
}
