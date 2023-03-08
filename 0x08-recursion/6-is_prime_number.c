#include "main.h"

/**
 * prime - prime
 * @n: number
 * @p: limite
 * Return: 1 or 0
 */
int prime(int n, int p)
{
	if (p > n / 2)
		return (1);
	return ((n % p == 0) ? 0 : prime(n, p + 1));
}

/**
 * is_prime_number - prime
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
