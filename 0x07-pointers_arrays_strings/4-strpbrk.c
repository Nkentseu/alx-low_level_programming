#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	if (s == 0 || accept == 0)
		return (0);
	while (s[i] != '\0')
	{
		unsigned int j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
