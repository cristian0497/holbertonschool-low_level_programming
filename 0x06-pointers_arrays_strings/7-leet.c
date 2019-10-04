#include "holberton.h"

/**
 * *leet - change leter
 * @s : var
 * Return: s
 */

char *leet(char *s)
{
	int contletter, contnum;
	char letter[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (contletter = 0; s[contletter] != '\0'; contletter++)
	{
		for (contnum = 0; contnum < 10; contnum++)
		{
			if (s[contletter] == letter[contnum])
			{
				s[contletter] = numbers[contnum];
			}
		}
	}
	return (s);
}
