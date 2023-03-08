#include "main.h"
#include <math.h>

/**
 */
int _sqrt_recursion(int n)
{
	float s = 0;

	if (n < 0)
		return (-1);
	s = sqrt(n);
	if (s - (int)s < 1)
		return (-1);
	return ((int) s);
}
