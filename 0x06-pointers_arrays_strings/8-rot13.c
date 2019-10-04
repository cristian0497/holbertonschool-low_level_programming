#include "holberton.h"

/**
 * *rot13 - tr to root13
 * @s : text to convert
 * Return: s
 */

char *rot13(char *s)
{
	int cont, contabc;
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char root[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		for (contabc = 0; contabc <= 52; contabc++)
		{
			if (s[cont] == abc[contabc])
			{
				s[cont] = root[contabc];
				break;
			}
		}
	}
	return (s);
}
