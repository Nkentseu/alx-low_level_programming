#include "main.h"

/**
 * leet - encoding
 * @str: string
 * Return: pointer to str
 */
char *leet(char *str)
{
	char minus[] = "aeotl";
	char majus[] = "AEOTL";
	char correspondance[] = "43071";
	int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		int j = 0;

		while (minus[j] != '\0')
		{
			if (minus[j] == str[i] || majus[j] == str[i])
			{
				str[i] = correspondance[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
