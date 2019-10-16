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
	int i, j;
	if(str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	text = malloc(sizeof(char) * i);
	if (text == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
		text[j] = str[j];
	text[j] = '\0';
	return (text);
}
