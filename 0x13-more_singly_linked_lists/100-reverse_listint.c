#include "lists.h"
#include <stdio.h>

/**
 * get_last - get and disconnecte last node
 * @h: head of list
 * Return: the last node or null
 */
listint_t *get_last(listint_t **h)
{
	listint_t *last = 0;

	if (h == 0 || *h == 0)
		return (0);
	if((*h)->next == 0)
	{
		last = *h;
		*h = 0;
	}
	else if ((*h)->next->next == 0)
	{
		last = (*h)->next;
		(*h)->next = 0;
	}
	else
	{
		listint_t *t = 0;

		last = *h;
		while (last->next->next != 0)
			last = last->next;
		t = last;
		last = last->next;
		t->next = 0;
	}

	return (last);
}

/**
 * push_last - push in end
 * @h: head of list
 * @n: node
 * Return: void
 */
void push_last(listint_t **h, listint_t* n)
{
	listint_t *l = 0;

	printf("%d::\n", n->n);
	if (h == 0)
		return;
	if (*h == 0)
	{
		*h = n;
		return;
	}
	l = *h;
	while (l->next != 0)
		l = l->next;
	l->next = n;
}

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
	while (h != 0)
	{
		push_last(&nh, get_last(&h));
	}
	*head = nh;
	return (nh);
}
