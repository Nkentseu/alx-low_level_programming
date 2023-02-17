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
	int first = 0;
	int second = 0;

	for (first = 0; first < 100; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			if ((second / 10) + (second % 10) * 10 < first)
				continue;
			if (first != 0 || second != 1)
				putchar(' ');
			putchar('0' + (first / 10));
			putchar('0' + (first % 10));
			putchar(' ');
			putchar('0' + (second / 10));
			putchar('0' + (second % 10));
			if (first != 98 || second != 99)
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
