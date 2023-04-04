#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert
 * @head: head of list
 * @idx: index to insert
 * @n: element
 * Return: new node addres
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev = 0;
	listint_t *node = 0;

	if ((head == 0 || *head == 0) && idx > 0)
		return (0);
	prev = *head;
	while (prev != 0 && i < idx - 1)
	{
		i++;
		prev = prev->next;
	}
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == 0)
		return (0);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		if (prev == 0)
			return (0);
		node->next = prev->next;
		prev->next = node;
	}
	return (node);
}
