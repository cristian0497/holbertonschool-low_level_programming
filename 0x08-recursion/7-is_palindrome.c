#include "holberton.h"
/**
 * is_palindrome - define two idx
 * @s: chars to compare
 * Return: 1 for palindrome, 0 if no
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int x = 0;

	if (len == 0)
		return (1);
	else
		return (recursion(s, x, len - 1));
}
/**
 * _strlen_recursion - define the len of the string
 * @s: string to compare
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	int x = -1;

	if (*s != '\0')
		x = _strlen_recursion(s + 1);
	return (x + 1);
}
/**
 * recursion - define if a string is a palindrome or no
 * @s: string
 * @x: idx left
 * @len: idx right
 * Return: 1 for palindrome or 0 if not
 */
int recursion(char *s, int x, int len)
{
	int ret = 0;

	if (x >=  len)
		return (1);
	if (s[x] == s[len])
		ret = recursion(s, x + 1, len - 1);
	return (ret);
}
