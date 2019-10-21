#include "dog.h"
#include <stdio.h>

/**
 * print_dog - funtion print data
 * @d: data structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
