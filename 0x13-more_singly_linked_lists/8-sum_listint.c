#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: head of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	return ((head == 0) ? 0 : head->n + sum_listint(head->next));
}
