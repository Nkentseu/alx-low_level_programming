#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagramme
 * @a: array of int
 * @size: number of element
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i * size + j];
			if (size - j - 1 == i)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
