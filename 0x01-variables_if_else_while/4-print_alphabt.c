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
	char a = 'a';

	while (a != 'z' + 1)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
