#include "lists.h"

/**
 * print_list - funtion print linked list
 * @h: const type pointer list_t
 * Return: cont times
 */

size_t print_list(const list_t *h)
{
	int cont;

	cont = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			cont++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cont++;
	}
	return (cont);
}
