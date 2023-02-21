#include "main.h"

/**
 * print_times_table - print
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int ligne = 0;
	int colone = 0;

	if (n < 0 || n > 15)
		return;
	for (ligne = 0; ligne < n + 1; ligne++)
	{
		for (colone = 0; colone < n + 1; colone++)
		{
			if (colone == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (colone * ligne >= 100)
					_putchar('0' + ((colone * ligne) / 100));
				else
					_putchar(' ');
				if (colone * ligne >= 10)
					_putchar('0' + (((colone * ligne) % 100) / 10));
				else
					_putchar(' ');
				_putchar('0' + ((colone * ligne) % 10));
			}
		}
		_putchar('\n');
	}
}
