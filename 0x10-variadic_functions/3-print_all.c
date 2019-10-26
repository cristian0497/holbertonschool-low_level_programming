#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - funtion print all args
 * @format: const pointer to arg in main func
 */
void print_all(const char * const format, ...)
{
	va_list myformat;
	int cont, x;
	const char *f, *s;

	f = format;
	cont = 0;
	va_start(myformat, format);
	while (f[cont] != '\0')
	{
		switch (f[cont])
		{
		case 'c':
			printf("%c", va_arg(myformat, int));
			break;
		case 'i':
			printf("%i", va_arg(myformat, int));
			break;
		case 'f':
			printf("%.2f", va_arg(myformat, double));
			break;
		case 's':
			s = va_arg(myformat, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			x = 1;
		}
		if (x != 1 && f[cont + 1] != '\0')
			printf(", ");
		cont++;
		x = 0;
	}
	printf("\n");
	va_end(myformat);
}
