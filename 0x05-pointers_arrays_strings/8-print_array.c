#include "main.h"
#include <stdio.h>

/**
 * print_array - print the array
 * @a: the array
 * @n: the number off element we going to print
 * Return: void
 */
void print_array(int *a, int n)
{
	if (a != 0 && n >= 1)
	{
		int i = 0;

		while ((a + i))
		{
			printf("%d", a[i]);
			i++;

			if (i < n && (a + i))
				printf(", ");
			else
				break;
		}
	}
	printf("\n");
}
