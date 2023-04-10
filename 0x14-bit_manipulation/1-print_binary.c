#include "main.h"

/**
 * print_binary - print binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
