#include "lists.h"
/**
 * sum_dlistint - sum the values of linked list
 * @head: linked list
 * Return: sum of values n of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
