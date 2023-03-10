#include "main.h"
#include <unistd.h>

/*
 * The simpli approche is going to count the number of char is in the str
 * when you have the number of char go use wrtie function with
 * entirely str and put the number of char at a leng
 *
 * void _puts(char *str)
 * {
 * unsigned long leng = 0;
 * char end = '\n';
 *
 * if (str != 0)
 * {
 * while (str[leng++]);
 * }
 * if (leng - 1 != 0)
 * write(1, str, leng - 1);
 * write(1, &end, 1);
 * }
 */

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
