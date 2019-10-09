#include "holberton.h"

/**
 * _strlen_recursion - funtion cont
 * @s: string
 * Return: cont
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	n = _strlen_recursion(s + 1);
	return (n + 1);
}
