#include "function_pointers.h"

/**
 * print_name - funtion join funtions
 * @name: name to printf
 * @f: pointer to funtion with set char
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
