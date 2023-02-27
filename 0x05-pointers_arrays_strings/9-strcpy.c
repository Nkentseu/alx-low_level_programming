#include "main.h"

/**
 * _strcpy - copy str
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *r = dest;

	if (src == 0 || src[0] == '\0')
	{
		dest[0] = '\0';
	}
	else
	{
		dest[0] = src[0];
		_strcpy((dest + 1), (src + 1));
	}
	return (r);
}
