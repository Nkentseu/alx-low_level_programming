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
	char c;
	int i;
	float f;
	char *s;
	unsigned long id = 0;
	int p = 0;
	
	va_start(args, format);
	while (format != 0 && format[id] != '\0') {
		p = 0;
		switch (format[id]) {
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				p = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				p = 1;
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				p = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL) {
					printf("(nil)");
					break;
				}
				printf("%s", s);
				p = 1;
				break;
		}
		id++;
		if (format[id] != '\0' && p == 1) {
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
