#include "lists.h"

/**
 * listint_len - leng of list
 * @h: head of list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	if (h == 0)
		return (0);
	return (1 + listint_len(h->next));
}
