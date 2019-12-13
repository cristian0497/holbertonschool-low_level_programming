#include "lists.h"

/**
 * print_dlistint - print list objets linked list
 * @h: linked list
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cant = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cant += 1;
		h = h->next;
	}
	return (cant);
}
