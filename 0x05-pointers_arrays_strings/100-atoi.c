#include "main.h"

/**
 * _atoi - convert str to in
 * @s: str int
 * Return: int
 */
int _atoi(char *s)
{
	int number = 0;
	int index = 0;
	int entier = 0;
	int signe = 1;

	if (s == 0 || s[0] == '\0')
		return (0);
	while (s[index])
	{
		if (s[index] == '-')
			signe *= -1;
		if ('0' <= s[index] && s[index] <= '9')
		{
			number = (number * 10) + (int)(s[index] - '0');
			entier = 1;
		}
		else if (s[index] != ' ' && s[index] != '-' && s[index] != '+')
		{
			if (entier == 1)
				break;
		}
		index++;
	}
	return (signe * number);
}
