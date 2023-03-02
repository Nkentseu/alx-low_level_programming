#include "main.h"

/**
 * leet - encoding
 * @str: string
 * Return: pointer to str
 */
char *leet(char *str)
{
	char letters[] = "aeotlAEOTL";
	char correspondance[] = "43071";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (letters[j] != '\0')
		{
			if (letters[j] == str[i])
			{
				str[i] = correspondance[j % 5];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
