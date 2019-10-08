#include "holberton.h"
/**
 * _strspn - check the chars
 * @s: Var string
 * @accept: var to compare
 * Return: cont
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	unsigned int cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				cont++;
				break;
			}
		}
		if (accept[x] == '\0')
		{
			goto salir;
		}
	}
salir: return(cont);
}
