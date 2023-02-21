#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (i < 98)
			i++;
		else if (i > 98)
			i--;
	}
	printf("98\n");
}
