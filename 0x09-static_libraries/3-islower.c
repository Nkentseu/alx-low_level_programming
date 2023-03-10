#include "main.h"

/**
 * _islower - detecter the lower caracter
 * @c: the char tha we going to determine if is lower or not
 * Return: 1 if c is lower or 0 if c is not lower
 */
int _islower(int c)
{
	return (('a' <= c) && (c <= 'z'));
}
