#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all
 * @format: format of value
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	
	while (*ptr) {
		switch (*ptr) {
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL) {
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		ptr++;
		if (*ptr) {
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
