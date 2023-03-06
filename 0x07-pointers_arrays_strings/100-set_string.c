#include "main.h"
#include <stdio.h>

/**
 * copyto - copy src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *copyto(char *dest, char *src)
{
	unsigned int i = 0;

	if (src == 0 || dest == 0)
		return (0);
	while (src[i] != '\0')
	{
		printf("ici\n");
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * set_string - set
 * @s: array of string
 * @to: string
 * Return: void
 */
void set_string(char **s, char *to)
{
	if (s == 0 || to == 0 || *s == 0)
		return;
	*s = to;
}
