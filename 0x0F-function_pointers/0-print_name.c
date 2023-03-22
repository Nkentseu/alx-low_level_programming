#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name use the pointer of function
 * @name: name to print
 * @f: the pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
