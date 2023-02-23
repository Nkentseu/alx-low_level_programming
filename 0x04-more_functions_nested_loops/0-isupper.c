#include "main.h"

/**
 * _isupper - determine if char is uppper alpha letter
 * @c: the char value
 * Return: 0 if c is not upper 1 if it
 */
int _isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}
