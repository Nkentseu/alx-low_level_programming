#include "main.h"
#include <unistd.h>

/**
 * puts2 - put string
 * @str: pointer or array of char
 * Return: void
 */
void puts2(char *str)
{
	char *tmp = str;
	char end = '\n';

	if (str != 0)
	{
		while (tmp[0])
		{
			write(1, &tmp[0], 1);
			tmp++;
			if (!tmp[0] || tmp[0] == '\0')
				break;
			tmp++;
		}
	}
	write(1, &end, 1);
}
