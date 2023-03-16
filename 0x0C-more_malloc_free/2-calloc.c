#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: mem byte
 * @size: number
 * Return: 0 or memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb * size == 0)
		return (0);
	return (malloc(nmemb * size));
}
