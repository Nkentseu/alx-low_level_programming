#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime - verifie si n est premier ou pas
 * @n: number
 * Return: 1 or 0
 */
int is_prime(long n)
{
	long i = 2;
	long fact = (long)sqrt(n);

	if (n <= 1)
		return (0);
	for (i = 2; i < fact + 1; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main - prime
 * Return: 0
 */
int main(void)
{
	int i = 2;
	long n = 612852475143;
	long max = n;

	while (max > 1)
	{
		if (max % i == 0)
		{
			if (max / i == 1)
				break;
			max /= i;
		}
		else if (is_prime(max))
		{
			break;
		}
		else
			i++;
	}
	printf("%ld\n", max);
	return (0);
}
