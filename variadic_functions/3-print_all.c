#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Imprime différents types selon un format donné.
 * @format: Chaîne de format (c, i, f, s)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s%s", sep, s ? s : "(nil)");
				break;
		}
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
			sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
