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
	int a = 'a';

	while (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
	{
		putchar(a);
		a = (a == 'z') ? 'A' : a + 1;
	}
	putchar('\n');
	return (0);
}
