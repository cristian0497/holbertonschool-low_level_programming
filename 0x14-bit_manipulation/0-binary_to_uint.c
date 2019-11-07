#include "holberton.h"
#include <math.h>

/**
 * _atoi - convert bin to int
 * @s: string with binaries
 * Return: 1 or 0
 */
int _atoi(char s)
{
	if (s == '1')
		return (1);
	if (s == '0')
		return (0);
	else
		return (-1);
}
/**
 * fac - funtion to factorize num
 * @a: base
 * @b: exponent
 * Return: ret
 */
int fac(int a, int b)
{
	int cont = 0, ret = a;

	if (b == 0)
		return (1);
	while (cont < b - 1)
	{
		ret = ret * a;
		cont++;
	}
	return (ret);
}
/**
 * _strlen - lenght of the string
 * @s: string
 * Return: len of string
 */
int _strlen(const char *s)
{
	int contchar = 0;

	while (s[contchar] != 0)
	{
		if (s[contchar] > 49 || s[contchar] < 48)
			return (-1);
		contchar++;
	}
	return (contchar);
}
/**
 * binary_to_uint - funtion to convert binary to int
 * @b: string binary
 * Return: binary to decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int exp = 0, res_fac = 0, c;
	int len = 0;
	unsigned int sum = 0;

	if (b)
	{
		len = _strlen(b);
		if (len == -1)
			return (0);
		while (len > 0)
		{
			res_fac = fac(2, exp);
			c = _atoi(b[len - 1]);
			sum += (res_fac * c);
			len--;
			exp++;
		}
	}
	return (sum);
}
