#include "main.h"

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
		print_number(-n);
		return;
	}
	else
	{
		if (n <= 9)
		{
			_putchar('0' + n);
			return;
		}
		else
			print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
