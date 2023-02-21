#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number
 * Return: 1 if greather than zero, 0 if is
 * equal to zero or -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
