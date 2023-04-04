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
 * delete_nodeint_at_index - delete
 * @head: head of list
 * @index: index to insert
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = index;
	listint_t *del = 0;
	listint_t *prev = 0;

	if (head == 0 || *head == 0)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = del->next;
		free(del);
		del = 0;
	}
	else
	{
		prev = *head;
		del = prev->next;
		while (i != 0)
		{
			prev = del;
			del = prev->next;
			if (del == 0)
				break;
		}
		if (del == 0)
			return (-1);
		prev->next = del->next;
		free(del);
		del = 0;
	}
	return (1);
}
