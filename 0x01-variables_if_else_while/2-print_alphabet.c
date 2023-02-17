#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Alphabet
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while ('a' + a != 'z' + 1)
	{
		putchar('a' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
