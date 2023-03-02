#include "main.h"

/**
 * _strncat - n concat
 * @dest: destination
 * @src: source
 * @n: number
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, begin = 0;

	if (dest == 0 || src == 0 || n <= 0)
		return (dest);
	while (dest[begin++] != '\0')
		;
	while (src[i] && i < n)
	{
		dest[begin + i - 1] = src[i];
		i++;
	}
	dest[begin + i - 1] = '\0';
	return (dest);
}
