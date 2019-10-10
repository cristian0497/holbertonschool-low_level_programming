#include "holberton.h"

/**
 * funtion_check - funtion check if primo or no
 * @num: num to check
 * @cont: num to ckeck the mod
 * @cont_mod: contador
 * Return: 1 or 0
 */
int funtion_check(int num, int cont, int cont_mod)
{

	if (num % cont == 0)
		cont_mod += 1;
	if (cont_mod > 2)
		return (0);
	if (cont > num)
		return (1);
	return (funtion_check(num, cont + 1, cont_mod));
}

/**
 * is_prime_number - funtion return
 * @n: number to define
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (funtion_check(n, 1, 0));
}
