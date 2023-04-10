#include "main.h"

/**
 * flip_bits - flip bits
 * @n: number
 * @m: number two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorr = n ^ m;
	unsigned int count = 0;

	while (xorr != 0)
	{
		count += xorr & 1;
		xorr = xorr >> 1;
	}
	return (count);
}
