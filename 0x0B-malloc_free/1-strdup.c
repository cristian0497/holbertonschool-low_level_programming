#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - main copy the string
 * @str: string for copy
 * Return: text
 */
char *_strdup(char *str)
{
	char *text;
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	i++;
	if (str == 0)
		return (0);

	text = malloc(sizeof(char) * i);
	for (j = 0; j < i; j++)
		text[j] = str[j];

	return (text);
}
