#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Number
 *
 * Return: 0
 */
int main(void)
{
	int a = '0';

	while (a != '9' + 1)
	{
		if (a != '0')
			putchar(' ');
		putchar(a);
		if (a != '9')
			putchar(',');
		a++;
	}
	putchar('\n');
	return (0);
}
