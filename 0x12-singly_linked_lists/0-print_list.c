#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the linked list
 * @h: list_t the instance of linked list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	if (h == 0)
		return (0);
	if (h->str == 0)
	{
		printf("[0] (nil)\n");
		return (1 + print_list(h->next));
	}
	printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
