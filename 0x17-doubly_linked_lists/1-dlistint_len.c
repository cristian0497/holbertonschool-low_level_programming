#include "lists.h"
/**
 * dlistint_len - return the num of nodes
 * @h: node
 * Return: cont, num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		h = h->next;
		cont += 1;
	}
	return (cont);
}
