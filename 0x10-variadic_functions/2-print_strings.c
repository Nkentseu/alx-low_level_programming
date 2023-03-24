#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print the string
 * @separator: the separator
 * @n: number of parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *s = (char *) va_arg(ap, char *);

		if (s == 0)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *));
		if (i != n - 1 && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
