#include "lists.h"

/**
 * free_listint - funtion free
 * @head: head of main funtion
 */
void free_listint(listint_t *head)
{
	listint_t *to_free;

	if (head != NULL)
	{
		while (head != NULL)
		{
			to_free = head->next;
			free(head);
			head = to_free;
		}
	}
}
