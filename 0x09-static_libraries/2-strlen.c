#include "main.h"

/**
 * _strlen - leng calculation
 * @s: char we goging to calculate the leng
 * Return: the leng of char
 */
int _strlen(char *s)
{
	int leng = 0;

	if (s == 0 || s[0] == '\0')
		return (0);
	while (s[leng++])
		;
	return (leng - 1);
}
