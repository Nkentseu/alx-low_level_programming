#include "main.h"

/**
 * print_last_digit - print last
 * @digit: the digit
 * Return: the value of the last digit
 */
int print_last_digit(int digit)
{
	int last = digit % 10;

	last = (last < 0) ? -last : last;
	_putchar('0' + last);
	return (last);
}
