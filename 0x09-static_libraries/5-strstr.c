#include "main.h"

/**
 * leng - taille
 * @str: string
 * Return: size of str
 */
unsigned int leng(char *str)
{
	return ((str == 0 || str[0] == '\0') ? 0 : 1 + leng((str + 1)));
}

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
	unsigned int s1 = leng(haystack);
	unsigned int s2 = leng(needle);

	if (s2 == 0 && s1 != 0)
		return (haystack);

	if (s1 == 0 || s2 == 0 || s1 < s2)
		return (0);

	for (i = 0; i < s1; i++)
	{
		unsigned int j = 0;

		for (j = 0; j < s2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j >= s2 - 1)
			return (&haystack[i]);
	}
	return (0);
}
