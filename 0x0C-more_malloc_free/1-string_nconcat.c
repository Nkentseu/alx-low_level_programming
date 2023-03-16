#include "main.h"
#include <stdlib.h>

/**
 * leng - count
 * @str: string
 * Return: leng of string
 */
unsigned int leng(char *str)
{
	return ((str == 0 || str[0] == '\0') ? 0 : 1 + leng((str + 1)));
}

/**
 * string_nconcat - concat
 * @s1: string one
 * @s2: string two
 * @n: number
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = leng(s1);
	unsigned int l2 = leng(s2);
	unsigned int ml = ((n < l2) ? n : l2);
	char *result = (char *)malloc(sizeof(char) * (ml + l1 + 1));
	unsigned int i = 0;

	if (result == 0)
		return (0);
	result[ml + l1] = '\0';
	for (i = 0; i < l1; i++)
		result[i] = s1[i];
	for (i = 0; i < ml; i++)
		result[i + l1] = s2[i];
	return (result);
}
