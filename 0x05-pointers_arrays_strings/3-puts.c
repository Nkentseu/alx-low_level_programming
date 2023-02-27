#include "main.h"
#include <unistd.h>

/**
 * _puts - put string
 * @str: pointer or array of char
 * Return: void
 */
void _puts(char *str)
{
	char *tmp = str;
	char end = '\n';

	if (str != 0)
	{
		while (tmp[0])
		{
			write(1, &tmp[0], 1);
			tmp++;
		}
	}
	write(1, &end, 1);
}
