#include "dog.h"
#include <stdlib.h>

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
	char *n_name, *n_owner;

	dog_t  *ret;

	ret = malloc(sizeof(struct dog));
	if (!ret)
		return (NULL);
	n_name = malloc(*name);
	if (n_name == NULL)
		return (NULL);

	_strcpy(n_name, name);
	ret->name = n_name;

	ret->age = age;

	n_owner = malloc(*owner);
	if (n_owner == NULL)
		return (NULL);

	_strcpy(n_owner, owner);
	ret->owner = owner;

	return (ret);
}
