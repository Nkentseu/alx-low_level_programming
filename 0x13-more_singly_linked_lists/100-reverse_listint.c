#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse the list
 * @head: head of node
 * Return: pointer of first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = 0;
	listint_t *nh = 0;

	if (head == 0 || *head == 0)
		return (0);
	h = *head;
	nh = h->next;
	while (1)
	{
		if (h == *head)
		{
			h->next = 0;
		}
		if (nh == 0)
		{
			nh = h;
			break;
		}
		if (nh->next == 0)
		{
			nh->next = h;
			break;
		}
		*head = h;
		h = nh;
		nh = nh->next;
		h->next = *head;
	}
	*head = nh;
	return (nh);
}
