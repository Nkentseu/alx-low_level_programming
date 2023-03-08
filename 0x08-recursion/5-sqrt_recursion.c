#include "main.h"

/**
 * raccourcis - rac
 * @n: number
 * @p: sqrt
 * Return: p or -1
 */
int raccourcis(int n, int p)
{
	if (p > n / 2)
		return (-1);
	return ((p * p == n) ? p : raccourcis(n, p + 1));
}
/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (raccourcis(n, 1));
}
