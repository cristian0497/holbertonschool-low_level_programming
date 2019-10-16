#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Count char
 * @s: funtion
 * Return: 0 Succes
 */

int _strlen(char *s)
{
	int contchar = 0;

	while (s[contchar] != 0)
	{
		contchar++;
	}
	return (contchar);
}

/**
 * argstostr - funtion concatenate arg.
 * @ac: size of arguments.
 * @av: arguments.
 * Return: arguments concatenated.
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int x, sum;
	int m, n;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	for (x = 0; x < ac; x++)
	{
		sum += _strlen(av[x]);
	}
	string = malloc((sum + ac + 1) * sizeof(char));
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	for (m = 0, sum = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++, sum++)
		{
			string[sum] = av[m][n];
		}
		string[sum] = '\n';
		sum++;
	}
	return (string);
}
