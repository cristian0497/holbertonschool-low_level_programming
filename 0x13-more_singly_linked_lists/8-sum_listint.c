#include "lists.h"

/**
 * sum_listint - funtion sum n values
 * @head: addres of nodes
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		h = head;
		sum += h->n;
		head = h->next;
	}
	return (sum);
}
