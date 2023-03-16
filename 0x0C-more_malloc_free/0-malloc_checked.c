#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - mc
 * @b: size
 * Return: Null or address
 */
void *malloc_checked(unsigned int b)
{
	void *all = 0;

	if (b == 0)
	{
		exit(98);
		return (0);
	}
	all = malloc(b);
	if (all == 0)
	{
		exit(98);
		return (0);
	}
	return (all);
}
