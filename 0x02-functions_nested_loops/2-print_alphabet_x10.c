#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;

	while (count < 10)
	{
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
		count++;
		c = 'a';
	}
}
