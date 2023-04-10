#include "main.h"

/**
 * set_bit - get bit
 * @n: number
 * @index: index of bit we going to get
 * Return: the value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
