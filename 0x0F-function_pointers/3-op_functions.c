#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * op_add - sum
 * @a: var 1
 * @b: var 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substration
 * @a: var 1
 * @b: var 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - miltiplication
 * @a: var 1
 * @b: var 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: var 1
 * @b: var 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	return (100);
}

/**
 * op_mod - modulo
 * @a: var 1
 * @b: var 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	return (100);
}
