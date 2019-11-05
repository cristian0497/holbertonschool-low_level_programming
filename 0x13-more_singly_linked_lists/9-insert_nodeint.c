#include "lists.h"

/**
 * insert_nodeint_at_index - funtion add a node
 * @head: addres of head
 * @idx: index to add new node
 * @n: num to add
 * Return: h
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *tmp = *head;
	unsigned int cont = 0;

	h = malloc(sizeof(listint_t));
	if (!h)
	{
		free(h);
		return (NULL);
	}
	h->n = n;
	while (tmp && cont < idx - 1)
	{
		tmp = tmp->next;
		cont++;
	}
	if (tmp || (idx == 0 || cont == idx - 1))
	{
		if (h)
		{
			if (idx == 0)
			{
				tmp = *head;
				*head = h;
				h->next = tmp;
				return (h);
			}
			else
			{
				h->next = tmp->next;
				tmp->next = h;
			}
			return (h);
		}
	}
	return (NULL);
}
