#include "main.h"

/**
 * _memcpy - memeory copie
 * @dest: destination
 * @src: source
 * @n: first n byte of src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == 0 || src == 0 || n == 0)
		return (dest);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
