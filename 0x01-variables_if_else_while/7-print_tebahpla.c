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
	int a = 'z';

	while (a != 'a' - 1)
	{
		putchar(a--);
	}
	putchar('\n');
	return (0);
}
