#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add new element
 * @head: head of list
 * @n: new int
 * Return: the address of new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (node == 0)
		return (0);
	node->n = n;
	node->next = 0;
	if (tmp == 0)
		*head = node;
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
