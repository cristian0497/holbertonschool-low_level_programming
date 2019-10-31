#include "lists.h"

/**
 * list_len - funtion that count structure h
 * @h: structure type list_l
 * Return: cont
 */
size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
