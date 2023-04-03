#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free list
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	free_listint(head->next);
	free(head);
	head = 0;
}
