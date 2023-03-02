#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0;
	char separation[] = " \t\n,;.!?\"(){}";

	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			int s = 0;

			if (i == 0)
				str[i] = 'A' + (str[i] - 'a');
			else
			{
				while (separation[s] != '\0')
				{
					if (separation[s] == str[i - 1])
					{
						str[i] = 'A' + (str[i] - 'a');
						break;
					}
					s++;
				}
			}
		}
		i++;
	}
	return (str);
}
