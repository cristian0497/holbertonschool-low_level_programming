#include "lists.h"

/**
 * listint_len - funtion to count ints
 * @h: header of main function
 * Return: cont size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
