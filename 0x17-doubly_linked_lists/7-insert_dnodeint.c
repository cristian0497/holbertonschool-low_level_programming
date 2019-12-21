#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node to a linked list
 * @h: linked list pointer
 * @idx: num of index to add
 * @n: valu for node
 * Return: linked list with new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = (*h), *node;
	unsigned int len = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	while (tmp && len < idx - 1)
	{
		tmp = tmp->next;
		len++;
	}

	if (idx == 0)
	{
		node->n = n;
		node->prev = NULL;
		if (node->next)
			node->next->prev = node;
		(*h)->prev = node;
		(*h) = node;
		return (node);
	}
	else
	{
		node->n = n;
		node->next = tmp->next;
		node->prev = tmp;
		tmp->next = node;
		if (node->next)
			node->next->prev = node;
	}
	return (node);
}
