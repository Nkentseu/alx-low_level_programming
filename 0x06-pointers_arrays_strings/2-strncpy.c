#include "main.h"

/**
 * _strncpy - copy
 * @dest: destination
 * @src: source
 * @n: leng of byte
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == 0 || src == 0 || n <= 0)
		return ("");
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
