#include "lists.h"

/**
 * print_listint - Funtion to print list in main file
 * @h: Pointer to struct list
 * Return: cont
 */

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
