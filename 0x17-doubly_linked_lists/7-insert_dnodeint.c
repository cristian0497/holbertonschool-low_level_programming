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
	unsigned int cont;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->prev = NULL;
		node->next = (*h);
		(*h)->prev = node;
		(*h) = node;
		return ((*h));
	}
	for (cont = 0; cont < idx; cont++)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
	}
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	tmp = tmp->next;
	tmp->prev = node;
	return (tmp);
}
