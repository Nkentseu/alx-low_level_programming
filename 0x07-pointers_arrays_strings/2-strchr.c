#include "main.h"

/**
 * _strchr - search char
 * @s: string
 * @c: char
 * Return: pointer of occurence or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
