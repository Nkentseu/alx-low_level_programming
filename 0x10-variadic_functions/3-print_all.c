#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all
 * @format: format of value
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned long id = 0;
	int p = 0;
	char *s;

	va_start(args, format);
	while (format != 0 && format[id] != '\0')
	{
		p = 1;
		switch (format[id])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", (int) va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = (char *) va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				p = 0;
				break;
		}
		id++;
		if (format[id] != '\0' && p == 1)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
