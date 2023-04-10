#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print safe
 * @head: head of list
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp = 0;
	size_t nbr = 0;

	if (head == 0)
	{
		exit(98);
		return (0);
	}
	tmp = (listint_t *)head;
	while (tmp != 0)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		nbr++;
	}
	return (nbr);
}
