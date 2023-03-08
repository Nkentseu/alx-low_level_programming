#include "main.h"

/**
 * _pow_recursion - pow
 * @x: number
 * @y: exposant
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return ((y == 0) ? 1 : _pow_recursion(x, y - 1) * x);
}
