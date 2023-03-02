#include "main.h"

/**
 * rot13 - rot
 * @str: string
 * Return: pointer to str
 */
char *rot13(char *str)
{
	char fonc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char invfonc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (fonc[j] != '\0')
		{
			if (fonc[j] == str[i])
			{
				str[i] = invfonc[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
