#include "main.h"
#include <stdio.h>

/**
 * _memset - initialise
 * @s: string
 * @b: value of init
 * @n: number of byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == 0 || n == 0)
		return (s);
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
