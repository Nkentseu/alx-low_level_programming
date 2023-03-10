#include "main.h"

/**
 * _isalpha - detecter the alphabet caracter
 * @c: the char tha we going to determine if is alphabet or not
 * Return: 1 if c is alphabet or 0 if c is not alphabet
 */
int _isalpha(int c)
{
	return ((('a' <= c) && (c <= 'z')) || ((('A' <= c) && (c <= 'Z'))));
}
