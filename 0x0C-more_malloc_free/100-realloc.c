#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloc
 * @ptr: void pointer
 * @old_size: prev size
 * @new_size: new size
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (new_ptr == 0)
		return (0);
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
