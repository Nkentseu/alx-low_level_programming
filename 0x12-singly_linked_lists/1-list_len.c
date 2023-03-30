#include "lists.h"

/**
 * list_len - count number of node in this list
 * @h: list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	if (h == 0)
		return (0);
	return (1 + list_len(h->next));
}
