#include "lists.h"
#include <stdlib.h>

/**
 * go_to_index - go to node index
 * @h: actual head
 * @idx: index
 * Return: node or 0
 */
listint_t *go_to_index(listint_t *h, unsigned int *idx)
{
	if (*idx == 0)
		return (h);
	if (h == 0)
		return (0);
	*idx = *idx - 1;
	return (go_to_index(h->next, idx));
}
/**
 * insert_nodeint_at_index - insert
 * @head: head of list
 * @idx: index to insert
 * @n: element
 * Return: new node addres
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = idx - 1;
	listint_t *index = go_to_index(*head, &i);
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (index == 0 && i > 0)
		return (0);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == 0)
		return (0);
	node->n = n;
	if (index == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = (index->next == 0) ? 0 : index->next;
		index->next = node;
	}
	return (node);
}
