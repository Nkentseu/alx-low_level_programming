#include "lists.h"
#include <stdio.h>

/**
 * lengl - leng of list
 * @head: header of list
 * Return: number of element
 */
size_t lengl(listint_t *head)
{
	return ((head == 0) ? 0 : 1 + lengl(head->next));
}

/**
 * swapper - swape symetry
 * @head: head of list
 * @size: size of list
 * @idx: index to swap
 * Return: head list
 */
listint_t *swapper(listint_t *head, size_t size, size_t idx)
{
	listint_t *prevL = 0;
	listint_t *prevR = 0;
	listint_t *l = 0;
	listint_t *r = 0;
	listint_t *t = 0;
	size_t i = 1;

	printf("%lu>\n", idx);
	if (head == 0)
		return (0);
	printf(">1\n");
	if (size == 2)
	{
		prevL = head->next;
		head->next = 0;
		prevL->next = head;
		head = prevL;
		return (head);
	}
	printf(">2\n");
	prevR = head;
	while (i++ < size - idx - 1 && prevR != 0)
		prevR = prevR->next;
	printf(">3\n");
	if (idx == 0)
	{
		prevL = prevR->next;
		prevL->next = head->next;
		head->next = 0;
		prevR->next = head;
		head = prevL;
		return (head);
	}
	i = 1;
	printf(">4\n");
	while (i++ < idx)
		prevL = prevL->next;
	printf(">5\n");
	l = prevL->next;
	r = prevR->next;
	t = l->next;
	prevL->next = r;
	prevR->next = l;
	l->next = r->next;
	r->next = t;
	return (head);
}

/**
 * reverse_listint - reverse the list
 * @head: head of node
 * Return: pointer of first node
 */
listint_t *reverse_listint(listint_t **head)
{
	size_t leng = 0;
	size_t i = 0;

	if (head == 0 || *head == 0)
		return (0);
	leng = lengl(*head);
	while (i < leng / 2)
	{
		swapper(*head, leng, i);
		i++;
	}
	return (*head);
}
