#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: the head of list
 * @index: index of node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == 0)
		return (0);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
