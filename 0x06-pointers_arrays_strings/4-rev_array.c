#include "main.h"

/**
 * reverse_array - reverse
 * @a: array
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < (int)(n / 2))
	{
		int c = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
		i++;
	}
}
