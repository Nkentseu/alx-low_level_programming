#include "main.h"

/**
 * _strstr - search string
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	if (haystack == 0 || needle == 0)
		return (0);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			unsigned int j = 0;

			while (haystack[i + j] == needle[j])
			{
				if (needle[j] == '\0')
				{
					return (&haystack[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}
