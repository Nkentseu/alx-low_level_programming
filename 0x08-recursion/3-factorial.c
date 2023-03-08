#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);
	return ((n == 0 || n == 1) ? 1 : n * factorial(n - 1));
}
