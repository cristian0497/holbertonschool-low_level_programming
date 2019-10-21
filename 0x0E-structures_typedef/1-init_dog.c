#include "dog.h"

/**
 * init_dog - funtion to assign to struct
 * @d: struct type
 * @name: 1 var
 * @age: age of dog
 * @owner: owner od the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
