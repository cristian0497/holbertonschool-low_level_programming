#include "holberton.h"

/**
 *
 *
 *
 */
int funtion_check(int num, int cont)
{
	if (num < 2)
		return (0);
	if (cont * cont > num)
		return (1);
	if (num % cont == 0)
		return (0);
	else
		return(funtion_check(num, cont + 1));
}

int is_prime_number(int n)
{

	return(funtion_check(n, 1));
}
