#include "main.h"

/**
 * _strcmp - compare
 * @s1: str one
 * @s2: str two
 * Return: -1, 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (-1);
	if (s2 == 0)
		return (1);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] == '\0')
		return (-1);
	return (1);
}
