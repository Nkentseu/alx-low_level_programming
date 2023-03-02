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
	int atteint = 0;

	if (dest == 0 || src == 0 || n <= 0)
		return ("");
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			atteint = 1;
	}
	if (atteint == 1)
		dest[i] = '\0';
	return (dest);
}
