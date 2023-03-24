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
		p = 0;
		switch (format[id])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				p = 1;
				break;
			case 'i':
				printf("%d", (int) va_arg(args, int));
				p = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				p = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				p = 1;
				break;
		}
		id++;
		if (format[id] != '\0' && p == 1)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
