#include "main.h"
#include <limits.h>

/**
 * _atoi - convert str to in
 * @s: str int
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int index = 0;
	int entier = 0;
	int signe = 1;

	if (s == 0 || s[0] == '\0')
		return (0);
	while (s[index])
	{
		signe *= (s[index] == '-') ? -1 : 1;
		if ('0' <= s[index] && s[index] <= '9')
		{
			entier = 1;
			if ((number * 10) + (s[index] - '0') >= INT_MAX)
			{
				if (signe == -1)
					return (INT_MIN);
				return (INT_MAX);
			}
			number = (number * 10) + (int)(s[index] - '0');
		}
		else if (s[index] != ' ' && s[index] != '-' && s[index] != '+')
		{
			if (entier == 1)
				break;
		}
		index++;
	}
	return (number * signe);
}
