#include "main.h"
#include <stdlib.h>

/**
 * leng - leng of string
 * @str: string
 * Return: leng
 */
unsigned int leng(char *str)
{
	return ((str == 0 || str[0] == '\0') ? 0 : 1 + leng((str + 1)));
}

/**
 * str_concat - concat two string
 * @s1: first str
 * @s2: second str
 * Return: s1 + s2 concat or null
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = leng(s1);
	unsigned int l2 = leng(s2);
	unsigned int i = 0;
	char *strc = 0;

	if (s1 == 0 && s2 == 0)
		return (0);
	strc = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (strc == 0)
		return (0);
	for (i = 0; i < l1; i++)
		strc[i] = s1[i];
	for (i = 0; i < l2; i++)
		strc[i + l1] = s2[i];
	strc[l1 + l2] = '\0';
	return (strc);
}
