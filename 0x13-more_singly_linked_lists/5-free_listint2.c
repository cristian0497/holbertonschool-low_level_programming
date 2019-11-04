#include "lists.h"

/**
 * free_listint2 - funtion to free header
 * @head: pointer to head;
 */
void free_listint2(listint_t **head)
{
	listint_t *to_free2;

	if (head)
	{
	        while (*head)
		{
			to_free2 = *head;
			*head = to_free2->next;
			free(to_free2);
		}
	}
}
