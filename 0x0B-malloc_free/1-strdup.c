#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy str
 * @str: string to copy
 * Return: pointer to copy or NULL
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *copy = 0;

	if (str == 0)
		return (0);
	while (str[size++] != '\0')
		;
	copy = (char *)malloc(sizeof(char) * size);
	if (copy == 0)
		return (0);
	copy[size - 1] = '\0';
	while (size > 1)
	{
		copy[size - 2] = str[size - 2];
		size--;
	}
	return (copy);
}
