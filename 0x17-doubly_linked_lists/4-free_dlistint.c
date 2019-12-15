#include "lists.h"
/**
 * free_dlistint - Remode Node
 * @head: adress node to delete
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
