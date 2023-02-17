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

	while (a != 'g')
	{
		if (a == '9' + 1)
			a = 'a';
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
