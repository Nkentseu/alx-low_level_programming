#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - del
 * @head: head of list
 * @index: index to insert
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev = 0;
	listint_t *node = 0;

	if (head == 0 || *head == 0)
		return (-1);
	if (index == 0 && *head != 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	prev = *head;
	while (prev != 0 && i < index - 1)
	{
		i++;
		prev = prev->next;
	}
	if (prev == 0)
		return (-1);
	node = prev->next;
	prev->next = node->next;
	free(node);
	node = 0;
	return (1);
}
