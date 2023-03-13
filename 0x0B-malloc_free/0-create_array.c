#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate the mamory for char
 * @size: size of memory to allocat
 * @c: initialisation
 * Return: memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *str = 0;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * size);
	if (str == 0)
		return (0);
	while (i < size)
		str[i++] = c;
	return (str);
}
