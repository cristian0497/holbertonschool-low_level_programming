#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - funtion to print arguments
 * @separator: String separator
 * @n: number of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list mylist;
	unsigned int cont;

	if (separator)
	{
		va_start(mylist, n);
		for (cont = 0; cont < n; cont++)
		{
			printf("%d", va_arg(mylist, int));
			if (cont < n - 1)
				printf("%s", separator);
		}
	printf("\n");
	va_end(mylist);
	}
}
