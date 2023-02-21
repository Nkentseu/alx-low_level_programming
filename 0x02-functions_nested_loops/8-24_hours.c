#include "main.h"

/**
 * jack_bauer - 24h
 * Return: void
 */
void jack_bauer(void)
{
	int heure = 0;
	int minute = 0;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (heure / 10));
			_putchar('0' + (heure % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
