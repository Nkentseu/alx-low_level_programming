#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - itterated on the action function
 * @array: array
 * @size: number element of array
 * @action: the pointer of function iterator
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
