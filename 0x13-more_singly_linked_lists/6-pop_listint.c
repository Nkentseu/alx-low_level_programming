#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head of list
 * Return: the head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node = 0;
	int r = 0;

	if (head == 0 || *head == 0)
		return (0);
	node = *head;
	*head = node->next;
	r = node->n;
	free(node);
	node = 0;
	return (r);
}
