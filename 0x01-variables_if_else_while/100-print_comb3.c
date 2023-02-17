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
	int first = '0';
	int second = '0';

	for (first = '0'; first < '9' + 1; first++)
	{
		for (second = first + 1; second < '9' + 1; second++)
		{
			if (first != '0' || second != '1')
				putchar(' ');
			putchar(first);
			putchar(second);
			if (first != '8' || second != '9')
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
