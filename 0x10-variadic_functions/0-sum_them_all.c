#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - funtion sum args
 * @n: args to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	int suma = 0;
	unsigned int cont;

	if (n == 0)
		return (0);
	va_start(mylist, n);

	for (cont = 0; cont < n; cont++)
		suma += va_arg(mylist, int);
	va_end(mylist);

	return (suma);
}
