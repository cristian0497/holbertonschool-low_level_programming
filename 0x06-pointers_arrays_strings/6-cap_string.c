#include "holberton.h"

/**
 * *cap_string - funtion to lower to upper
 * @s : var char
 * Return: s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ' ': case '\n': case '\t': case ',': case ';': case '.':
		case '!': case '?': case '"': case '(': case ')': case '{':
		case '}':
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
