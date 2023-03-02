#include "main.h"
#include <limits.h>

/**
 * print_number - print
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n != INT_MIN)
			print_number(-n);
		else
		{
			print_number(-(n / 10));
			print_number(-(n % 10));
		}
	}
	else
	{
		if (n > 9)
		{
			print_number(n / 10);
			print_number(n % 10);
		}
		else
			_putchar('0' + n);
	}
}
