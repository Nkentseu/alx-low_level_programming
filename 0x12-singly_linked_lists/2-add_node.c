#include "lists.h"
#include <stdlib.h>

/**
 * leng - determine leng of string
 * @str: string
 * Return: leng of str
 */
int leng(const char *str)
{
	if (str == 0 || str[0] == '\0')
		return (0);
	return (1 + leng((str + 1)));
}

/**
 * add_node - add new node in this list
 * @head: head of list
 * @str: value of node
 * Return: new node add or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = 0;

	if (head == 0)
		return (0);
	node = (list_t *)malloc(sizeof(list_t));
	if (node == 0)
		return (0);
	node->len = leng(str);
	if (str != 0)
	{
		node->str = (char *)malloc(sizeof(char) * (node->len + 1));
		if (node->str == 0)
		{
			node->len = 0;
			free(node);
		}
		else
		{
			unsigned int i = 0;

			for (i = 0; i < node->len; i++)
				node->str[i] = str[i];
			node->str[node->len] = '\0';
		}
	}
	node->next = *head;
	*head = node;
	return (node);
}
