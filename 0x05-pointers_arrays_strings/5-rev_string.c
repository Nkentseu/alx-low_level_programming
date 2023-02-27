#include "main.h"

/**
 * rev_string - reverse string
 * @s: str
 * Return: void
 */
void rev_string(char *s)
{
	unsigned long leng = 0;
	unsigned long i = 0;

	if (s == 0 || s[0] == '\0')
		return;
	while (s[leng++])
		;
	if (leng - 1 <= 1)
		return;
	for (i = 0; i < (leng - 1) / 2; i++)
	{
		char c = s[i];

		s[i] = s[leng - 2 - i];
		s[leng - i - 2] = c;
	}
}
