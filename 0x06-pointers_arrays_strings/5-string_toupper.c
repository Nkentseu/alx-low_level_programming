#include "main.h"

/**
 * string_toupper - yo upper
 * @str: array of char
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = 'A' + (str[i] - 'a');
		i++;
	}
	return (str);
}
