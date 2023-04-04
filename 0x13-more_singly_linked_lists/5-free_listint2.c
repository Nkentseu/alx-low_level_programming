#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list
 * @head: head of list
 * Return: void
 */
void free_list(listint_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head);
	head = 0;
}

/**
 * free_listint2 - free list 2
 * @head: head of list
 * Return: null
 */
void free_listint2(listint_t **head)
{
	if (head != 0)
	{
		free_list(*head);
		*head = 0;
	}
}
