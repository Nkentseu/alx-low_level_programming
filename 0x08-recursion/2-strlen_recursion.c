#include "main.h"

/**
 * _strlen_recursion - leng
 * @s: string
 * Return: leng of s or 0 if s == NULL
 */
int _strlen_recursion(char *s)
{
	return ((s == 0 || s[0] == '\0') ? 0 : 1 + _strlen_recursion((s + 1)));
}
