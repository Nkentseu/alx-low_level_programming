#include "main.h"

/**
 * swap_int - swap two variable
 * @a: first variable
 * @b: second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	if (a == 0 || b == 0)
		return;
	c = *a;
	*a = *b;
	*b = c;
}
