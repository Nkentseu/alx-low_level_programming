#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head->str);
	head->str = 0;
	head->len = 0;
	free(head);
}
