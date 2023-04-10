#include "main.h"

/**
 * binary_to_uint - convert ninary to unsigned int
 * @b: valu of char
 * Return: the unsigned int result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int base = 1;
	unsigned int result = 0;

	if (b == 0)
		return (0);
	while (b[i] != '\0')
		i++;
	if (i == 0)
		return (0);
	while (i > 0)
	{
		int a = b[i - 1] - '0';

		if (a < 0 || a > 1)
			return (0);
		result += base * a;
		base *= 2;
		i--;
	}
	return (result);
}
