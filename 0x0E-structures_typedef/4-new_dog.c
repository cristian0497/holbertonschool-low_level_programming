#include "dog.h"
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
 * *_strcpy - funtion copu
 * @dest : var dest
 * @src : var source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
		dest[x] = '\0';
		return (dest);
}

/**
 * *new_dog - funtion
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ret
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x, y;

	dog_t  *ret;

	ret = malloc(sizeof(struct dog));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	x = _strlen(name);
	ret->name = malloc(sizeof(char) * (x + 1));
	if (ret->name == NULL)
	{
		free(ret->name);
		return (NULL);
	}
	_strcpy(ret->name, name);

	ret->age = age;
	if (ret->age <= 0)
		return (0);

	y = _strlen(owner);
	ret->owner = malloc(sizeof(char) * (y + 1));
	if (ret->owner == NULL)
	{
		free(ret->owner);
		return (NULL);
	}
	_strcpy(ret->owner, owner);

	return (ret);
}
