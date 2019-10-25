#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	int suma = 0;
	unsigned int cont;

	if (n == 0)
		return (0);
	else
	va_start(mylist, n);

	for (cont = 0; cont < n; cont++)
		suma += va_arg(mylist, int);
	va_end(mylist);

	return (suma);
}
