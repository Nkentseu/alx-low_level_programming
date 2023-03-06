#include "main.h"

/**
 * rot13 - rot
 * @str: string
 * Return: pointer to str
 */
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (input[j] != '\0')
		{
			if (input[j] == str[i])
			{
				str[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
