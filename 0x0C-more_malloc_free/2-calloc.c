#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - calloc
 * @nmemb: mem byte
 * @size: number
 * Return: 0 or memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	mem = malloc(nmemb * size);
	if (mem == 0)
		return (0);
	memset(mem, 0, nmemb * size);
	return (mem);
}
