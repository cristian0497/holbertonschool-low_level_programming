#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - funtion print string
 * @separator: Pointer to separator string
 * @n: cant of string to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	va_list mylist;
	char *ret;

	va_start(mylist, n);
	for (cont = 0; cont < n; cont++)
	{
		ret = va_arg(mylist, char*);
		printf("%s", ret ? ret : "(nil)");
		if (cont < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
