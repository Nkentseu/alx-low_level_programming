#include "main.h"

/**
 * times_table - times
 * Return: void
 */
void times_table(void)
{
	int ligne = 0;
	int colone = 0;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (colone = 0; colone < 10; colone++)
		{
			if (colone == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (colone * ligne >= 10)
					_putchar('0' + ((colone * ligne) / 10));
				else
					_putchar(' ');
				_putchar('0' + ((colone * ligne) % 10));
			}
		}
		_putchar('\n');
	}
}
