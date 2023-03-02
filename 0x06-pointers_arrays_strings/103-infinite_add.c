#include "main.h"
#include <stdio.h>
/**
 * leng - determine leng of str
 * @str: string
 * Return: leng
 */
int leng(char *str)
{
	return ((str == 0 || str[0] == '\0') ? 0 : 1 + leng((str + 1)));
}

/**
 * infinite_add - add
 * @n1: left
 * @n2: right
 * @r: reste
 * @size_r: size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int leng_n1 = leng(n1);
	int leng_n2 = leng(n2);
	int i = 0;
	int maximum = (leng_n1 < leng_n2) ? leng_n2 : leng_n1;
	int retenu = 0;

	if (size_r <= maximum)
		return (0);
	for (i = 0; i < maximum; i++)
	{
		retenu += (i < leng_n1) ? n1[leng_n1 - i - 1] - '0' : 0;
		retenu += (i < leng_n2) ? n2[leng_n2 - i - 1] - '0' : 0;
		r[i] = '0' + (retenu % 10);
		retenu /= 10;
	}
	if (retenu != 0)
	{
		if (size_r <= maximum + 1)
			return (0);
		else
		{
			r[maximum] = '0' + retenu;
			r[maximum + 1] = '\0';
		}
	}
	else
		maximum--;
	i = 0;
	for (i = 0; i < (maximum / 2); i++)
	{
		int c = r[i];

		r[i] = r[maximum - i];
		r[maximum - i] = c;
	}
	return (r);
}
