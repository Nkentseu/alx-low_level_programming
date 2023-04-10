#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index of bit we going to get
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
