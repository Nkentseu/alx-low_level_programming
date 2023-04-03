#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new element
 * @head: head of list
 * @n: new int
 * Return: the address of new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (node == 0)
		return (0);
	node->n = n;
	node->next = 0;
	if (head != 0)
		node->next = *head;
	*head = node;
	return (node);
}
