#include "lists.h"

/**
 * get_dnodeint_at_index - return N node
 * @head: addres of linked list
 * @index: num of node
 * Return: node num index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (head)
	{
		if (cont == index)
			return (head);
		head = head->next;
		cont++;
	}
	return (NULL);
}
