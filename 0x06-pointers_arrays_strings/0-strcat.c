#include "main.h"

/**
 * _strcat - concataine
 * @dest: destination
 * @src: source
 * Return: pointer off dest
 */
char *_strcat(char *dest, char *src)
{
	int end = 0;
	int i = 0;

	if (dest == 0 || src == 0)
		return (dest);
	while (dest[end++] != '\0')
		;
	while (src[i] != '\0')
	{
		dest[end + i - 1] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}
