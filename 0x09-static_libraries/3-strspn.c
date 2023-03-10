#include "main.h"

/**
 * _strspn - get leng pf prefix
 * @s: string
 * @accept: prefix
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_acceptable = 1;
	unsigned int i = 0;

	if (s == 0 || accept == 0)
		return (0);

	while (s[i] != '\0' && is_acceptable == 1)
	{
		unsigned int j = 0;

		is_acceptable = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				is_acceptable = 1;
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}
