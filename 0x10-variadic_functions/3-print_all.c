#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all
 * @format: format of value
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char ft[] = "cifs";
	char cod[][2] = {"%c", "%d", "%f", "%s"};
	typeof type_[] = {char, int, float, char *};

	while (*format != '\0')
	{
		int i = 0;

		while (ft[i] != '\0')
		{
			if (ft[i] == *format)
			{
				printf("%s",cod[i], va_arg(ap, type_[i]));
				break;	
			}
			i++;
		}
		format++;
	}
	printf("\n");
	va_end(ap);
}
