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
	int trois = '0';

	for (first = '0'; first < '9' + 1; first++)
	{
		for (second = first + 1; second < '9' + 1; second++)
		{
			for (trois = second + 1; trois < '9' + 1; trois++)
			{
				if (first != '0' || second != '1' || trois != '2')
					putchar(' ');
				putchar(first);
				putchar(second);
				putchar(trois);
				if (first != '7' || second != '8' || trois != '9')
					putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
