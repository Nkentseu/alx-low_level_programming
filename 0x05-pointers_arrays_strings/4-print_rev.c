#include "main.h"
#include <unistd.h>

/**
 * recurse - print recurse
 * @s: str
 * Return: void
 */
void recurse(char *s)
{
	if (s == 0 || s[0] == '\0')
		return;
	recurse((s + 1));
	write(1, &s[0], 1);
}

/**
 * print_rev - reverse printing
 * @s: str
 * Return: void
 */
void print_rev(char *s)
{
	char end = '\n';

	recurse(s);
	write(1, &end, 1);
}
