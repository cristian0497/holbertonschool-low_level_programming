#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct of funtion
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: any
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
