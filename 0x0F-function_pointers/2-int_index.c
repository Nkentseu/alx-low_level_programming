#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of array
 * @cmp: function
 * Return: int index search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
