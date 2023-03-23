#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print variadic
 * @separator: pointer oi str separator
 * @n: number of element
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list variadic;
	unsigned int i = 0;

	va_start(variadic, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(variadic, int));
		if (i != n - 1 && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(variadic);
}
