#include "main.h"
#include <stdlib.h>

/**
 * leng - size
 * @str: array of char
 * Return: determine size of str
 */
int leng(char *str)
{
	return ((str == 0 || str[0] == '\0') ? 0 : 1 + leng((str + 1)));
}

/**
 * argstostr - convert
 * @ac: number of av
 * @av: array of argument
 * Return: concat or null
 */
char *argstostr(int ac, char **av)
{
	char *result = 0;
	int i = 0;
	int lstr = 0;
	int ev = 0;

	if (ac <= 0 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		int e = leng(av[i]);

		if (e != 0)
			lstr += e + 1;
	}
	result = (char *)malloc(sizeof(char) * (lstr + 1));
	if (result == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != 0)
		{
			int j = 0;

			while (av[i][j] != '\0')
			{
				result[ev] = av[i][j];
				ev++;
				j++;
			}
			result[ev] = '\n';
			ev++;
		}
	}
	result[lstr] = '\0';
	return (result);
}
