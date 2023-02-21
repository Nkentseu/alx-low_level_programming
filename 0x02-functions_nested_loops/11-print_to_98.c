#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
}
